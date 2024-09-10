#include "bits/stdc++.h"
using namespace std;

int main(){

    int n;
    cin >> n;
    n-=543;
    n%=100;
    cout << (n+abs(n/4)+11)%7;
    
    return 0;
}
