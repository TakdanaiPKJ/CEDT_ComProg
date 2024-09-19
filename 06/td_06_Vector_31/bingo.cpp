#include "bits/stdc++.h"
using namespace std;

unordered_map<char , int> ump = { {'B',0}, {'I',1}, {'N',2}, {'G',3}, {'O',4} };
unordered_map<int , char> umpb = { {0,'B'}, {1,'I'}, {2,'N'}, {3,'G'}, {4,'O'} };
vector<string > vt[6];
bool bing[10][10];

string chkhori() {
  for (int i = 0;i < 5;i++) {
    int cnt = 0;
    string kep = "";
    for (int j = 0;j < 5;j++) {
      if (bing[i][j]) {
        cnt++;
        if(j==2 && i==2) continue;
        kep += umpb[j] + vt[i][j] + (j == 4 ? "" : ", ");
      }
      else break;
    }
    if (cnt == 5) {
      return kep;
    }
  }
  return "";
}

string chkvert() {
  for (int i = 0;i < 5;i++) {
    int cnt = 0;
    string kep = "";
    for (int j = 0;j < 5;j++) {
      if (bing[j][i]) {
        cnt++;
                if(j==2 && i==2) continue;
        kep += umpb[i] + vt[j][i] + (j == 4 ? "" : ", ");
      }
      else break;
    }
    if (cnt == 5) {
      return kep;
    }
  }
  return "";
}

pair<string , string> chkcros() {
  int cntr = 1 , cntl = 0;
  string kepl = "" , kepr = "";
  stack<string> q;
  for (int i = 0;i < 5;i++) {
    for (int j = 0;j < 5;j++) {
      if (i == j && bing[i][j]) {
        cntl++;
        if (i == 2 && j == 2) continue;
        kepl += umpb[j] + vt[i][j] + (i == 4 ? "" : ", ");
      }
      if (i + j == 4 && bing[i][j]) {
        cntr++;
        if (i == 2 && j == 2) continue;
        q.push(umpb[j] + vt[i][j] + (i == 0 ? "" : ", "));
      }
    }
  }
  while (!q.empty()) {
    kepr += q.top();
    q.pop();
  }
  if (cntl == 5 && cntr == 5) return make_pair(kepl , kepr);
  else if (cntl == 5) return make_pair(kepl , "");
  else if (cntr == 5) return make_pair("" , kepr);
  else return make_pair("" , "");
}

int main() {

  for (int i = 0;i < 5;i++) {
    char tmp;
    cin >> tmp;
  }
  bing[2][2] = true;
  for (int i = 0;i < 5;i++) {
    for (int j = 0;j < 5;j++) {
      string tmp;
      cin >> tmp;
      vt[i].push_back(tmp);
    }
  }
  string a;
  int cnt = 0;
  bool found = false;
  while (cin >> a) {
    if (found) continue;
    string num = a.substr(1);
    int row = ump[a[0]];
    for (int i = 0;i < 5;i++) {
      if (vt[i][row] == num) {
        bing[i][row] = true;
      }
    }
    cnt++;
    string vert = "" , hori = "";
    pair<string , string> cros = { "","" };
    vert = chkvert();
    hori = chkhori();
    cros = chkcros();

    if (vert != "" || hori != "" || cros.first != "" || cros.second != "") {
      cout << cnt << "\n";
      if (hori != "") cout << hori << "\n";
      if (vert != "") cout << vert << "\n";
      if (cros.first != "") cout << cros.first << "\n";
      if (cros.second != "") cout << cros.second << "\n";
      found = true;
    }

  }
  /*
  for (int i = 0;i < 5;i++) {
    for (int j = 0;j < 5;j++) {
      cout << bing[i][j] << " ";
    }
    cout << "\n";
  }

  cout << chkcros().second;
  */
  return 0;
}
