#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
void swap(int*x,int*y)
{
    int temp;
    temp=*y;
    *y=*x;
    *x=temp;
}
int getnum(){
    int a;
    cout<<"enter a value of a:";
    cin>>a;
    return a;
}
int main()
{
    int x = getnum();
    int y = getnum();
    cout<<"value before swap:"<<x<<","<<y<<endl;
    swap(&x,&y);
    cout<<"value after swap:"<<x<<","<<y<<endl;
    return 0;
}

