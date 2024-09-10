    #include "bits/stdc++.h"
    using namespace std;

    int main(){

        int h1, m1, s1, h2, m2, s2;

        cin >> h1 >> m1 >> s1;
        cin >> h2 >> m2 >> s2;

        int t1 = h1 * 60 * 60 + m1 * 60 + s1;
        int t2 = h2 * 60 * 60 + m2 * 60 + s2;
        int dh, dm, ds;
        int tmp;

        if (t2 > t1){
            ds = t2 - t1;
            dh = ds / (60 * 60);
            ds -= dh * 60 * 60;
            dm = ds / 60;
            ds -= dm * 60;
        }
        else {
            ds = abs(60-((s1+s2)%60));
            if(ds==60) ds=0;

            tmp = ((s1+s2>=60) ? 1 : 0);
            //cout << tmp;
            dm = abs(60-((m1+m2+tmp)%60));
            if(s1-s2>0) dm--;
            if(dm==60) dm=0;

            tmp = ((m1+m2+tmp>=60) ? 1 : 0);
            int a;
            if(h1>=h2){
                h1 = abs(24-h1);
                //a=-1;
                //cout << h1;
            }

            dh = abs(((h1+h2+tmp)%24));
            //dh+=13;
            //cout << dh;
            if(m1-m2>0) dh--;
            else if(m1-m2>=0){

                if(m1==0&&m2==0&&) dh--;
                else dh = 24;
                
            }

        }

        cout << dh << ':' << dm << ':' << ds;

        return 0;
    }