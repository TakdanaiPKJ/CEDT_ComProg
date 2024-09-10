#include "bits/stdc++.h"
using namespace std;

int main(){

    double p;
    cin >> p;
    int k = 1;
    double t = 1;
    
    while (true)
    {
        t = t*(365-(k-1))/365;
        if(1-t>=p) break;
        k++;
    }
    

    cout << k;

    return 0;
}
