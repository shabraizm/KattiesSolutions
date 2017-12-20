#include <iostream>
using namespace std;

int main() {

    int testCase, number;
    cin>>testCase;
    for(int i = 0; i < testCase; i++)
    {
        cin>>number;
        if(number%2)
            cout << number << " is odd"<<endl;
        else
            cout << number << " is even"<<endl;
    }
    return 0;
}
