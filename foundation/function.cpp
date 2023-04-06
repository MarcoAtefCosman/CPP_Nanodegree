/* c++ basic function block should look as the follow:
    return_type functio_name(function_parameter){
        function_body
        return statment
    }
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;


// //basic summation of two integers
// int IntegerAddition(int a, int b){
//     int x = a + b;
//     return x;
// }

// int main(){
//     int x_1 = 5;
//     int x_2 = 6;
//     int x_3 = IntegerAddition(x_1,x_2);
//     cout << "the function output is: " << x_3 << endl;
// }

// //function takes vector as input and return the summation of its values
// int SumVector(vector<int> x){
//     int sum = 0;
//     for (int i=0; i<x.size(); i++){
//         sum += x[i];
//     }
//     return sum;
// }

// int main(){
//     vector<int> v_1{1,2,3,4,5,6,7};
//     int sum = SumVector(v_1);
//     cout << "the sum of vector is : "<<sum<<endl;
// }

// //void function that has no return it might just modify the object passed to it or write to the terminal
// void PrintStrings(string s1, string s2){
//     cout << s1 << " "<< s2 << endl;
// }
// int main(){
//     string S1 = "Hello Dear !";
//     string S2 = "Get out of your mind and into your life !";
//     PrintStrings(S1,S2);
// }