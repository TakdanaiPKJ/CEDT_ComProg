#include <iostream>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter){

    string tmp = "";
    vector <string > vt;
    for(auto x : line){
        if(x == delimiter){
            if(tmp != "")vt.push_back(tmp);
            tmp="";
        }
        else tmp+=x;
    }
    if(tmp!="")vt.push_back(tmp);
    return vt;
}
int main()
{
    string line;
    getline(cin, line);

    string delim;
    getline(cin, delim);

    for (string e : split(line, delim[0])){

        cout << '(' << e << ')';

    }

    return 0;
}
