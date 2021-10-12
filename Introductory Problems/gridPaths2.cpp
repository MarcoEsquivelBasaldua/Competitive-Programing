#include <bits/stdc++.h>
 
using namespace std;
uint paths;
string line;
//bool board[7][7];
 
pair<int,int> new_pos(pair<int,int> pos, char comand){
    pair <int, int> direction;
 
    if(comand == 'U')
        pos.first += -1;
    else if(comand == 'D')
        pos.first += 1;
    else if(comand == 'R')
        pos.second += 1;
    else if(comand == 'L')
        pos.second += -1;
 
    return pos;       
}
 
 
void solve(uint i, int board[7][7], pair<int,int> pos){
    
    if(i == 48 && pos.first == 6 && pos.second == 0){
        paths++;
        //return;
    }
    else{
        pair<int, int> n_pos;
        if(line[i] == '?'){
            n_pos = new_pos(pos,'U');
            if(n_pos.first >=0 && n_pos.first <7 && n_pos.second >=0 && n_pos.second <7){
                if(board[n_pos.first][n_pos.second] == 0){
                    board[n_pos.first][n_pos.second] = 1;
                    solve(i+1, board, n_pos);
                    board[n_pos.first][n_pos.second] = 0;
                }else return;
            }else return;
 
            n_pos = new_pos(pos,'D');
            if(n_pos.first >=0 && n_pos.first <7 && n_pos.second >=0 && n_pos.second <7){
                if(board[n_pos.first][n_pos.second] == 0){
                    board[n_pos.first][n_pos.second] = 1;
                    solve(i+1, board, n_pos);
                    board[n_pos.first][n_pos.second] = 0;
                }else return;
            }else return;
 
            n_pos = new_pos(pos,'R');
            if(n_pos.first >=0 && n_pos.first <7 && n_pos.second >=0 && n_pos.second <7){
                if(board[n_pos.first][n_pos.second] == 0){
                    board[n_pos.first][n_pos.second] = 1;
                    solve(i+1, board, n_pos);
                    board[n_pos.first][n_pos.second] = 0;
                }else return;
            }else return;
 
            n_pos = new_pos(pos,'L');
            if(n_pos.first >=0 && n_pos.first <7 && n_pos.second >=0 && n_pos.second <7){
                if(board[n_pos.first][n_pos.second] == 0){
                    board[n_pos.first][n_pos.second] = 1;
                    solve(i+1, board, n_pos);
                    board[n_pos.first][n_pos.second] = 0;
                }else return;
            }else return;
 
        }
        else if(line[i] == 'U'){
            n_pos = new_pos(pos,'U');
            if(n_pos.first >=0 && n_pos.first <7 && n_pos.second >=0 && n_pos.second <7){
                if(board[n_pos.first][n_pos.second] == 0){
                    board[n_pos.first][n_pos.second] = 1;
 
                    solve(i+1, board, n_pos);
                    board[n_pos.first][n_pos.second] = 0;
                }else return;
            }else return;
        }
        else if(line[i] == 'D'){
            n_pos = new_pos(pos,'D');
            if(n_pos.first >=0 && n_pos.first <7 && n_pos.second >=0 && n_pos.second <=6){
                if(board[n_pos.first][n_pos.second] == 0){
                    board[n_pos.first][n_pos.second] = 1;
 
                    solve(i+1, board, n_pos);
                    board[n_pos.first][n_pos.second] = 0;      
                }else return;
            }else return;
        }
        else if(line[i] == 'R'){
            n_pos = new_pos(pos,'R');
            if(n_pos.first >=0 && n_pos.first <=6 && n_pos.second >=0 && n_pos.second <=6){
                if(board[n_pos.first][n_pos.second] == 0){
                    board[n_pos.first][n_pos.second] = 1;
 
                    solve(i+1, board, n_pos);
                    board[n_pos.first][n_pos.second] = 0;
                }else return;
            }else return;
        }
        else{
            n_pos = new_pos(pos,'L');
            if(n_pos.first >=0 && n_pos.first <=6 && n_pos.second >=0 && n_pos.second <=6){
                if(board[n_pos.first][n_pos.second] == 0){
                    board[n_pos.first][n_pos.second] = 1;
 
                    solve(i+1, board, n_pos);
                    board[n_pos.first][n_pos.second] = 0;
                }else return;
            }else return;
        }
        //return;
    }
 
    
}
 
int main(void){
 
    //vector<vector<int>> board;
    //vector<int> row;
 
    // for(int i=0; i<7; i++) row.push_back(0);
    // for(int i=0; i<7; i++) board.push_back(row);
    // board[0][0] = 1;
 
    int board[7][7];
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            board[i][j] = 0;
        }
    }
    board[0][0] = 1;
 
    getline(cin, line);
 
    pair<int,int> pos_0(0,0);
 
    solve(0, board, pos_0);
 
    cout << paths << "\n";    
 
    return 0;
}