#include <iostream>
#include <string>
using namespace std;

int main() {

    string list1[15];

    int set = 0,size = 0;

    while(1)
    {
        cin>>size;

        if(size == 0)
            break;

        cout<<"SET "<<++set<<endl;
        string str;
        int offset = 1;

        for(int i = 0; i < size; i++)
        {
            cin>> str;
            if(i%2 == 0)
            {
                list1[(int(i/2))] = str;
            }
            else
            {
                list1[((size-offset)-int(i/2))] = str;
            }
        }

        for(int i = 0; i < size; i++)
        {
            cout << list1[i]<<endl;
        }

    }
    return 0;
}
