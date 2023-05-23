#include <iostream>
using namespace std;
int main()
{
    int instrument;
    cout<<"Enter the instrument code:";
    cin>>instrument;
    cout<<"The instrument is ";
    switch(instrument)
    {
    case 1 :
        cout<<"pen";
        break;
    case 2:
        cout<<"sharpner";
        break;
    case 3:
         cout<<"pencil";
         break;
    case 4:
        cout<<"eraser";
        break;
    default:
        cout<<"Instrument not in the list";
    }
    return 0;
}