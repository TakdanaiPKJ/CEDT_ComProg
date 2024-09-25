#include "bits/stdc++.h"
using namespace std;

int arr[500];
set <int> st;

int main(){

  int n,maxx = INT_MIN;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> arr[i];
    maxx = max(maxx,arr[i]);
  }
  int cnt =0;
  for(int k=1;k<=maxx;k++){
    for(int i=0;i<n;i++){
      cout << "\n";  
      for(int j=0;j<k;j++){
        if(arr[i+j] > k || st.find(arr[i+j]) != st.end()) continue;
        st.insert(arr[i+j]);
        cout << arr[i+j];
      }
      if(st.size() != i ){
        st.clear();
      } 
      bool found = true;
      for(int j=1;j<k;j++){
        if(st.find(j) == st.end()){
          st.clear();
          found = false;
          break;
        }
      }
      if(found) cnt ++;  

    }

  }
  cout << cnt;

 return 0;
}
