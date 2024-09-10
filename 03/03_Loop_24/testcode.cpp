#include <iostream>
#include <string>
using namespace std;

int main(){
    string txt;
    int j = 0;
    cin >> txt;
    int n = txt.length();
    for (int i = 0; i < n; i++){

        if (i+1 < n && txt.at(i) == txt.at(i+1)){
            
            j++;
            while (i+j < n && txt.at(i) == txt.at(i+j) ){
                j++;

            }

            cout << txt.at(i) << " " << j << " ";
            i += j - 1;
            j = 0;

        }
        else{
            cout << txt.at(i) << " " << "1" << " ";
        }
    }
}