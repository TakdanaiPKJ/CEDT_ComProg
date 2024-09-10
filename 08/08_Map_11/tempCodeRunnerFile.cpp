    #include "bits/stdc++.h"
    using namespace std;

    map <string ,string > mp1;
    map <string ,string > mp2;

    int main(){

        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            string a,b;
            cin >> a >> b;
            mp1[a] = b;
            mp2[b] = a;

        }
        
        cin >> n;
        for(int i=0;i<n;i++){
            string a;
            cin >> a;
            if(mp1.find(a) == mp1.end()){
                if(mp2.find(a) == mp2.end()){
                    cout << "Not found\n";
                }
                else cout << mp2[a];
            }
            else cout << mp1[a];
        }

        return 0;
    }
