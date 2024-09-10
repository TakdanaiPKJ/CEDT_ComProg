#include "bits/stdc++.h"
using namespace std;


vector <int > vt;
set <int > st;
priority_queue<tuple<int, int, int>, vector<tuple<int, int, int> >, greater<tuple<int, int, int> > >  pq;

int main(){

    int n,tmp;
    int dm = INT_MIN;
    int cnt = 0;
    cin >> tmp;
    vt.push_back(tmp);
    while (cin>>n){
        if(tmp == n) cnt++;
        else{
            dm = max(cnt+1,dm);
            cnt =0;
        } 
        vt.push_back(n);
        tmp = n;
    }
    //cnt = (vt[1]==vt[0] ? 1 : 0);
    cnt = 1;
    for(int i=1;i<vt.size();i++){
        if(vt[i]==vt[i-1]){
            cnt++;
        }
        else{
            if(cnt == dm){
                st.insert(i-1);
                pq.push({vt[i-1],i-dm,i});
                
            }
            cnt =1;
        }
        
    }
    if(cnt == dm){
        pq.push({vt[vt.size()-1],vt.size()-dm,vt.size()});
    }//st.insert(vt.size());

    while (!pq.empty()){
        //cout << get<0>(pq.top());
        printf("%d --> x[ %d : %d ]\n",get<0>(pq.top()),get<1>(pq.top()),get<2>(pq.top()));
        pq.pop();
    }
    
    

    return 0;
}
