// . Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result
#include<iostream>
using namespace std;
class StaticCount{
    static int count;
    public:
    StaticCount(){
        count++;
    }
    static void getdata(){
        cout<<"Total numer of the objects in a class is :"<<count;
    }
};
int StaticCount::count;
int main(){
    StaticCount ob1,ob2,ob3;
    StaticCount::getdata();
    return 0;
}