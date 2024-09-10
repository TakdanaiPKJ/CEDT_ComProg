#include "bits/stdc++.h"
using namespace std;

set <string > st;

int main(){

    string str;
    cin >> str;
    str += "$";
    st.insert(str);

    for(int i=0;i<str.size()-1;i++){
        reverse(str.begin(),str.begin()+str.size()-1);
        reverse(str.begin(),str.end());
        st.insert(str);
    }
    
    for(auto x: st){
        cout << x[str.size()-1] ;
    }

    return 0;
}
