#include <iostream>
using namespace std;

int main() {

    int cooks[5];
    int s1,s2,s3,s4,max=0,index;
    for(int i=0; i<5;i++)
    {
        cin>>s1>>s2>>s3>>s4;
        cooks[i]= s1+s2+s3+s4;
        if(max<cooks[i])
        {
            max=cooks[i];
            index = i+1;
        }
    }
    cout<<index <<" "<<max;


    return 0;
}
