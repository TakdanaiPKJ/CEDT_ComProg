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
                int tmpn = (i<n.length() ? n[i]-'0' : 0);
                int tmpt = (i<todd.length() ? todd[i]-'0' : 0);
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
            if(tod>0) {
                todd+=tod+'0';
                tod =0;
            }
            //cout << todd <<endl;
        }
        if(tod>0) ans += tod+'0';
        reverse(ans.begin(),ans.end());
        if(ans[0]=='0') cout << "1";
        cout << ans;
        

        return 0;
    }
