#include <iostream>

using namespace std;

int main()
{
    int a, b, n, i;
    cout<<"Type a:";
    cin>> a;
    cout << "Type b:";
    cin >> b;
    for (i = a; i <= b; i++) {
        cout << i << endl;
    }
    cout << b-a+1 << endl;
    

    return 0;
}
    
