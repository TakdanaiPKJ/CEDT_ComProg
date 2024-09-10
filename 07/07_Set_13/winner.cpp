#include "bits/stdc++.h"
using namespace std;

set <string > win;
set <string > lose;

int main(){

    string a,b;
    while(cin >> a >> b){
        win.insert(a);
        lose.insert(b);
    }
    bool nowin=true;
    for(auto x:win){
        if(lose.find(x) == lose.end()){
            nowin = false ;
            cout << x << " ";
        }
    }

    if(nowin) cout << "None";

    return 0;
}
