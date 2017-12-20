#include <iostream>
using namespace std;

int main() {

    int a1,b1,a2,b2;
    int emma,gunner;

    cin>>a1>>b1>>a2>>b2;
    gunner = a1+b1+a2+b2;
    cin>>a1>>b1>>a2>>b2;
    emma = a1+b1+a2+b2;

    if(emma==gunner)
        cout<<"Tie";
    else if(emma>gunner)
        cout<<"Emma";
    else
        cout<<"Gunnar";


    return 0;
}
