#include "bits/stdc++.h"
using namespace std;

int main(){

  unsigned long long n;
  string a;
  cin >> n;
  getline(cin>>ws,a);
  string tmp = "";
  unsigned long long sum = 0;
  for(auto x: a){
    if(isdigit(x)){
      tmp += x;
    }
    else {
      if(tmp == "") continue;
      int sumst = stoull(tmp);
      sum += sumst;
      tmp = "";
    }
  }
  sum += stoull(tmp);
  unsigned long long ans = sum*n;
  //cout << a << "\n";
  cout << ans;

 return 0;
}
