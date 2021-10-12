#include <bits/stdc++.h>

using namespace std;

// long long real_number;

// void solve(long long begin, long long final, long long digits, long long k){

//     for(long long i=1; i<9; i++){
//         long long test = begin+i*(long long)pow(10,digits);
        
//         if(test == k){
//             cout << i << "\n";
//             return;
//         }
//         else
//             solve()
//     }
    
// }

int main(void){

    uint q;
    long long k, k2;

    cin >> q;

    for(uint i=0; i<q; i++){
        cin >> k;
        
        long long upper_limit = 0, digits=0, lower_limit=0;
        
        while(true){
            lower_limit = upper_limit;
            upper_limit += 9 * (long long)pow(10,digits) * ++digits;

            if(k <= upper_limit) break;
        }
        lower_limit++;

        cout << lower_limit << " " << upper_limit << endl;
        cout<< digits << endl;

        k -= lower_limit;
        cout << k%digits << endl;
        long long real_number = (long long)pow(10,digits-1)  + k/digits;
        long long pos = digits - k%digits;

        cout << real_number << endl;
 
        long long out=real_number, power=0;
        for(long long j=digits; j>=pos; j--){
            power = (long long)pow(10,j-1);
            out = real_number / power;
            real_number -= out * power;
        }
 
        cout << out << "\n";
        
    }

    return 0;
}