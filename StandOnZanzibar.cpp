#include <iostream>
using namespace std;

int main()
{
    int numtest;
    cin>>numtest;

    for(int i = 0; i < numtest; i++)
    {
        int num = 1, count = 0, prev = 1;

        while(num>0)
        {
            cin>>num;
            if(num> 2*prev)
            {
                count += num - (2*prev);
            }
            prev = num;
        }
        cout<<count<<endl;;
    }
    return 0;
}
