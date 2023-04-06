// creating a stream object using file path
// the object can be used as bool to assert that the stream has been crreated successfully 
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// int main() {
//     // create object
//     ifstream file;
//     //read the file
//     file.open("./files/1.board");
//     if (file){
//         cout << "File has been read successfully !"<<endl;
//         string line;
//         //getline function takes two arguments the file and declared line
//         while (getline(file,line)){
//             cout << line <<endl;
//         }
//     }
// }