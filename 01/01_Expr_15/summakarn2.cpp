/*
#include "bits/stdc++.h"
using namespace std;

int main(){

    double x;
    cin >> x;

    double y= ((pow(x,sqrt(log(pow(x+1,2)))))/(10-x));

    cout << round(y*1e6)/1e6;

    return 0;
}
*/

#ifdef ONPC
    #define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char
 
using namespace std;
// mt19937 rnd(239);
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
 
typedef long long ll;
typedef long double ld;
 
int solve() {

    double x;
    cin >> x;

    double y= ((pow(x,sqrt(log(pow(x+1,2)))))/(10-x));

    cout << round(y*1e6)/1e6;

    return 0;
}
 
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int TET = 1e9;
    //cin >> TET;
    for (int i = 1; i <= TET; i++) {
        if (solve()) {
            break;
        }
        #ifdef ONPC
            cout << "__________________________" << endl;
        #endif
    }
    #ifdef ONPC
        cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
    #endif
}