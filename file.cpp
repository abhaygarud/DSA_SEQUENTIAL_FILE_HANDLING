#include <iostream>
#include<fstream>
using namespace std;

int main(){
    void Myself();
    char name[20];
    int long no;
    ofstream file;
    file.open("detail.txt");
    if(!file)
    {
        cout<<"file is creating Error"<<endl;
    }cout<<"File created succesfully"<<endl;
    for(int i=0;i<=2;i++)
    {

    cout<<"Enter the string to write in a file"<<endl;
    cin>>name;
    cout<<"Enter studnet roll number"<<endl;
    cin>>no;
    
    file<<" student name  :"<<endl;
    file<<name;
    file<<" student roll no  :"<<endl;
    file<<no;
    }
    file.close();
    ifstream a;
    file.open("detail.txt");
    while(a)
    {
     
  
    cout<<"student name  :"<<endl;

    
        file>>name;
        cout<<name;
    // }
    cout<<"student roll  :"<<endl;
    //  int a;
    // while(!file.eof())
    // {
        file>>no;
        cout<<no;
    }
    file.close();
    
}