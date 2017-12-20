#include <iostream>
#include <math.h>
using namespace std;

int main() {

    string str = "/0";
    cin>>str;
    int sumT = 0;
    int sumC = 0;
    int sumG = 0;
    int setcount = 0;
    int extraScore = 0;
    for(unsigned int index = 0; index < str.length(); index++)
    {
        switch(str[index])
        {
        case 'T':
            sumT++;
            break;
        case 'C':
            sumC++;
            break;
        case 'G':
            sumG++;
        }

        if(sumT>setcount && sumC>setcount && sumG>setcount)
        {
            extraScore += 7;
            setcount++;
        }
    }

    cout<< (pow(sumT,2) + pow(sumC,2) + pow(sumG,2) + extraScore)<<endl;
    return 0;
}
