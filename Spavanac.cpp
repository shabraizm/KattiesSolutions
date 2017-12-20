#include <iostream>
using namespace std;

int main() {

    int H,M;
    cin>>H>>M;

    if((M-45)<0)
    {
        M = 60-(45-M);
        if(H==0)
        {
            H=23;
        }
        else
        {
            --H;
        }
    }
    else
    {
        M-=45;
    }


    cout <<H<<' '<<M<< endl; // Print H M values
    return 0;
}
