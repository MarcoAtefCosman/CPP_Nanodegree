#include <iostream>
#include <vector>

using namespace std;

// int main(){
//     int i = 5;
//     int j = 6;
    
//     //k is reference to i, j and i are the same variabel. they have the same address.
//     int& k = i;

//     cout << "The adress of i is : "<< &i <<endl;
//     cout << "The adress of j is : "<< &j <<endl;

//     cout << "the value of k is "<< k <<endl;
//     cout <<"the address of k is "<< &k << endl;

//     //initialize a pointer
//     //declared a pointer to save the address of i
//     int* pointer_to_i = &i;
        
//     // Print the memory addresses of i and j
//     cout << "The address of i is: " << &i << endl;
//     cout << "The variable pointer_to_i is: " << pointer_to_i << endl;
//     //dereferencing operator
//     cout << "The value of i is: "<< *pointer_to_i << endl;

//     *pointer_to_i = 8;
//     cout << "the value of i is: " << i << endl;
// }

// //a pointer to different data types.

// int main(){
//     vector<int> v{1,2,3};
//     vector<int>* pv = &v;
    
//     cout << "address of v is: "<< &v<<endl;
//     cout << "pointer of v refers to: "<<pv<<endl;

//     //loop over v
//     for(auto i:v){
//         cout << i << endl;
//     }
//     //derefernce the vector v:
//     *pv = {1,2,3,4,5,6};
//     cout << "after dereferncing v: "<<endl;
//     //loop over v
//     for(auto i:v){
//         cout << i << endl;
//     }
// }


// //pointer as a function input
// void AddOne(int* i){
//     (*i) ++ ;
// }

// int main(){

//     int value = 5;
//     int* pvalue = &value;

//     cout << "The value is " << value << endl;
//     AddOne(pvalue);
//     cout << "The value now is " << value << endl;
// }

// //poineter as a function return type
// int* AddOne(int& i){
//     //the best practice if you would return pointer is to input a reference
//     cout << "the address of i is : "<< &i << endl;
//     i++ ;
//     return &i;   
// }

// int main(){

//     int j = 5;

//     cout << "the address of j is : "<< &j << endl;
//     cout << "the value of j is "<<j<<endl;

//     int* pj = AddOne(j);

//     cout << "pj refers to : "<< pj << endl;
//     cout << "the value of  now is "<<(*pj)<<endl;
//     cout << "the value of j is "<< j <<endl;
// }