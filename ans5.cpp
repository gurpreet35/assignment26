// Define a class Date and write a program to Display Dateand initialise date object
// using Constructors.
#include<iostream>
using namespace std;
class Date{
    int year;
    int month;
    int day;
    public:
    Date(int d,int m,int y){
        year=y;
        month=m;
        day=d;
    }
    void showdata(){
        cout<<"Date is :"<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main(){
    Date c(5,5,2003);
    c.showdata();
    return 0;
}