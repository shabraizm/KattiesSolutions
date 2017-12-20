#include<iostream>
using namespace std;
#include<math.h>


int main()
{
    long long num, total = 0;
    int bin[50],index;
    cin >> num;
    index = 0;
    while(num > 0)
    {
        bin[index++]= num % 2;
        num /= 2;
    }
    for(int i = 1; i <= index;i++)
    {
        total += bin[index-i]*pow(2,i-1);
    }
    cout << total<<endl;
    return 0;
}
