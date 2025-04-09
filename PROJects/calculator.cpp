//simple calculator that performs addition,subtraction,multiplication,division
//written by: Aman Thakur <amanthakur2010.ak@gmail.com>
#include<iostream>
using namespace std;
int main()
{
    char choice;
    int num;
    cout<<"Times you want to perform calculations (0=infinite): ";cin>>num;
    if(num==0)
    {
        cout<<"Going infinite!"<<endl;
        for(int i=1;true;i++)
        {

            float a,b;char op;
            cout<<"Enter first number: ";cin>>a;
            cout<<"Enter second number: ";cin>>b;
            cout<<"Enter operator: ";cin>>op;
            if(b==0&&op=='/'){
                cout<<"ERROR:division by 0"<<endl;
                break;
            }
            else
            {
                switch(op){
                    case('+'):{cout<<"The addition is: "<<a+b<<endl;break;}
                    case('-'):{cout<<"The subtraction is: "<<a-b<<endl;break;}
                    case('*'):{cout<<"The multiplication is: "<<a*b<<endl;break;}
                    case('/'):{cout<<"The division is: "<<a/b<<endl;break;}
                    default:{cout<<"Invalid operator/Not supported yet"<<endl;}
                }
            }
        }

    }
    else if(num>0)
    {
        for(int k=1;k<=num;k++)
        {
            float a,b;char op;
            cout<<"Enter first number: ";cin>>a;
            cout<<"Enter second number: ";cin>>b;
            cout<<"Enter operator: ";cin>>op;
            if(b==0&&op=='/'){
                cout<<"ERROR:division by 0"<<endl;
                break;
            }
            else
            {
                switch(op){
                    case('+'):{cout<<"The addition is: "<<a+b<<endl;break;}
                    case('-'):{cout<<"The subtraction is: "<<a-b<<endl;break;}
                    case('*'):{cout<<"The multiplication is: "<<a*b<<endl;break;}
                    case('/'):{cout<<"The division is: "<<a/b<<endl;break;}
                    default:{cout<<"Invalid operator/Not supported yet"<<endl;}
                }
            }
        }
    
    }
    else{
        cout<<"Invalid input!"<<endl;
    }
    return 0;
}
