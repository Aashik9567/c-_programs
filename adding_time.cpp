//riteWrike a base class that ask the user to enter time Chr, minjsec) and derived class, adds the time of its own with the base finally make third class that is friend of derived and calculate the difference of base time and its own time.
#include<iostream.h>
using namespace std;
class base {
    public:
    int h,m,s;
    void in(){
        cout<<"enter time in hr min and sec:";
        cin>>h>>m>>s;

    }
};
class derieved:public base{
    void i(){
        cout<<"enter time in hr min and sec:";
        cin>>h>>m>>s;
    }
    void sum(base &t1,time &t2){
       s=t1.s+t2.s;
        m=s/60;
        s=s%60;
        m=m+t1.m+t2.m;
        h=m/60;
        m=m%60;
        h=t1.h+t2.h;
    }
    void disp (){
        cout<<h<<m<<s;
    }
};
int main(){
    derieved d1,d2,d3;
    d1.in();
    d2.i();
    d3=d1+d2;
    d3.disp();

}

