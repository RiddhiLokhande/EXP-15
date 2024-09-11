#include <iostream>
using namespace std;

void print_rev(int i)
{
    if (i > 0)
    {
        cout << (i % 10);
        print_rev(i / 10);
    }
}

int main()
{
    int i;
    cout << "Enter a Number: ";
    cin >> i;
    print_rev(i); // Function calling
    return 0;
}