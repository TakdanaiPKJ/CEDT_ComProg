#include "bits/stdc++.h"
using namespace std;

int main(){

    string a,b;
    //cin.ignore();
    getline(cin,a);
    getline(cin,b);
    //cout << a.size() << b.size();
    if(a.length()!=b.length()){
        cout << "Incomplete answer";
        return 0;
    }
    int score =0;
    for(int i=0;i<a.length();i++){
        if(a[i]==b[i]) score++;
    }
    cout << score;

    return 0;
}
