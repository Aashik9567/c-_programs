#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class cop{
    public:
    string name;
    
    public:
void takename(){
    cout<<"enter the word:";
    cin>>name;
   }
void display(){
    cout<<"the entered word is:"<<name<<endl;
}

};
int main(){
    cop d;
    int i;
    fstream fout;
    fout.open("file1.txt",ios::out);
    
    d.takename();
    
    int length =d.name.length();
    for (i = 0; i < length; i++) {
        int c = d.name[i];
        if (islower(c))
            d.name[i] = toupper(c);
        else if (isupper(c))
            d.name[i] = tolower(c);  
        
    }
    
    fout.write((char *)&d,sizeof(d));
    fout.close();
  fstream fin;
  ofstream out;
  out.open("file2.txt",ios::out);
  fin.open("file1.txt",ios::in);
      while(fin.read((char *)&d,sizeof(d))){
          out.write((char *)&d,sizeof(d));
          d.display();
      }
fin.close();
out.close();
}