#ifndef HEADER_EXAMPLE_H
#define HEADER_EXAMPLE_H

#include <vector>
using namespace std;

int IncrementAndComputeVectorSum(vector<int>);
void AddOneToEach(vector<int> &v);

int IncrementAndComputeVectorSum(vector<int> v) 
{
    int total = 0;
    AddOneToEach(v);

    for (auto i: v) {
        total += i;
    }
    return total;
}

void AddOneToEach(vector<int> &v) 
{
    // Note that the function passes a reference to v
    // and the for loop below uses references to 
    // each item in v. This means the actual
    // ints that v holds will be incremented.
    for (auto& i: v) {
        i++;
    }
}


#endif