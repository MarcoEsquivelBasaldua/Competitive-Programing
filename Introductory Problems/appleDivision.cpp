#include <bits/stdc++.h>

using namespace std;

int main(void){

    uint n;
    vector<long long> g1, g2, apples;
    long long a, sum_g1=0, sum_g2=0, diff;

    cin >> n;
    for(uint i=0; i<n; i++){
        cin >> a;
        apples.push_back(a);
    }
 
    sort(apples.begin(), apples.end(), greater<long long>());
    

    for(long long i=0; i<n; i++){
        //cin >> a;
        a = apples[i];
        if(i == 0){
            g1.push_back(a);
            g1.push_back(0);
            diff = a;
            sum_g1 = a;
            sum_g2 = 0;
        }
        else{

            if(sum_g1 < sum_g2){
                g1.push_back(a);
                sum_g1 += a;
            }
            else{
                g2.push_back(a);
                sum_g2 += a;
            }

            diff = abs(sum_g2 - sum_g1);

            for(long long j=0; j<(long long)g1.size(); j++){
                if(abs((sum_g1 - g1[j]) - (sum_g2 + g1[j])) < diff){
                    sum_g1 -= g1[j];
                    sum_g2 += g1[j];
                    diff = abs(sum_g2 - sum_g1);

                    g2.push_back(g1[j]);
                    g1[j] = 0;
                }
            }


            for(long long j=0; j<(long long)g2.size(); j++){
                if(abs((sum_g2 - g2[j]) - (sum_g1 + g2[j])) < diff){
                    sum_g2 -= g2[j];
                    sum_g1 += g2[j];
                    diff = abs(sum_g2 - sum_g1);

                    g1.push_back(g2[j]);
                    g2[j] = 0;
                }
            }
        }
    }

    cout << diff << "\n";

    for(long long i=0; i<g1.size(); i++)
        cout << g1[i] << " ";
    cout << "\n";

    for(long long i=0; i<g2.size(); i++)
        cout << g2[i] << " ";
    cout << "\n";
    

    return 0;
}