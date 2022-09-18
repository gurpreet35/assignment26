// Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.
#include<iostream>
using namespace std;
class Bill{
    int unit;
    public:
    void get(int u){
         unit=u;
         if(unit>=1 && unit<100){
             cout<<"Bill is:"<<unit*(1.20)<<endl;
         }  
         else if(unit>=100 && unit<=200){
             cout<<"Bill is:"<<unit*(2.00)<<endl;
         }
         else
          cout<<"Bill is:"<<unit*(3.00)<<endl;
 }
};
int main(){
    Bill b;
    int u;
    cout<<"Enter your units:"<<endl;
    cin>>u;
    b.get(u);
    return 0;
}