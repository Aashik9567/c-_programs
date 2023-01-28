//question no 4 no of page 54
#include<iostream>
#include<math.h>
using namespace std;
class polar{
    float r,th;
    public:
    polar(){
        r=0;
        th=0;
    }
    polar(float rad,float thet){
        r=rad;
        th=thet;
    }
    void display(){
        cout<<r<<"angle:::::"<<th;
    }
};
class rectangular{
    float x,y;
    public:
    rectangular(float xcor,float ycor){
        x=xcor;
        y=ycor;
    }
    operator polar(){
        float a,b;
        a=sqrt(pow(x,2)+pow(y,2));
        b=atan(y/x);
        return polar(a,b);

    }
    };
int main(){
    polar p;
    rectangular ro(5,5);
    p=ro;
    p.display();
    return 0;
}
