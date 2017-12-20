#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int set[]       = {1,0,0};
    string str ="/0";
    cin>> str;

    for(unsigned int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'A')
        {
            swap(set[0],set[1]);
        }
        if(str[i] == 'B')
        {
            swap(set[2],set[1]);
        }
        if(str[i] == 'C')
        {
            swap(set[0],set[2]);
        }
    }

    for( int i = 0; i < 3 ;i++)
    {
        if(set[i]==1)
        {
            cout<<i+1<<endl;
        }

    }
    return 0;
}
