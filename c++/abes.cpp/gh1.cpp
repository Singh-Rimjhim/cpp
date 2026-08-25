#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, digit;

    cout << "Enter a 5-digit number: ";
    cin >> num;

    // Calculate sum of digits
    digit = num % 10;
    sum += digit;
    num = num / 10;

    digit = num % 10;
    sum += digit;
    num = num / 10;

    digit = num % 10;
    sum += digit;
    num = num / 10;

    digit = num % 10;
    sum += digit;
    num = num / 10;

    digit = num % 10;
    sum += digit;

    cout << "The sum of digits is: " << sum << endl;

    return 0;
}