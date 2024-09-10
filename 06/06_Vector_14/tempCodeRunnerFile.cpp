#include "bits/stdc++.h"
using namespace std;

set <int > st;

int main(){

    int a;
    while(cin>>a){
        st.insert(a);
    }

    int cnt =0;
    cout << st.size() << "\n";
    for(auto x:st){
        cout << x << " ";
        if(++cnt==10) break;
    }

    return 0;
}
