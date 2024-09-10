#include "bits/stdc++.h"
using namespace std;

int main(){

    string n;
    int tod;
    string todd = "";
    string ans = "";
    cin >> todd;
    reverse(todd.begin(),todd.end());
    while (true){
        
        cin >> n;
        if(n=="END") break;
        int len = max(n.length(),todd.length());
        reverse(n.begin(),n.end()); 
        ans.clear();
        //cout << len << " ";
        for(int i=0;i<len;i++){
            int tmpn = (n[i]-'0'==-48 ? 0 : n[i]-'0');
            int tmpt = (todd[i]-'0'==-48 ? 0 : todd[i]-'0');
            int cal = tmpn +tmpt +tod;
            //cout << tmpn << " ";
            tod = cal/10;
            //cout << cal << " ";
            cal %=10;
            //cout << cal << endl ;
            ans += cal+'0';
        }
        todd.clear();
        
        todd = ans;
        //cout << todd <<endl;
    }
    if(tod>0) ans += tod+'0';
    reverse(ans.begin(),ans.end());
    cout << ans;
    

    return 0;
}
