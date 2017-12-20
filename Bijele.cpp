#include <iostream>
using namespace std;

int main() {

    int set[]       = {1,1,2,2,2,8};
    int inset[]     = {0,0,0,0,0,0};

    for(int i = 0; i < 6; i++)
    {
        cin>>inset[i];
    }

    for(int i = 0; i < 6; i++)
    {
        cout<<set[i]-inset[i]<<" ";
    }
    cout<<endl;
    return 0;
}
