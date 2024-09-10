#include "bits/stdc++.h"
using namespace std;

string n[15] = {"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"};
string nn[15]= {"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"}

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        for(int j=0;j<10;j++){
            if(a == n[j]) {
                cout << nn[j] <<"\n";
                break;
            }
        }
    }


    return 0;
}
