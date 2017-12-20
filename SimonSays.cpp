#include <iostream>
#include <string>

using namespace std;

int main() {

    int testCases = 0;
    string str, sSays = "simon says ";

    cin>>testCases;
    std::cin.ignore();

    for(int i = 0; i<testCases;i++)
    {
        getline(std::cin,str);
        if(str.substr(0,11).compare(sSays) == 0)
        {
            cout<<str.substr(sSays.length());
        }
        if(i<(testCases-1))
        {
        cout<<endl;
        }
    }
    return 0;
}
