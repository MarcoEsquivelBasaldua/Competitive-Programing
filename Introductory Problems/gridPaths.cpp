#include <bits/stdc++.h>

using namespace std;
uint paths;
string line;
//bool board[7][7];

void new_pos(int pos[2], char comand, int * n_pos){
    if(comand == 'U'){
        n_pos[0] = pos[0] - 1;
        n_pos[1] = pos[1];
    }
    else if(comand == 'D'){
        n_pos[0] = pos[0] + 1;
        n_pos[1] = pos[1];
    }
    else if(comand == 'R'){
        n_pos[1] = pos[1] + 1;
        n_pos[0] = pos[0];
    }
    else if(comand == 'L'){
        n_pos[1] = pos[1] - 1;
        n_pos[0] = pos[0];
    }
}


void solve(uint i, int board[7][7], int pos[2]){
    
    if(i == 48 && pos[0] == 6 && pos[1] == 0){
        paths++;
        return;
    }
    else{
        int n_pos[2] = {0,0};
        if(line[i] == '?'){
            new_pos(pos,'U',n_pos);
            if(n_pos[0] >=0 && n_pos[0] <7 && n_pos[1] >=0 && n_pos[1] <7){
                if(board[n_pos[0]][n_pos[1]] == 0){
                    board[n_pos[0]][n_pos[1]] = 1;
                    solve(i+1, board, n_pos);
                    board[n_pos[0]][n_pos[1]] = 0;
                }
            }

            new_pos(pos,'D',n_pos);
            if(n_pos[0] >=0 && n_pos[0] <7 && n_pos[1] >=0 && n_pos[1] <7){
                if(board[n_pos[0]][n_pos[1]] == 0){
                    board[n_pos[0]][n_pos[1]] = 1;
                    solve(i+1, board, n_pos);
                    board[n_pos[0]][n_pos[1]] = 0;
                }
            }

            new_pos(pos,'R',n_pos);
            if(n_pos[0] >=0 && n_pos[0] <7 && n_pos[1] >=0 && n_pos[1] <7){
                if(board[n_pos[0]][n_pos[1]] == 0){
                    board[n_pos[0]][n_pos[1]] = 1;
                    solve(i+1, board, n_pos);
                    board[n_pos[0]][n_pos[1]] = 0;
                }
            }

            new_pos(pos,'L',n_pos);
            if(n_pos[0] >=0 && n_pos[0] <7 && n_pos[1] >=0 && n_pos[1] <7){
                if(board[n_pos[0]][n_pos[1]] == 0){
                    board[n_pos[0]][n_pos[1]] = 1;
                    solve(i+1, board, n_pos);
                    board[n_pos[0]][n_pos[1]] = 0;
                }
            }

        }
        else if(line[i] == 'U'){
            new_pos(pos,'U',n_pos);
            if(n_pos[0] >=0 && n_pos[0] <7 && n_pos[1] >=0 && n_pos[1] <7){
                if(board[n_pos[0]][n_pos[1]] == 0){
                    board[n_pos[0]][n_pos[1]] = 1;

                    solve(i+1, board, n_pos);
                    board[n_pos[0]][n_pos[1]] = 0;
                }
            }
        }
        else if(line[i] == 'D'){
            new_pos(pos,'D',n_pos);
            if(n_pos[0] >=0 && n_pos[0] <7 && n_pos[1] >=0 && n_pos[1] <=6){
                if(board[n_pos[0]][n_pos[1]] == 0){
                    board[n_pos[0]][n_pos[1]] = 1;

                    solve(i+1, board, n_pos);
                    board[n_pos[0]][n_pos[1]] = 0;      
                }
            }
        }
        else if(line[i] == 'R'){
            new_pos(pos,'R',n_pos);
            if(n_pos[0] >=0 && n_pos[0] <=6 && n_pos[1] >=0 && n_pos[1] <=6){
                if(board[n_pos[0]][n_pos[1]] == 0){
                    board[n_pos[0]][n_pos[1]] = 1;

                    solve(i+1, board, n_pos);
                    board[n_pos[0]][n_pos[1]] = 0;
                }
            }     
        }
        else{
            new_pos(pos,'L',n_pos);
            if(n_pos[0] >=0 && n_pos[0] <=6 && n_pos[1] >=0 && n_pos[1] <=6){
                if(board[n_pos[0]][n_pos[1]] == 0){
                    board[n_pos[0]][n_pos[1]] = 1;

                    solve(i+1, board, n_pos);
                    board[n_pos[0]][n_pos[1]] = 0;
                }
            } 
        }
        return;
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

    //pair<int,int> pos_0(0,0);
    int pos_0[2] = {0,0};

    solve(0, board, pos_0);

    cout << paths << "\n";

    return 0;
}