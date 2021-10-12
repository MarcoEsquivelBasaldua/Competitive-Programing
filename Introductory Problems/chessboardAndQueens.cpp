#include <bits/stdc++.h>

using namespace std;

map<pair<int,int>,int> chessBoard;
int col[8], diag1[15], diag2[15];
int countSolutions;


void solve(int y){
    if(y == 8){
        countSolutions++;
        return;
    }
    
    for(int x=0; x<8; x++){
        auto queen = chessBoard.find(make_pair(x,y));

        if (col[x] || diag1[x+y] || diag2[x-y+8-1] || queen -> second) continue;
        col[x] = diag1[x+y] = diag2[x-y+8-1] = 1;
        solve(y+1);
        col[x] = diag1[x+y] = diag2[x-y+8-1] = 0;
    }

}


int main(void){

    string line;
    
    for(int i=0; i<8; i++){
        getline(cin, line);
        
        for(int j=0; j<8; j++){
            if(line[j] == '.')
                chessBoard.insert({make_pair(i,j),0});
            else
                chessBoard.insert({make_pair(i,j),1});
        }
    }

    solve(0);

    cout << countSolutions << endl; 



    return 0;
}