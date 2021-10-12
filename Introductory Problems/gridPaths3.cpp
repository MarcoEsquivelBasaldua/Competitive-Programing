#include<bits/stdc++.h>

using namespace std;

#define ll long long

string s;
bool vis[7][7];
int ans;


bool e(int i, int j){
    return i>=0 && i<7 && j>=0 && j<7 &&! vis[i][j]; //que estes dentro de los limites y la casilla no este visitada
}

void dfs (int i, int j, int a=0){
    if(i==6 && j==0){
        if (a==48){
            ++ans;
        }
        return;
    }

    vis[i][j]=1;

    if(s[a]=='?' || s[a]=='L'){
        if (j>0&&!vis[i][j-1]){ // si j>0 y si no esta visitado la casilla de la izq
            if(!(!e(i,j-2) && e(i+1,j-1) && e(i-1,j-1)))
            dfs(i, j-1, a+1);
        }
    }
    if(s[a]=='?' || s[a]=='R'){
        if (j<6&&!vis[i][j+1]){
            if(!(!e(i,j+2) && e(i+1,j+1) && e(i-1,j+1)))
            dfs(i, j+1, a+1);
        }
    }
    if(s[a]=='?' || s[a]=='U'){
        if (i>0 &&!vis[i-1][j]){
            if(!(!e(i-2,j) && e(i-1,j+1) && e(i-1,j-1)))
            dfs(i-1, j, a+1);
        }
    }

    if(s[a]=='?' || s[a]=='D'){
        if (i <6 &&!vis[i+1][j]){
            if(!(!e(i+2,j) && e(i+1,j+1) && e(i+1,j-1)))
            dfs(i+1, j, a+1);
        }
    }
    vis[i][j] = 0;


}

int main(){
    cin>>s;
    dfs(0,0);
    cout<<ans;
    return 0;
}
