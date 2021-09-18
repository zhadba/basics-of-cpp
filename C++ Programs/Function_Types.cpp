#include <iostream>

using namespace std;

void print_something () { //function for working with non-return-necessary data types. needs to be defined pre-call
    cout << "Test successful" << endl;
} 

int main () { //function for working with integers
    print_something(); //function call
    return 0;
}

