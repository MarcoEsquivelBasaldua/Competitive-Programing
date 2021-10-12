#include <bits/stdc++.h>

using namespace std;

int main(void){

    unsigned long long int t, y, x, num;

    cin >> t;

    for(unsigned long long int i=0; i<t; i++){
        cin >> y >> x;

        if(y > x){
            if(y%2 == 0)
                num = y*y - x + 1;
            else
                num = (y-1)*(y-1) + x;
        }
        else{
            if(x%2 == 0)
                num = (x-1)*(x-1) + y;
            else
                num = x*x - y + 1;
                
        }

        cout << num << endl;
    }

    return 0;
}