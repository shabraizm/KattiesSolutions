#include <iostream>
#include <string>
using namespace std;

int main() {

    string str ;

    cin>> str;

    for(unsigned int i = 1; i <= str.length() ; i++)
    {
        if(str[i-1] != str[i])
        {
            cout<<str[i-1];
        }
    }
    return 0;
}
