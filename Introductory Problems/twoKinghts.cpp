#include <bits/stdc++.h>

using namespace std;

int main(void){
    long long k, m;

    cin >> k;

    for(long long n=1; n<=k; n++){
        m = n*n * (n*n - 1) / 2 - 4*(n-1)*(n-2);

        cout << m << endl;
    }

    return 0;
}

    