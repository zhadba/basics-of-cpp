#include <iostream>

using namespace std;

int main () {
    int x;
    int y;

    cout << "Input a number: ";
    cin >> x;

    cout << "Input a second number: ";
    cin >> y;

    int sum = x + y;
    int difference = x - y;
    int product = x * y;
    int quotient = x / y;    

    cout << "\nSum: " << sum << "\nDifference: " << difference << "\nProduct: " << product << "\nQuotient: " << quotient << endl;
}