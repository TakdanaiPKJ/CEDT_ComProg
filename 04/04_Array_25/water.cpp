#include "bits/stdc++.h"
using namespace std;

int arr[10000][10000];

int main(){

  int n;
  cin >> n;
  int maxx = INT_MIN;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    maxx =max(maxx,a);
    for (int j = 0; j < a; j++){
      arr[j][i] = 1;
    }
  }
  int ans =0;
  int cnt =0;
  bool chk = false;
  for(int i=0;i<maxx;i++){
    cnt =  0;
    chk = false ;
    for(int j=1;j<n;j++){
      //cout << (arr[i][j] == 0 ? " " : "1");           
      if(!chk && arr[i][j] == 0 && arr[i][j-1] == 1){
        chk = true;
      }
      if(arr[i][j] == 0 && chk){
        cnt ++;
        //cout << i << j ;
      }
       else if(chk && arr[i][j] == 1 && arr[i][j-1] == 0) {
        ans += cnt;
        cnt = 0;
        chk = false;
      }
    }
    cout << "\n";
  }
  cout << ans;

  return 0;
}
