#include "bits/stdc++.h"
using namespace std;

int main()
{

    string str;
    while (getline(cin >> ws, str))
    {

        int chk = 0;
        bool pri = false;
        string tmp = "";
        for (auto x : str){

            if((!isalpha(x) || x==' ') && chk>=1 && pri){
                chk = 0;
                pri = false;
            }
            else if(!isalpha(x) || x!=' '){
                chk++;
                //continue;
            }
            

            if(isalpha(x) && chk>=1){
                tmp+=x;
                pri = true;
                continue;
            }
            pri = false;
            cout << chk ;
    
            

        }
        cout << tmp << "\n";
    }


    return 0;
}
