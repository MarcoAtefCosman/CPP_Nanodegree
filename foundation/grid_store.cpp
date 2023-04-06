//store a grid of 0's and 1's in a 2d vector :
// {{0, 1, 0, 0, 0, 0},
//  {0, 1, 0, 0, 0, 0},
//  {0, 1, 0, 0, 0, 0},
//  {0, 1, 0, 0, 0, 0},
//  {0, 0, 0, 0, 1, 0}}
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

//write a void function to print the board, one row at a line | range based
void PrintBoard_range(vector<vector<int>> v){
    for(vector i: v){
        for(int j: i){
            cout<<j ;
        }
    cout << endl;
    }
}

void PrintBoard_index(vector<vector<int>> v){
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            cout<< v[i][j];
        }
        cout << endl;
    }
}

void PrinBoard_file (string file_path){
    ifstream file(file_path);
    if (file){
        string line;
        while(getline(file,line)){
            cout<<line<<endl;
        }
    }

}

int main(){
    // vector<vector<int>> board = {{0, 1, 0, 0, 0, 0},
    //                              {0, 1, 0, 0, 0, 0},
    //                              {0, 1, 0, 0, 0, 0},
    //                              {0, 1, 0, 0, 0, 0},
    //                              {0, 0, 0, 0, 1, 0}};
    // cout<< "print the board using range method:"<<endl;
    // PrintBoard_range(board);

    // cout<<endl;
    // cout<<"print the board using index method:"<<endl;
    // PrintBoard_index(board);

    string file_path = "./files/1.board";
    cout<<endl;
    cout<<"print the board from file:"<<endl;
    PrinBoard_file (file_path);

}