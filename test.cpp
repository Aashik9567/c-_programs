#include<iostream>
using namespace std;
int main()
{
    int day, month, year;
    cout<<"Enter the Date of birth in y:m:d Format : ";
    cin>>year>>month>>day;
    try
    {
        if(year <= 1800 || year>=2022)
        {
            throw year;
        }
		cout<<"year:"<<year;
	}
	  catch(int year)
    {
        cout<<"Year Out of range"<<endl;
    }	
       try{
	    if(month > 12)
        {
            throw month;
        }
		cout<<"month"<<month;
	   }
	   catch(int month)
    {
        cout<<"Month Out of range"<<endl;
    }
	try {
        if(day > 32 || day <= 0){
            throw day;
        }
		cout<<"day"<<day;

        
    }
    catch(int day)
    {
        cout<<"Day Out of range"<<endl;
    }
    return 0;
}