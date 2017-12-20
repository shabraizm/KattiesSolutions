#include <iostream>
using namespace std;

int main() {

    int x[3] = {0,0,0};
    int y[3] = {0,0,0};
    int X,Y;

    cin>>x[0]>>y[0];
    cin>>x[1]>>y[1];
    cin>>x[2]>>y[2];

    if(x[0]!=x[1] && x[0]!=x[2]){ X = x[0];}
    else if(x[1]!=x[0] && x[1]!=x[2]){ X = x[1];}
    else if(x[2]!=x[1] && x[2]!=x[0]){ X = x[2];}

    if(y[0]!=y[1] && y[0]!=y[2]){ Y = y[0];}
    else if(y[1]!=y[0] && y[1]!=y[2]){ Y = y[1];}
    else if(y[2]!=y[1] && y[2]!=y[0]){ Y = y[2];}

        cout<<X<<" "<<Y;
    return 0;
}
