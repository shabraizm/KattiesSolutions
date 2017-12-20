#include <iostream>
using namespace std;

int main() {

    int numberOfValues = 0;
    int value = 0;
    int sum = 0;
    cin>>numberOfValues;

    for(int index = 0; index < numberOfValues; index++)
    {
        cin>>value;
        if(value<0)
        {
            sum++;
        }
    }
    cout << sum<< endl;
    return 0;
}
