#include <iostream>
#include <vector>

using namespace std;

//  //1d vector declartion
// int main(){
//     vector<int> v_1 {0,1,2};
//     vector<int> v_2 = {3,4,5};
//     vector<int> v_3;
//     v_3 = {6};
//     cout << "v_1 , v_2 and v_3 are created !"<<endl;
// }

// //2d vector creation: a vector of vectors
// int main(){
//     vector<vector<int>> v_1 {{1,2,3},{4,5,6}};
//     cout << "a 2d vector is created successfully !" <<endl;
// }

// //print vectors using for loop
// int main(){
//     vector<int> v_1 {1,2,3,4,5};
//     for (int i : v_1){
//         cout << i << endl;
//     }
// }

// //1d vector elements access
// int main(){
//     vector<int> v_1 {1,2,3,4,5};
//     int x_0 = v_1[0];
//     int x_1 = v_1[1];
//     int x_2 = v_1[2];
//     int x_3 = v_1[3];
//     int x_4 = v_1[4];

//     int x_5 = v_1[5]; //undefined behavior

//     cout << x_0 << " "<< x_1 << " "<< x_2 << " "<< x_3 << " " << x_4 << " " << endl;
//     cout << x_5 << endl; //will still print!

// }

// //2d vector elements access
// int main(){
//     vector<vector<int>> v_2 {{1, 1, 2, 3},
//                              {2, 1, 2, 3},
//                              {3, 1, 2, 3}};
//     //first column elements
//     int x_0 = v_2[0][0];
//     int x_1 = v_2[1][0];
//     int x_2 = v_2[2][0];
//     cout << x_0 << endl << x_1 << endl << x_2  << endl;
// }

// //1d vector size using size()
// int main(){
//     vector<int> v_1 {1,2,3,4,5};
//     cout << "the size of vector v_1 is : " << v_1.size() << endl;
// }

// //2d vector size 
// int main(){
//     vector <vector<int>> v_2 {{1, 1, 2, 3},
//                               {2, 1, 2, 3},
//                               {3, 1, 2, 3}};
//     cout << "number of rows is : " << v_2.size() << " while number of columns is : " << v_2[0].size() << endl;
// }

// //add elements to vector using push back
// int main(){
//     vector<int> v {0,1,2,3};
//     v.push_back(4);
//     v.push_back(5);
//     for (int i=0; i<v.size(); i++){
//         cout << v[i] << " ";
//     }
// }