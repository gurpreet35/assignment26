// Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.
#include<iostream>
#include<string.h>
using namespace std;
class Student{
    int rollno;
    char name[10];
    int section;
    public:
    Student(int r,char n[10],int s){
        rollno=r;
        strcpy(name,n);
        section=s;
    
    }
    void showdata(){
        cout<<rollno<<" "<<name<<" "<<section<<endl;
    }
};
int main(){
    Student c(2131851,"Preet",2),c1(2131863,"Mehak",1);
    cout<<"Student Details is (Roll no,Name,Section):\n";
    c.showdata();
    c1.showdata();
    return 0;
}