//  Define a class Complex to represent a complex number with instance variables a and
// b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)
#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
    void setdata(int x,int y){
        real=x;img=y;
    }
    void showdata(){
        cout<<"Complex numbers is : "<<real<<" + i"<<img<<endl;
    }
    Complex add(Complex x){
        Complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
};
int main(){
    Complex c1,c2,c3;
    c1.setdata(5,7);
    c2.setdata(4,4);
    c1.showdata();
    c2.showdata();
    c3=c1.add(c2);
    c3.showdata();
    return 0;
}