// Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.
#include<iostream>
using namespace std;
class Box{
    float length,breadth,height;
    float volume;
    public:
    Box(float l,float b,float h){

        length=l;
        breadth=b;
        height=h;
    }
    void Volume(){
        cout<<"Volume of a cube is:"<<length*breadth*height<<endl;
    }
};
int main(){
    Box c(5.67,12.2,45.6);
    c.Volume();
    return 0;
}