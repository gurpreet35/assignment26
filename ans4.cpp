// Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class counter{
    int x;
    public:
    counter(int a){
        x=a;
        cout<<"Value of counter is :"<<x<<endl;
    }

};
int main(){
    counter c(5);
    return 0;
}