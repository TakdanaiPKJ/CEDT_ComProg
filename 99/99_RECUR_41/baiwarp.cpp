#include "bits/stdc++.h"
using namespace std;

vector <int> adj[9999];

bool findd = false;

void findpath(int st,int en){
    stack <int> q;
    q.push(st);

    while (!q.empty())
    {
        int tmp = q.top(); q.pop();
        if (tmp==en) findd = true ;
        cout << tmp << "-> " ;
        for(auto x: adj[tmp]){
            q.push(x);
        }
    }
    
    

}

int main(){

    int wp,sta,endd;
    cin >> wp >> sta >> endd;
    for(int i=0;i<wp;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    findpath(sta,endd);

    cout << (findd ? "yes" : "no");
    

    return 0;
}
