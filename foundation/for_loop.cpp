#include <iostream>
#include <vector>
#include <string>

using namespace std;

// //simple for loop
// int main(){
//     for(int i=0; i < 5; i++){
//         cout << i<< endl;
//     }
// }

// //increment operator
// int main() {
//     auto i = 1;

//     // Post-increment assigns i to c and then increments i.
//     auto c = i++;

//     cout << "Post-increment example:" << "\n";
//     cout << "The value of c is: " << c << "\n";
//     cout << "The value of i is: " << i << "\n";
//     cout << "\n";

//     // Reset i to 1.
//     i = 1;

//     // Pre-increment increments i, then assigns to c.
//     c = ++i;

//     cout << "Pre-increment example:" << "\n";
//     cout << "The value of c is: " << c << "\n";
//     cout << "The value of i is: " << i << "\n";
//     cout << "\n";

//     // Decrement i;
//     c = i--;
//     cout << "Decrement example:" << "\n";
//     cout << "The value of i is: " << i << "\n";
//     cout << "The value of c is: " << c << "\n";
// }

// //for loop with a container: range based loop 1d
// int main(){
//     vector<int> v_1 {1,2,3,4,5};
//     for(int i:v_1){
//         cout << i << endl;
//     }
// }

// //2d range based 
// int main(){
//     vector<vector<int>> b {{1, 2},
//                            {3, 4},
//                            {5, 6}};
//     for(vector i:b){
//         for(int j:i){
//             cout <<j<<endl;
//         }
//     }
// }

// //2d index based
// int main(){
//     vector<vector<int>> b {{1, 2},
//                            {3, 4},
//                            {5, 6}};
//     for (int i=0; i<b.size(); i++){
//         for (int j=0; j<b[0].size(); j++){
//             cout << b[i][j] << endl;
//         }
//     }
// }