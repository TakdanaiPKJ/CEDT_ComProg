#include "bits/stdc++.h"
using namespace std;

vector <int > adj[10000];
vector<int > path;
set <vector<int> > ans;

void dfs(int now,int en){
  path.push_back(now);
  if(now == en) ans.insert(path);
  for(auto x:adj[now]){
    dfs(x,en);
  }
  path.pop_back();
}

int main() {

  int a , b , c;
  cin >> a >> b >> c;
  for (int i = 0;i < a;i++) {
    int firr , secc;
    cin >> firr >> secc;
    adj[firr].push_back(secc);
  }
  dfs(b , c);
  bool chk = true;
  for (auto x : ans) {
    for (int i = 0; i < x.size(); i++) {
      cout << x[i];
      if (i < x.size() - 1) cout << " -> ";
    }
    cout << "\n";
    chk = false;
  }
  if(chk) cout << "no";

  return 0;
}
