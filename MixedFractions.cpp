#include <iostream>
using namespace std;

int main()
{
    while (1) {
        unsigned int        a, b;
        unsigned int        c, d, e;

        cin >> a >> b ;
        if (a == 0 && b == 0) break;

        c = a / b;
        d = a % b;
        e = b;

        cout <<c<<" "<<d<<" / "<<e<<endl;
    }
    return 0;
}
