#include <bits/stdc++.h>

using namespace std;

int main(void){
    long long n, count=0, test;

    cin >> n;

    for(long long i=0; i<=n; i+=5){
        
        if(i%10 == 0){
            test = i;

            while(test%10 == 0 && test > 0){
                count++;
                test /= 10;
            }
        }
        else{
            test = i*(i-1);

            while(test%5 == 0 && test > 0){
                count++;
                test /= 5;
            }
        }
        if(test%5 == 0){
            while(test%5 == 0 && test > 0){
                count++;
                test /= 5;
            }
        }
    }

    cout << count << endl;

    return 0;
}