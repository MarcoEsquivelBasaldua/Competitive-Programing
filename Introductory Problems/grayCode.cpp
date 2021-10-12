#include <bits/stdc++.h>

using namespace std;

void printAsBin(uint n, uint m);

int main(void){

    uint n,m;

    scanf("%ud",&n);

    for(uint i=0; i<(uint)pow(2,n); i++){
        m = i ^ (i>>1);

        printAsBin(n,m);
    }

    return 0;
}

void printAsBin(uint n, uint m){

    for(uint i=n; i>0; i--){
        if((m>>(i-1)) > 0){
            if((m>>(i-1))%2 == 0)   printf("0");
            else                    printf("1");
        }
        else
            printf("0");
    }
    printf("\n");    
}