#include <iostream>

using namespace std;

int main()
{
    int n;
    float sum;
    cout << "Type number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        sum += 1/i;
        cout << sum << endl;
    }
    

    return 0;
