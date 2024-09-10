#include <iostream>
using namespace std;
int x[7][7];
const int R = 7, C = 7;
void floodfill( int r, int c, int e) {
    if(r>6||c>6||r<0||c<0||x[r][c]!=0) return;
    x[r][c]=e;
    floodfill( r, c-1, e);
    floodfill( r, c+1, e);
    floodfill( r-1, c, e);
    floodfill( r+1, c, e);

}
int main() {
    //int x[][C] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}};
    for (int r=0; r<R; ++r)
        for (int c=0; c<C; ++c)
            cin >> x[r][c];
    int row, col, e;
    cin >> row >> col >> e;
    floodfill( row, col, e);
    for (int r=0; r<R; ++r) {
        for (int c=0; c<C; ++c)
            cout << x[r][c] << ' ';
        cout << endl;
 }
 return 0;
}