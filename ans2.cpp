//  Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)
#include<iostream>
using namespace std;
class Time{
    int hour,minute,second;
    public:
    void setTime(int x,int y,int z){
        hour=x;minute=y;second=z;
    }
    void showTime(){
        cout<<"Time is:"<<hour<<":"<<minute<<":"<<second<<endl;
    }
    void normalize(){
        if(second>60){
            if(minute>60){
                hour++;
                minute=minute-60;    
            }
            else
            minute++;
            second=second-60;
        }
        if(minute>60){
            hour++;
            minute=minute-60;
        }
    }
    Time add(Time a){
        Time t;
        t.second=second+a.second;
        t.minute=minute+a.minute;
        t.hour=hour+a.hour;
          return t;
    }
};
int main(){
    Time t1,t2,t3;
    t1.setTime(1,60,62);
    t2.setTime(2,5,45);
    t3=t1.add(t2);
    t3.normalize();
    t3.showTime();
    return 0;
}