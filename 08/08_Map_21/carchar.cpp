#include "bits/stdc++.h"
using namespace std;

unordered_map<string, string> ump;
vector<string> vt;

int main(){

  string a,b;
  while (cin >> a >> b){
    if(ump.find(b) == ump.end() ){
      ump[b] = a;
      vt.push_back(b);
    }
    else {
      ump[b] += " " + a;
    }
  }

  for(auto x: vt){
    cout << x << ": " << ump[x] << "\n";
  }

  
  return 0;
}
