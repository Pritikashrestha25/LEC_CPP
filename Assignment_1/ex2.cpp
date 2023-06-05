#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    student(string n, int r){
    name = n;
    rollno = r;
    }
void display()
{
    cout<<name<<"="<<rollno<<endl;
}
};
int main(){
    student s1=student("aisa",20);
    s1.display();
    return 0;
}

