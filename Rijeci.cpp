#include <iostream>
using namespace std;

int main() {

    int k,a=1,b=0,ba=0;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int temp;
        temp = b;
        ba = temp;
        b = a + ba;
        a = temp;
    }

    cout<<a<<" "<<b ;
    return 0;
}
