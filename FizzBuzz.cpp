#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int X = 0;
    int Y = 0;
    int N = 0;

    cin>>X>>Y>>N;
    for(int index = 1; index <= N; index++)
    {

        if(index%X == 0 && index%Y == 0 )
        {
            cout<<"FizzBuzz";
        }
        else if(index%X == 0)
        {
            cout<<"Fizz";
        }
        else if(index%Y == 0)
        {
            cout<<"Buzz";
        }
        else
        {
            cout<<index;
        }
        cout<<endl;
    }
    return 0;
}
