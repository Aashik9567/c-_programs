#include<iostream>
using namespace std;
#define n 3
template<class a,class b>
class emp{
    public:
    emp(a sal,b name, int index){
        cout<<"the name of person"<< index << " is:"<<name<<endl;
        cout<<"salary"<< index <<":"<<sal;
        cout<<endl;
    }
};
int main(){
    string nam;
    int salary;
    for(int i=0;i<n;i++)
    {
     cout<<"enter the name of pers  and salary"<<endl;
        cin>>nam>>salary;
       emp<float,string>ob1(salary,nam,i);
        }
   return 0;
}