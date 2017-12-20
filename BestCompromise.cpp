#include <iostream>
using namespace std;
const int MAXPEOPLE = 100;
const int MAXISSUES = 100;

int main() {
    int noOfTestcases;
    cin >> noOfTestcases;
    while(noOfTestcases-- > 0)
    {
        int noOfPeople;
        int noOfIssues;
        cin >> noOfPeople >> noOfIssues;
        char opinions[MAXPEOPLE][MAXISSUES+1];
        for(int i=0;i<noOfPeople;i++)
        {
            cin >> opinions[i];
        }

        char result[MAXISSUES+1];
        result[noOfIssues]='\0';
        for(int i=0;i<noOfIssues;i++)
        {
            int oneCount=0;
            for(int j=0; j<noOfPeople;j++)
                oneCount+=opinions[j][i]-'0';

            if(oneCount>noOfPeople/2)
                result[i]='1';
            else
                result[i]='0';
        }
        cout << result << endl;
    }
}
