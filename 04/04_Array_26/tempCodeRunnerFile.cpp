#include "bits/stdc++.h"
using namespace std;

vector <int> vt;

int main(){

    int n,memz;
    cin >> n;
    for(int i=0;i<n*n;i++){
        int a;
        cin >> a;
        if(a==0) {
            memz = i/n;
            continue;
        }
        vt.push_back(a);
    }

    //for(auto x: vt) cout << x << " ";

    int cnt = 0;
    for(int i=0;i<vt.size()-1;i++){
        for(int j=i+1;j<vt.size();j++){
            cout << vt[i] << vt[j] << endl;
            if(vt[i]>vt[j]) cnt ++;
        }
    }
    //cout << cnt;
    if(n%2==0){
        if(cnt%2==0) cout << (memz%2==0 ? "NO" : "YES");
        else cout << (memz%2==0 ? "YES" : "NO");
    }
    else {
        cout << (cnt%2==0 ? "YES" : "NO");
    }

    return 0;
}
 