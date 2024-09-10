#include "bits/stdc++.h"
using namespace std;

vector <string> n = {"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"};
vector <string> nn= {"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"};

int main(){

    //Edge a = {"Rovert","Dick"};

    int num;
    cin >> num;
    //cout << n[0];
    for(int i=0;i<num;i++){
        bool c = false;
        string a;
        cin >> a;
        for(int j=0;j<10;j++){
            if(a == n[j]) {
                cout << nn[j] <<"\n";
                c =true;    
                break;
            }
            else if(a == nn[j]){
                cout << n[j] << "\n";
                c = true;
                break;
            }
        }
        if(!c) cout << "Not found\n";
    }


    return 0;
}
