//an enum, short for enumerator, is a way to define a type in C++ with values that are restricted to a fixed range.
#include <iostream>
using namespace std;

int main(){
    // Create the enum Color with fixed values. (scoped enum)
    // enum class Color {white,black,red,blue};

    // Color my_color = Color::blue;

    // directions enum
    enum class direction {mup,mdown,mright,mleft};

    direction my_directon = direction::mup;

    switch (my_directon)
    {
    case direction::mup:
        cout << "mup";
        break;
    case direction::mdown:
        cout << "mdown";
        break;
    case direction::mright:
        cout << "mright";
        break;
    case direction::mleft:
        cout << "mleft";
        break;
    
    default:
        break;
    }
}