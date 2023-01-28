#include<iostream>
#include<string.h>
using namespace std;
class stringcon{
    string name;
    public:
    void input(){
        cout<<"enter  string:"<<endl;
        cin>>name;
    }
   stringcon operator +(stringcon s1){
    stringcon te;
        te.name=name+s1.name;
        return te;
    }
    void display(){
        cout<<"after con"<<name;
    }
};
int main(){
    stringcon c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1+c2;
    c3.display();
    return 0;
}  