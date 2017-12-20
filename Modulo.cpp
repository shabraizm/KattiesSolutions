#include <iostream>
using namespace std;

int main() {

    int a[42]={0};
    int count=0,val;

    int k=0;
    do{
        cin>>val;
        a[val%42]=1;
        k++;
    }while(k<10);

    for(int k=0;k<42;k++)
    {
        if(a[k]==1)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
