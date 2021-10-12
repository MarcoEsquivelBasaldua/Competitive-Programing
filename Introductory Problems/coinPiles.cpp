#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(void){
  ll t, a, b, sum, BIGGER, LOWER;

    cin >> t;

    for(ll i=0; i<t; i++){
        cin >> a >> b;

        if((a+b)%3 == 0){
            if(a > b){
                BIGGER = a;
                LOWER = b;
            }
            else{
                BIGGER = b;
                LOWER = a;
            }

            if(BIGGER <= LOWER*2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}