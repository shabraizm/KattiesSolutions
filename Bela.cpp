#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

    int N = 0, score = 0;
    char trump = '\0';
    string str = "";
    map<char, int> noDom;
    noDom['A']= 11;
    noDom['K']= 4;
    noDom['Q']= 3;
    noDom['J']= 2;
    noDom['T']= 10;
    noDom['9']= 0;
    noDom['8']= 0;
    noDom['7']= 0;

    map<char, int> Dom;
    Dom['A']= 11;
    Dom['K']= 4;
    Dom['Q']= 3;
    Dom['J']= 20;
    Dom['T']= 10;
    Dom['9']= 14;
    Dom['8']= 0;
    Dom['7']= 0;


    cin>> N >> trump;


    for(int i = 0; i< 4*N ; i++)
    {
        cin>>str;

        if(str[1] == trump)
        {
            score += Dom[str[0]];
        }
        else
        {
            score += noDom[str[0]];
        }
    }
    cout<<score;
    return 0;
}
