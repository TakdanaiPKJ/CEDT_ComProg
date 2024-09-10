#include "bits/stdc++.h"
using namespace std;

multiset <char > mt1;
multiset <char > mt2;

int main(){

    string a,b;
    getline(cin>>ws,a);
    getline(cin>>ws,b);

    for(auto x: a) {
        if(isalnum(x)) mt1.insert(tolower(x));
    }
    for(auto x: b) {
        if(isalnum(x)) mt2.insert(tolower(x));
    }
    /*
    for(auto x:mt1) cout << x << " ";
    cout << endl;
    for(auto x:mt2) cout << x << " ";
    */

   cout << (mt1==mt2 ? "YES" : "NO");

    return 0;
}
