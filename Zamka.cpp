#include <iostream>
using namespace std;

int digiSum (int dig)
{
    int sum = 0;

    while(dig>0)
    {
        sum += dig%10;
        dig /=10;
    }
    return sum;
};

int main() {

    int L,D,X,N,M;
    bool minfound = false;
    cin>>L>>D>>X;

    for(int i = L; i <= D ; i++)
    {
        if(digiSum(i)==X)
        {
            if(!minfound)
            {
            N = i;
            M = i;
            minfound = true;
            }
            if(i>M)
            {
                M = i;
            }

        }
    }
    cout<<N<<endl<<M;
    return 0;
}
