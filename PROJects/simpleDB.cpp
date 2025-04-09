//A simple database that stores name,roll,age,marks
//written by: Aman Thakur <amanthakur2010.ak@gmail.com>
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
    int ns;
    cout<<"Enter number of students: ";cin>>ns;
    cout<<"------------------------------------------"<<endl;
    int marks[ns];
    int roll[ns];
    int age[ns];
    string name[ns];

    for(int i=0;i<ns;i++)
    {
        cout<<"Serial Number: "<<i+1<<endl;
        cout<<"Enter name: ";
        cin>>name[i];
        cout<<"Enter roll: ";
        cin>>roll[i];
        cout<<"Enter age: ";
        cin>>age[i];
        cout<<"Enter marks: ";
        cin>>marks[i];
        cout<<"------------------------------------------"<<endl;

    }
    cout<<"Following are the data:"<<endl;
    int x=0;
    while(x<ns)
    {
        
        cout<<x+1<<". "<<"Name: "<<name[x]<<"|"<<"Roll: "<<roll[x]<<"|"<<"age: "<<age[x]<<"|"<<"marks: "<<marks[x]<<endl;
        x++;
    }

   
}