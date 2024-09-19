#include "bits/stdc++.h"
using namespace std;

unordered_map<string, int> ump;
priority_queue<pair<int,string >> pq;

int cvt(string ip){
  string min = "";
  string sec = "";
  bool chk = false;
  for(auto x: ip){
    if(x ==':'){
      chk = true;
      continue;
    }
    if(chk) sec += x;
    else min += x;
  }
  int tmp = stoi(min);
  tmp*=60;
  tmp += stoi(sec);
  
  return tmp;
}

int main(){

  string song,auth,genre,len;
  while (cin >> song >> auth >> genre >> len){
    ump[genre] += cvt(len);
  }
  for(auto x: ump){
    pq.push({x.second,x.first});
  }
  for(int i=0;i<3;i++){
    if(pq.empty()) break;
    cout << pq.top().second << " --> " << pq.top().first/60 << ":" << (pq.top().first)%60 << "\n";
    pq.pop();
  }

 return 0;
}
