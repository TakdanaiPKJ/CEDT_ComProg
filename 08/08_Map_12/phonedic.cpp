#include "bits/stdc++.h"
using namespace std;

map <string ,string > mp1;
map <string ,string > mp2;

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string a,b,c;
        cin >> a >> b >> c;
        a += " " +b;
        mp1[a] = c;
        mp2[c] = a;
    }

    cin >> n;
    for(int i=0;i<n;i++){
        string a;
        getline(cin>>ws,a);
        if(mp1.find(a) == mp1.end()){
            if(mp2.find(a) == mp2.end()){
                cout << a << " --> Not found\n";
            }
            else cout << a << " --> " << mp2[a] << "\n";
        }
        else cout << a << " --> " << mp1[a] << "\n";
        
    }

    for(auto x : mp1){
        //cout << x.second << " ";
    }

    return 0;
}
