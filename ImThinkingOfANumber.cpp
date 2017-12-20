#include <iostream>
using namespace std;

void solveClueCase(int greaterThan, int lessThan, bool setLess,
                   int divisors[], int noOfDivisors)
{
    if(!setLess)
        cout<<"infinite";
    else
    {
        bool hasPrinted=false;
        for(int number=greaterThan+1;number<lessThan;number++)
        {
            bool divisbleByAll = true;
            for(int i=0;i<noOfDivisors;i++)
            {
                if(number%divisors[i]!=0)
                {
                    divisbleByAll = false;
                    break;
                }
            }
            if(divisbleByAll)
            {
                cout << number << " ";
                hasPrinted=true;
            }
        }
        if(!hasPrinted)
            cout << "none";
    }

    cout << endl;
}

int main()
{


  int numberOfClues;
  cin >> numberOfClues;
  while(numberOfClues)
  {
      int  noOfDivisors=0;
      int divisors[10];
      int greaterThan=0, lessThan;
      bool setGreat=false, setLess=false;
      for(int index=0;index < numberOfClues;index++)
      {
          int value;
          char clueTypeStr[40], relation[40];
          cin >> clueTypeStr >> relation >> value;//Parses input for two strings and an integer

          if (clueTypeStr[0] == 'g')
          {
                  //cout << "Clue is greater than";
              if(!setGreat || value>greaterThan)
              {
                  greaterThan=value;
                  setGreat=true;
              }
          }
          if (clueTypeStr[0] == 'l')
          {
                  //cout << "Clue is less than";
              if(!setLess || value<lessThan)
              {
                  lessThan=value;
                  setLess=true;
              }
          }
          if (clueTypeStr[0] == 'd')
          {
                  //cout << "Clue is  divisible by";
              divisors[noOfDivisors++] = value;
          }

      }
      solveClueCase(greaterThan, lessThan, setLess, divisors, noOfDivisors);
      cin >> numberOfClues;
  }

  return 0;
}
