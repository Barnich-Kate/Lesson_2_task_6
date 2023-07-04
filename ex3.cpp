#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Type number 1: ";
    cin >> a;
    cout << "Type number 2: ";
    cin >> b;
    for (int i = b-1; i > a; i--) {
       cout << i << endl; 
    }
    
    cout << b - a - 1;

    return 0;
}
