#include "bits/stdc++.h"
using namespace std;

struct Edge{
    string name;
    int cost;
};

vector <Edge> vt;

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string a;
        int b;
        cin >> a >> b;
        vt.push_back({a,b});
    }
    string str;
    string prev;
    bool fst = true;
    int mon=0;
    int o=0;
    while (cin>>str){
        string ct;
        ct += str[4] ;
        ct += str[5];
        //cout << prev << " ";
        //cout << ct << prev;
        if(ct == prev || fst){
            fst = false;
            prev = ct;
            break;
        }o++;
        for(auto x:vt){
            if(ct == x.name){
                //cout << fst;
                mon += x.cost;
                break;  
            }
        }
        prev = ct;
    }
    //cout << o;
    cout << mon;
    

    return 0;
}
