#include<iostream>
using namespace std;
int main(){
    //Switch case statements
    int age;
    cout<<"Enter age 18 or 22: "<<endl;
    cin>>age;
    switch(age){
        case 18:
        cout<<"You are 18"<<endl;
        break;  //if not use break, it will print all cout of all cases.
        case 22:
        cout<<"You are 22"<<endl;
        break;
        default:
        cout<<"No special cases"<<endl;
        break;
    }
    return 0;
}