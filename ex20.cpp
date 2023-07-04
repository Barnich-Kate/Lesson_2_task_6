#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int n;
    cout<<"Type number:";
    cin>>n;
 
 
    float n1 = 1, rez = 0;
    int i;
 
 
    for (i = 1; i <= n; ++i) {
        n1 *= (float)i;
        rez += n1;
    }
    cout<< rez;

    return 0;
}
