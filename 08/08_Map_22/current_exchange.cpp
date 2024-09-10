#include "bits/stdc++.h"
using namespace std;

unordered_map <string , double> um;

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string a;
        double b;
        cin >> a >> b;
        um[a] = b;
    }
    int mon;
    string ip,prev;
    cin >> mon;
    cin >> prev;
    cout << mon << " " << prev;

    while (cin >> ip){
        
        if(ip == prev){

        }
        else if(ip == "THB"){
            mon *= um[prev];
        }
        else if(prev == "THB"){
            mon /= um[ip];
        }
        else {
            mon *= um[prev]/um[ip];
        }
        prev = ip;
        cout << " -> "<< mon << " " << ip ;
    }
    

    return 0;
}
