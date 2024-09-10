#include "bits/stdc++.h"
using namespace std;

int main(){

    int h1, m1, s1, h2, m2, s2;

    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;

    int t1 = h1 * 60 * 60 + m1 * 60 + s1;
    int t2 = h2 * 60 * 60 + m2 * 60 + s2;
    int dh, dm, ds;
    int tmp;

    if (t2 > t1){
        ds = t2 - t1;
        dh = ds / (60 * 60);
        ds -= dh * 60 * 60;
        dm = ds / 60;
        ds -= dm * 60;
    }
    else {
        ds = abs(60-((s1+s2)%60));
        tmp = s1+s2>=60 ? 1 : 0;
        cout << tmp;
        dm = abs(60-((m1+m2+tmp)%60));
    }

    cout << dh << ':' << dm << ':' << ds;

    return 0;
}