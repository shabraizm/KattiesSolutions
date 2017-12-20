#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double seedCostPermeter2    = 0.0;
    int numberOfLawn            = 0;
    double lawnWidth            = 0.0;
    double lawnLenght           = 0.0;

    cin>>seedCostPermeter2;
    cin>>numberOfLawn;

    double Area                 = 0.0;

    for(int index = 0;index < numberOfLawn ; index++)
    {
        cin>>lawnWidth;
        cin>>lawnLenght;
        Area += lawnWidth*lawnLenght;
    }

    cout<<std::setprecision(7)<<fixed<<Area*seedCostPermeter2;
    return 0;
}