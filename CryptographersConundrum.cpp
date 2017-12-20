#include <iostream>
using namespace std;

int main() {
    string InputStr;
    cin>>InputStr;
    string per = "PER";

    int dayCount = 0;

    for(unsigned int i = 0; i < InputStr.size(); i++)
    {
        if(InputStr[i] != per[i%3])
        {
            dayCount++;
        }

    }

    cout << dayCount << endl; // prints days
    return 0;
}
