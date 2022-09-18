// Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class cube{
    float side;
    float volume;
    public:
    cube(float s){

        side=s;
        volume=side*side*side;
    }
    void showdata(){
        cout<<"Volume of a cube is:"<<volume<<endl;
    }
};
int main(){
    cube c(5.67);
    c.showdata();
    return 0;
}