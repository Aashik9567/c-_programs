#include<iostream>
#include<ncurses.h>
using namespace std;
class dist{
    float feet,inch;
    public:

    void in(){
    system("clear");
        cout<<"enter distance in feet and inch"<<endl;
        cin>>feet>>inch;
    }
    void add(dist,dist);
    void subtract(dist,dist);
    void disp(){
        cout<<feet<<inch<<endl;
     }
     friend ostream &operator<<( ostream &output, const dist &c3);
};
void dist::add(dist s1,dist s2 ){
 inch=s1.inch+s2.inch;
 feet=s1.feet+s2.feet;
 if(inch>12){
     inch=inch-12;
     feet=feet+1;
 }
}
void dist::subtract(dist s1,dist s2){
    inch=s1.inch-s2.inch;
    feet=s1.feet-s2.feet;
    if(inch<0){
        inch+=12;
        feet-=1;
    }
    }
 ostream &operator<<( ostream &aashikdon, const dist &c3) { 
         aashikdon << "F : " << c3.feet << " I : " << c3.inch;
         return aashikdon;            
      }


int main(){
    dist c1,c2,c3;
    c1.in();
    c2.in();
     c3.add(c1,c2);
     c3.disp();
     c3.subtract(c1,c2);
     c3.disp();
     cout<<c3;
}
