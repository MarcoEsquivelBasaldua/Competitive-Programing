#include <bits/stdc++.h>

using namespace std;

int main(void){
    long long n, count, n_last, n_current, aux;
    
    cin >> n;

    count = 0;
    cin >> n_last;
    for(long long i = 1; i < n; i++){
        cin >> n_current;

        if(n_current < n_last){
            aux = (n_last - n_current);
        }
        else{
            aux = 0;
        }

        count += aux;
        
        n_last = n_current + aux;
    }

    cout << count << endl;
    
    

    return 0;
}