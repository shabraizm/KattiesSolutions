#include <iostream>
#include <string>
using namespace std;
bool isVowel(char ch) { return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'); }
int main() {
    char str[100]={""},ans[100]={""};
    cin.getline(str,sizeof(str));
    int i=0,n=0;
    while(str[i]!='\0')
    {
        if(isVowel(str[i]))
        {
            if((str[i+1]) == 'p')
            {
                if(str[i+2]==str[i])
                {
                    ans[n]=str[i];
                    i+=2;
                }

            }

        }
        else
        {
            ans[n]=str[i];
        }
        ++n;
        ++i;
    }
    ans[n+1] = '\0';
    cout<<ans;
    return 0;
}
