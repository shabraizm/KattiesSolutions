#include <iostream>
using namespace std;

int main() {

    int dataPerMonth = 0;
    int numOfMonths = 0;
    int sum = 0;
    int dataUsed = 0;
    cin>>dataPerMonth;
    cin>>numOfMonths;
    for(int index = 0; index < numOfMonths; index++)
    {
        cin>>dataUsed;
        sum += dataUsed;
    }

    cout<<(dataPerMonth*(numOfMonths+1)-sum)<<endl;;
    return 0;
}
