#include <bits/stdc++.h>

using namespace std;

long long total, min_sum;

void search(long long *array, uint k, uint n, long long partial_sum){
    if(k == n)
        return;

    if(abs(partial_sum-(total-partial_sum)) < min_sum)
        min_sum = abs(partial_sum-(total-partial_sum));

    search(array, k+1, n, partial_sum+array[k]);
    search(array, k+1, n, partial_sum);
}

int main(void){

    uint n;
    cin >> n;
    long long apples[n];

    
    for(uint i=0; i<n; i++){
        cin >> apples[i];
        total += apples[i];
    }

    min_sum = total;

    search(apples, 0, n, 0);

    cout << min_sum << "\n";




    return 0;
}