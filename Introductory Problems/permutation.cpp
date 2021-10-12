#include <bits/stdc++.h>

using namespace std;

int main(void){

    long long n, half;
    
    cin >> n;

    if(n%2 == 0)
        half = n/2;
    else
        half = n/2 + 1;

    if(n == 2 || n == 3)
        cout << "NO SOLUTION" << endl;
    else if(n == 4){
        cout << "2 4 1 3" << endl;
    }
    else{
        for(long long i=0; i<n; i++){
            if(i%2 == 0){
                cout << i/2+1 << " ";
            }
            else{
                cout << half+i/2+1 << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}