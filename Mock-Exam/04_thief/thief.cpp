#include "bits/stdc++.h"
using namespace std;

int arr[250000];

unordered_map <int,int> mp;

int main(){

  int n,sum,all=0;
  cin >> n >> sum;

  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    arr[a] ++;
    all += a; 
    mp[a] = i;   
  }
  all -= sum;
  for(int i=1;i<=25001;i++){
    if(arr[i] == 0  ) continue;
    /*
    for(int j=1;j<=60;j++){
      if(arr[j] == 0 || (arr[j]<=1 && i==j)) continue;
      if(arr[all - j] >= 1  ){
        cout << mp[i] << " " << i << " " << mp[j] << " " <<j  << "\n";
        //return 0;
      }
    }*/
   if(arr[all-i] >= 1 || (arr[all-i] >= 2 && all-i==i  ) ){
    set<pair<int,int>> st;
    st.insert({mp[i],i});
    st.insert({mp[all-i],all-i});
    //cout << i << "\n";
    for(auto x:st) cout << x.first << " " << x.second << "\n";
    //std::cout << mp[i] << " " << i << "\n" << mp[all-i] << " " << all-i;
    return 0;
   }
  }

 return 0;
}
