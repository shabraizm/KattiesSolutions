#include <iostream>
using namespace std;

int main() {

    int n, s, t;

    cin>>n;

    while(n>0)
    {
        int totalDist = 0, tLapsed=0;
        for(int i = 0; i < n; i++)
        {
            cin>>s>>t;

            totalDist += s*(t - tLapsed);

            tLapsed = t;

        }

        cout<< totalDist<< " miles"<<endl;

        cin>>n;

    }


    return 0;
}