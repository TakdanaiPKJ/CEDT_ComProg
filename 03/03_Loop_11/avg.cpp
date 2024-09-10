#include "iostream"
#include "cmath"
using namespace std;

int main(){

    int n = 0;
    double sum = 0;
    while (true){
        double a;
        cin >> a;
        if(a==-1) break;
        n++;
        sum+=a;
    }
    if(n!=0){
        cout << round(((sum/n))*100)/100;
    }
    else cout << "No Data" ;


}
