#include <bits/stdc++.h>

using namespace std;

int main(void){

    long long n, sumation, total1, total2;
    vector <long long> set1, set2;

    cin >> n;
    sumation = n * (n+1);
    sumation /= 2;

    if(sumation%2 == 0){
        cout << "YES" << endl;

        if(n%2 == 0){
            for(long long i=1; i<=n/2; i=i+2){
                total1 = total2 = n/2;
                set1.push_back(i);
                set1.push_back(n-i+1);

                set2.push_back(i+1);
                set2.push_back(n-i);
            }
        }
        else{
            total1 = n/2 + 1;
            total2 = n/2;

            for(long long i=2; i<=n/2; i=i+2){
                set1.push_back(i);
                set1.push_back(n-i+2);

                set2.push_back(i+1);
                set2.push_back(n-i+1);
            }

            set1.push_back(n/2 + 1);
            set2.push_back(n/2 + 2);



            if(accumulate(set1.begin(), set1.end(),0) < accumulate(set2.begin(), set2.end(),0))
                set1.push_back(1);
            else 
                set2.push_back(1);
            
        }

        cout << total1 << endl;
        for(long long i=0; i<set1.size(); i++)
            cout << set1[i] << " ";

        cout << endl;

        cout << total2 << endl;
        for(long long i=0; i<set2.size(); i++)
            cout << set2[i] << " ";

        cout << endl;
    }
    else{
        cout << "NO";
    }



    return 0;
}