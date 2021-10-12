#include <bits/stdc++.h>

using namespace std;

long long Alph[26];

int main(void){

    string st;

    cin >> st;

    for(auto cc:st){
        if(cc == '\0')
            break;
        Alph[cc - 'A']++;
    }

    long long IMPARES = 0, MIDDLE=-1;

    for(long long i=0; i<26; i++){
        if(Alph[i]%2 != 0){
            IMPARES++;
            MIDDLE = i;
        }
    }

    if(IMPARES > 1){
        cout << "NO SOLUTION";
    }
    else{
        for(long long i=0; i<26; i++){
            if(Alph[i]>0 && i!=MIDDLE){
                for(long long j=0; j<Alph[i]/2; j++){
                    cout << (char)('A'+i);
                }
            }
        }

        if(MIDDLE >= 0)
            for(long long j=0; j<Alph[MIDDLE]; j++)
                cout << (char)('A'+MIDDLE);

        for(long long i=25; i>=0; i--){
            if(Alph[i]>0 && i!=MIDDLE){
                for(long long j=0; j<Alph[i]/2; j++)
                    cout << (char)('A'+i);
            }
        }
    }

    cout << endl;

    return 0;
}