/*Reconstruct exercise 1 where the sum now is calculated by a function implemented in an
h- and a cpp-file*/

#include <iostream>

using namespace std;

int main() {
    unsigned int n; /*the end of the sum. unsigned since it is positive*/
    int sum; /*the sum sofar*/
    int i; /*the counter variable*/
    cout << "Enter a number for the sum: ";
    cin >> n;
    i = 0;
    sum = 0;
    while (i<=n) {
        sum = sum + i;
        i = i + 1;
    }

    cout << "The sum is: " << sum << endl;
    return 0;
}