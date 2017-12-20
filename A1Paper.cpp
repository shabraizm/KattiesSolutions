#include<stdio.h>
#include <iostream>
#include <complex>
#include<iomanip>
using namespace std;

int main() {

    double A2length = pow(2.0,(-(3.0/4.0)));
        double A2width = pow(2.0,-(5.0/4.0));
        double ratio = A2length/A2width;
        double A2Area = A2length * A2width;

        unsigned int sheets[30];
        int sizeOfSmallestSheet;
        double area;
        unsigned int sheetsreq = 2;
        double currentSheetLen,tapeLength;
        cin>>sizeOfSmallestSheet;

        for(int i = 0; i<sizeOfSmallestSheet-1;i++)
        {
                cin>>sheets[i];

                area = A2Area/(pow(2,i));
                if(sheetsreq<=sheets[i])
                {
                        sheets[i] = sheetsreq;
                }
                currentSheetLen = sqrt(area*ratio);
                tapeLength += currentSheetLen*sheetsreq/2;
                sheetsreq-=sheets[i];
                sheetsreq*=2;
                if(!sheetsreq)
                    break;
        }

        if(!sheetsreq)
        {
                cout<<setprecision(10)<<tapeLength;
        }
        else
        {
                cout<<"impossible";
        }
        return 0;
}
