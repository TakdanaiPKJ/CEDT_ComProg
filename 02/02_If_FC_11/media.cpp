#include "bits/stdc++.h"
using namespace std;

int main(){

    vector<int> vt;
    for(int i=0;i<5;i++){
        int a;
        cin >> a;
        vt.push_back(a);
    }
    sort(vt.begin(),vt.end());
    cout << vt[2];


    return 0;
}
