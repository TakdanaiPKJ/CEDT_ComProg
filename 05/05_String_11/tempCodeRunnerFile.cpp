#include "bits/stdc++.h"
using namespace std;

int main()
{

    string str;
    while (getline(cin >> ws, str))
    {

        bool chk = false;
        string tmp;
        for (auto x : str)
        {

            if (chk && (isalpha(x) || x == ' '))
            {
                tmp += x;
            }
            else if (!isalpha(x) && !chk)
            {
                chk = true;
            }
            else
            {
                chk = false;
            }
        }
        cout << tmp << "\n";
    }
    return 0;
}
