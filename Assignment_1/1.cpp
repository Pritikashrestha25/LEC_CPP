#include <iostream>
using namespace std;
class A
{
    int a;
    public:
    A(int x)
    {
        a=x;
    }
    void putdata()
    {
        cout<<"value of a="<<a;
    }
};
int main()
{
    int m;
    cout<<"enter the value of a:";
    cin>>m;
    A aa(m);
    aa.putdata();
    return 0;
}
