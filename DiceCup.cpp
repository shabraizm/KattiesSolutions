#include <iostream>

using namespace std;

int main() {

    int N,M;

    cin>>N>>M;

    if (N<=M)
    {
        for(int i = N +1; i <= M+1; i++)
        {
            cout<<i<<endl;
        }
    }
    else
    {
        for(int i = M + 1; i <= N + 1; i++)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
