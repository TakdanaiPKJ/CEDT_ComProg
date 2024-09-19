#include "bits/stdc++.h"
using namespace std;

map <string , set<string>> mp;
set<string> ans;

int main() {

  string a , b;
  string st;
  while (cin >> a) {
    if (!(cin>>b)) {
      st = a;
      ans.insert(st);
      break;
    }
    mp[a].insert(b);
    mp[b].insert(a);
  }

  for(auto x:mp[a]){
    ans.insert(x);
    for(auto y:mp[x]){
      ans.insert(y);
      //cout << x << "->" << y << "\n";
    }
  }

  for(auto x:ans){
    cout << x << "\n";
  }

  return 0;
}
