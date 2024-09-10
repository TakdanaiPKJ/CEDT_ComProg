#include<iostream>
#include<cmath>

using namespace std;
int main(){
    double a,b,c,y;
    cin>>a>>b>>c;
    y=(sqrt(pow(b,2)-(4*a*c)));

    cout<<round(((-b)-y)/(2*a)*1e3)/1e3<<" ";
    cout<<round(((-b)+y)/(2*a)*1e3)/1e3;

}