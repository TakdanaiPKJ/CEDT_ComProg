#include "iostream"
#include "string"
using namespace std;

int main(){

    string a;
    cin >> a;
    for(int i=0,j=0;i<16;i++){
        if(i==1||i==6||i==12||i==15){
            cout << "-";
            continue;
        }
        cout << a[j];
        j++;
    }
    int x= ((11-((13*(a[0]-'0'))+(12*(a[1]-'0'))+(11*(a[2]-'0'))+(10*(a[3]-'0'))+(9*(a[4]-'0'))+(8*(a[5]-'0'))+(7*(a[6]-'0'))+(6*(a[7]-'0'))+(5*(a[8]-'0'))+(4*(a[9]-'0'))+(3*(a[10]-'0'))+(2*(a[11]-'0')))%11)%10);
    cout << x;

    return 0;
}
