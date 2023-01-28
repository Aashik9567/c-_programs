//page 54 q.no:7
#include<iostream>
using namespace std;
class polygon{
    public:
    int height,length;
    public:
 polygon(int h,int l){
     height=h;
     length=l;
 }
 virtual void area()=0;
};
class rectangle:public polygon{
    public:
 rectangle(int l,int b):polygon(l,b){}
 void area(){
     cout<<"area of rectangle="<<(height*length)<<endl;
}
};
class triangle:public polygon{
    public:
triangle(int h,int l):polygon(h,l){}
void area(){
    cout<<"area of triangle="<<(0.5*height*length)<<endl;
}
};
int main(){
    
    rectangle r(10,20);
    triangle t(4,5);
polygon *p[]={&r,&t};
    for(int i=0;i<2;i++){
        p[i]->area();
    }
} 