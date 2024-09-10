#include "bits/stdc++.h"
using namespace std;

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2-1;j++){
            if(j-i>=n) break;
            if(i==n-1||i+j==n-1||j-i==n-1){
                cout << "*";
            }
            else cout << ".";
            
        }
        cout << "\n";
    }

    return 0;
}
