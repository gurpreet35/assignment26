// Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor.
#include<iostream>
using namespace std;
class Bank{
    float principal,rate,time;
    public:
    Bank(float l,float b,float h){

        principal=l;
        rate=b;
        time=h;
    }
    void Simple_interest(){
        cout<<"Simple Interest is:"<<(principal*rate*time)*100<<endl;
    }
};
int main(){
    float p,r,t;
    cout<<"Enter the principal amount:"<<endl;
    cin>>p;
    cout<<"Enter rate :"<<endl;
    cin>>r;
    cout<<"ENter time interval:"<<endl;
    cin>>t;
    Bank c(p,r,t);
    c.Simple_interest();
    return 0;
}