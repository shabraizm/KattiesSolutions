#include <iostream>
#include <map>
using namespace std;

int main() {

    int testCases = 0;
    int numOfDest = 0;
    map<string,int> dest;

    cin>>testCases;
    for(int i = 0; i < testCases; i++)
    {
        cin>>numOfDest;

        string city;
        for(int d = 0; d < numOfDest; d++)
        {

            cin>>city;
            dest[city]=1;
        }
        cout<<dest.size()<<endl;
        dest.clear();
    }
    return 0;
}
