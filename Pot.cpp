#include <iostream>
using namespace std;

int power (unsigned int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if ((y % 2) == 0)
        return power (x, y / 2) * power (x, y / 2);
    else
        return x * power (x, y / 2) * power (x, y / 2);

}

int main() {

    int numberOfValues = 0;
    unsigned value = 0;
    unsigned sum = 0;
    cin>>numberOfValues;

    for(int index = 0; index < numberOfValues; index++)
    {
        cin>>value;
        unsigned rem = value%10;
        value = value/10;
        sum += power(value, rem);
    }
    cout << sum<< endl;
    return 0;
}
