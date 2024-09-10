#include "bits/stdc++.h"
using namespace std;

map <string ,double> um;
map <string ,double> sell;
priority_queue < pair<double,string>> pq;

int main(){

    string a;
    while (true){
        cin >> a;
        if(a=="END") break;
        double b;
        cin >> b;
        um.insert({a,b});
    }

    while (cin >> a){
        sell[a] += um[a];
    }

    for(auto x:sell){
        pq.push({x.second,x.first});
    }
    //cout << pq.top().first;
    for(int i=0;i<3 && !pq.empty() && pq.top().first!=0;i++){

        cout << pq.top().second << " " << pq.top().first << "\n";
        pq.pop();
    
    }
    
    

    return 0;
}
