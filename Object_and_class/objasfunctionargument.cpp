#include<iostream>
using namespace std;
class student{
    public:
    double marks;
    student(double m){
    marks=m;}
};
void calculateaverage(student s1, student s2)
{
    double average;
    average = (s1.marks+s2.marks)/2;
    cout<<"The average of the student is:"<<average<<endl;
}
int main(){
student m1(20),m2(30);
calculateaverage(m1,m2);
};
 
