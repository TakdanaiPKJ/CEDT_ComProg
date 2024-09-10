#include "iostream"
#include "cmath"
using namespace std;

int c=1;

void recur(int a){

    if(a==1) return ;
    c*=a;
    //a--;

    recur(a-1);
}

int main(){

    recur(10);
    //cout << sin(40*M_PI/180) << endl;
    cout << ((M_PI-(c/pow(8,8))+pow((log(9.7)),((7/sqrt(71))-sin(40*M_PI/180))))/(pow(1.2,cbrt(2.3))));

    return 0;
}
