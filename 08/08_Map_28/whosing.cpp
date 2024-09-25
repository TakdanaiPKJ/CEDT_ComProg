#include "bits/stdc++.h"
using namespace std;

unordered_map <string , int> ump;
vector<string> vt[10000];

int main() {

  int n;
  cin >> n;
  int cnt = 1;
  for (int i = 0;i < n;i++) {
    string a;
    string tmp = "";
    string key = "";
    getline(cin >> ws , a);
    bool pass = true;
    for (auto x : a) {
      if (!pass) {
        pass = true;
        continue;
      }
      if (x != ',') tmp += x;
      else {
        pass = false;
        key = tmp;
        tmp = "";
      }
    }
    //cout << tmp << " -> " << key << "\n"; 
    if (ump.find(key) == ump.end()) {
      ump[key] = cnt;
      vt[cnt].push_back(tmp);
      cnt++;
    }
    else vt[ump[key]].push_back(tmp);
  }
  string a;
  getline(cin >> ws , a);
  string tmp = " ";
  for (auto x : a) {
    if (x != ',') tmp += x;
    else {
      tmp.erase(0 , 1);
      cout << tmp << " -> ";
      int len = 0;
      for (auto x : vt[ump[tmp]]) {
        len++;
        cout << x << (len == vt[ump[tmp]].size() ? "" : ", ");
      }
      if (vt[ump[tmp]].size() == 0) cout << "Not found";
      tmp = "";
      cout << "\n";
    }
  }
  int len = 0;
  tmp.erase(0,1);
  cout << tmp << " -> ";
  for (auto x : vt[ump[tmp]]) {
    len++;
    cout << x << (len == vt[ump[tmp]].size() ? "" : ", ");
  }
  if (vt[ump[tmp]].size() == 0) cout << "Not found";


  return 0;
}
