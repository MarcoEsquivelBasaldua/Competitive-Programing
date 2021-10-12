#include <bits/stdc++.h>

using namespace std;

int main(void){
    long long n, entry, sum = 0, real_sum;

    cin >> n;

    for(long long i = 0; i < n-1; i++){
        cin >> entry;
        sum += entry;
    }

    real_sum = n * (n+1);
    real_sum /= 2;

    cout << real_sum - sum << endl;


    return 0;
}