/*
Author : Marco Atef
Implementation of the A* search algorithm.
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;

enum class state  {free,obstacle,closed,path,start,finish};
const int deltas[4][2] = {{-1,0}, {1,0},{0,-1},{0,1}};

vector<state> ParseLine(string line){
    
    istringstream line_stream(line);
    int n;
    char c;
    vector<state> row;
    while(line_stream>> n >> c){
        if (n == 0){
            row.push_back(state::free);
        }
        else if (n == 1){
            row.push_back(state::obstacle);
        } 
    }
    return row;
}

vector<vector<state>> ReadBoard(string board_path){
    
    ifstream board_file(board_path);
    string line;
    vector<vector<state>> board{};
    if(board_file){
        while (getline(board_file,line))
        {
            vector<state> row = ParseLine(line);
            board.push_back(row);
        }
    }
    return board;
}

string CellString(state cell) {
  switch(cell) {
    case state::obstacle: return " ⛰️   ";
    case state::path: return "🚗   ";
    case state::start: return "🚦   ";
    case state::finish: return "🏁   ";
    default: return " 0   "; 
  }
}

void PrintBoard(const vector<vector<state>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << CellString(board[i][j]);
    }
    cout << "\n";
  }
}

bool Compare(vector<int> x, vector<int> y){
    
    int f1 = x[2]+x[3];
    int f2 = y[2]+y[3];

    return f1>f2 ;  
}

/**
 * Sort the two-dimensional vector of ints in descending order.
 */
void CellSort(vector<vector<int>> *v) {
  sort(v->begin(), v->end(), Compare);
}

int HeuristicManhatten(int x1, int y1, int x2, int y2){
    
    int distance = abs(x1-x2) + abs(y1-y2);
    return distance;
}

bool CheckValidCell(int x, int y, vector<vector<state>> &board){

    //check if the cell is inside the grid border then check if it is free
    bool x_check = (x >= 0 && x < board.size());
    bool y_check = (y >= 0 && y < board[0].size());
    if (x_check && y_check){
        return board[x][y]==state::free;
    } 
    return false;
}

void AddToOpen(int x, int y, int h, int g, vector<vector<int>> &openlist, vector<vector<state>> &board){

    vector<int> node = {x,y,g,h};
    openlist.push_back(node);
    board[x][y] = state::closed;
}



void ExpandNeighbors(vector<int> current, vector<vector<int>> &openlist, vector<vector<state>> &board, int goal[2]){

    int x = current[0];
    int y = current[1];
    int g = current[2];

    for (int i=0; i<4; i++){
        int x2 = x + deltas[i][0];
        int y2 = y + deltas[i][1];
        if (CheckValidCell(x2,y2,board)){
            int g2 = g+1;
            int h2 = HeuristicManhatten(x2,y2,goal[0],goal[1]);
            AddToOpen(x2,y2,h2,g2,openlist,board);
        }
    }
}


vector<vector<state>> Search(vector<vector<state>> &board, int init[2], int goal[2]){
    //init the openlist and add the first node to be the starting point
    vector<vector<int>> openlist {};
    int x = init[0];
    int y = init[1];
    int g = 0;
    int h = HeuristicManhatten(x,y,goal[0],goal[1]);
    AddToOpen(x,y,g,h,openlist,board);

    // the core functionality of the A* search works by sort the  open list using f value, the node with the lowest f value as the nnext node in the search.
    // until reach the goal node or open list runs out of nodes.
    while(openlist.size()>0){
        
        CellSort(&openlist);
        auto current = openlist.back();
        openlist.pop_back();
        int x = current[0];
        int y = current[1];
        board[x][y] = state::path;
        
        if(x==goal[0] && y==goal[1]){
            board[init[0]][init[1]] = state::start;
            board[goal[0]][goal[1]] = state::finish;
            return board;
        }
        ExpandNeighbors(current,openlist,board,goal);
    }
}

int main(){
    string board_path = "files/1.board";
    int init[2] = {0,0};
    int goal[2] = {4,5};
    
    auto board = ReadBoard(board_path);
    cout << board.size() << " "<<board[0].size() << endl;
    PrintBoard(board);

    cout << "=====the founded path====="<<endl;
    auto path = Search(board,init,goal);
    cout << path.size() << " "<<path[0].size() << endl;
    PrintBoard(path);
    
}