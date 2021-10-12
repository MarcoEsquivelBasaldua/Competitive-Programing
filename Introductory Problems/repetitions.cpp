#include <bits/stdc++.h>

using namespace std;

int main(void){

    string DNA;

    cin >> DNA;

    char new_w, last_w;

    long long count = 0, last_count = 0;
    for(long long i=0; i<=DNA.size(); i++){
        if(i == 0)
            last_w = DNA[i];
        else
            last_w = new_w;

        new_w = DNA[i];

        if(new_w == last_w)
            count ++;
        else
            count = 1;

        if(count > last_count)
            last_count = count;
    }

    cout << last_count << endl;

    return 0;
}