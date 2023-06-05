#include <iostream>
using namespace std;
class friends{
    public:
    char name[10];
    int phone;
    char address[30];
  
  friends(){
    cout<<"enter the phone number:"<<endl;
    cin>>phone;
    cout<<"enter address:"<<endl;
    cin>>address;
  }
void info()
{
  cout<<"the phone number of my friend is:"<<phone;
  cout<<"the address of my friend is:"<<address;
}

int main()
{
  friends anisa,usha;
  cout<<"anisa:"<<endl;
  anisa.info();
  cout<<"usha:"<<endl;
  usha.info();
  return 0;
  
}



