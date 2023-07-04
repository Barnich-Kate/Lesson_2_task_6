#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Type number: ";
    cin >> n;
    int rez = 0;
    int i;
    for (i = 1; i <= (2 * n - 1); i += 2) {
        rez += i;
        cout << rez << endl;
    }
    

    return 0;
}
