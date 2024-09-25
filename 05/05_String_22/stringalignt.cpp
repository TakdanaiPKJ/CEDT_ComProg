#include "bits/stdc++.h"
using namespace std;

int main(){

  string a,b;
  cin >> a >> b;
  int maxx = INT_MIN;
  bool fst = false;
  int shft = 0;

  for(int i=0;i<a.length();i++){
    int cnt = 0;
    for(int j=0;j<b.length();j++){
      if(a[i+j] == b[j]){
        cnt++;
      }
    }
    if(cnt > maxx){
      maxx = cnt;
      shft = i;
    }
  }

  for(int i=0;i<b.length();i++){
    int cnt = 0;
    for(int j=0;j<a.length();j++){
      if(b[i+j] == a[j]){
        cnt++;
      }
    }
    if(cnt > maxx){
      maxx = cnt;
      shft = i;
      fst = true;
    }
  }
  if(fst){
    while(shft--) cout << "-";
    cout << a << "\n" << b << "\n" << maxx;
  }
  else {
    cout << a << "\n";
    while(shft--) cout << "-";
    cout << b << "\n" << maxx;
  }

 return 0;
}
