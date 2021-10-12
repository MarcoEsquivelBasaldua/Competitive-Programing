#include <iostream>
#include <cmath>

using namespace std;

void hanoi(uint, uint, uint, uint);

int main(void){
    uint n;
    uint origin=1, aux=2, dest=3;

    scanf("%u",&n);

    printf("%u\n", (uint)pow(2,n)-1);
    hanoi(n, origin, aux, dest);

    return 0;
}

void hanoi(uint n, uint origin, uint aux, uint dest){
    if(n == 1){
        printf("%u %u\n", origin, dest);
    }
    else{
        hanoi(n-1, origin, dest, aux);
        printf("%u %u\n", origin, dest);
        hanoi(n-1, aux, origin, dest);
    }

}