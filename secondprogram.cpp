#include<iostream>
using namespace std;
class student{
    char assignment[20];
    int roll;
public:
    void read(){
        cout<<"enter roll no:";
        cin>>roll;
    }
    void assign(){
        cout<<"Assignment submission [Y/N]:";
        cin>>assignment;
    }
void info(){
    cout<<"Roll no:"<<roll<<endl;
    cout<<"Assignment submission:"<<assignment<<endl;
}
};
int main(){
    student priyanka,lijala;
cout<<"Student : Priyanka"<<endl;
priyanka.read();
priyanka.assign();
priyanka.info();
cout<<"\n Student : Lijala"<<endl;
lijala.read();
lijala.assign();
lijala.info();
}
