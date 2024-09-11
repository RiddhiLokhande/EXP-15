#include <iostream>
using namespace std;

// Function to calculate the sum of integers from 1 to n using recursion
int sumOfIntegers(int n) {
    // Base case: if n is 0, the sum is 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: n + sum of integers up to n-1
    return n + sumOfIntegers(n - 1);
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    
    // Check if the input is a non-negative integer
    if (number < 0) {
        cout << "Sum is not defined for negative numbers." << endl;
    } else {
        cout << "Sum of integers from 1 to " << number << " is " << sumOfIntegers(number) << endl;
    }
    
    return 0;
}