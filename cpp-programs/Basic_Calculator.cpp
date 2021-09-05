#include <iostream>

using namespace std;

int main() {
    int x; //need to declare data type
    int y;
    int sum; 

    cout << "\nEnter a number: " << endl; //standard print statement
    cin >> x; //need to define input as cin >> {variable name}

    cout << "\nEnter a second number: " << endl; //same prodecure as above
    cin >> y;

    sum = x + y; //caluclating sum. no need to redeclare data type
    cout << "\nSum: " << sum << endl; //printing sum. variable values must be inserted after text (using insertion operation <<)

    return 0;
}