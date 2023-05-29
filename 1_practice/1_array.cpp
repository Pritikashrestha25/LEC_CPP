#include <iostream>
using namespace std;
int main()
{
    string sub[]={"OOP","MATH","TOC","EM","ECT"};
    int mark[5];
    int i,total=0;
    for(i=0;i<5;i++)
    {
        cout<<"Enter the mark of "<<sub[i]<<":";
        cin>>mark[i];
    }
    for(i=0;i<5;i++)
    {
        total+=mark[i];
    }
    cout<<"\nThe total is :"<<total;
}