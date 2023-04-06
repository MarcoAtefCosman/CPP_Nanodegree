/*
Author : Marco Atef
This code reads the board file and print it as ascii map
"⛰️ " if the input equals a kObstacle
"0 " otherwise.
steps:
-read the board file
-transfer the lines to vector of integers. 
-use these integers as an andicator to the free and obstacle locations.
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

enum class state  {free,obstacle};

vector<state> ParseLine(string line){
    
    istringstream line_stream(line);
    int value;
    char deliemter;
    vector<state> row;
    while(line_stream){
        line_stream >> value >> deliemter;
        if (value == 0){
            row.push_back(state::free);
        }
        else if (value == 1){
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

void PrintBoard(string board_path){
    vector<vector<state>> board =ReadBoard(board_path);
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[0].size(); j++){
            state cell_state = board[i][j];
            switch (cell_state)
            {
            case state::free:
                cout << "0 ";
                break;
            
            case state::obstacle:
                cout << "⛰️ ";
                break;
            }
        }
        cout<<endl;
    }

}

int main(){
    string board_path = "files/1.board";
    PrintBoard(board_path);
}