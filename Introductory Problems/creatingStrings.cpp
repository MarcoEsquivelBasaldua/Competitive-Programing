#include <bits/stdc++.h>

using namespace std;

uint factorial(uint);
void printString(uint Alph[]);

uint Alph[26];

int main(void){

    string st, new_st;
    uint n=0, num, den, k, diffLetters=0;

    cin >> st;

    for(auto cc:st){
        if(cc == '\0')
            break;
        Alph[cc - 'a']++;
        n++;
    }

    for(uint i=0; i<26; i++){
        if(Alph[i]>0)
            for(uint j=1; j<=Alph[i]; j++)
                new_st.push_back((char)('a'+i));
    }

    num = factorial((uint)st.size());
    den = 1;

    for(int i=0; i<26; i++)
        if(Alph[i] > 0){
            den *= factorial(Alph[i]);
            diffLetters ++;
        }

    k = num/den;

    printf("%u\n", k);

    cout << new_st << "\n";

    for(uint i=1; i<k; i++){
        next_permutation(new_st.begin(),new_st.end());
        cout << new_st << "\n";
    }



    return 0;
}

uint factorial(uint n){
    if(n == 0)
        return 1;
    else
        return n * factorial(n-1);
}

void printString(uint alph[]){
    
    for(uint i=0; i<26; i++){
        if(alph[i]>0){
            cout << (char)('a'+i);
            alph[i]--;
            printString(alph);
        }
    }
    cout << "\n";
}