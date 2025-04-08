#include<iostream>
using namespace std;
int main()
{
    int age; 
    cout<<"Tell me your age: "<<endl;
    cin>>age;
    if(age<1){
        cout<<"Your are not yet born"<<endl;
    }
    else if(age<18){
        cout<<"You cannot come to my party"<<endl;

    }
    
    else if(age==18){
        cout<<"You will need to get a kid pass"<<endl;

    }
    else{
        cout<<"You can come to party"<<endl;
    }
    return 0;
}
