#include <bits/stdc++.h>

using namespace std;

unsigned long modulo(unsigned long n);

int main(void){
    unsigned long n;
    

    cin >> n;

    cout << modulo(n)<< endl;

    return 0;
}


unsigned long modulo(unsigned long n){
    unsigned long m = 1000000007;

    if(n == 1){
        return 2;
    }
    else{
        return (2 * modulo(n-1)) % m;
    }

}