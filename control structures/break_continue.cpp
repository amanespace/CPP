#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for(int i=1;i<=40;i++){
        cout<<i<<endl;
        if(i==20){
            break;  //loop ko chor do
        }
    }

    //glimpse of infinite
    for (int a=1;true;a++){
        cout<<a<<endl;
        if(a==1000000){
            break;
        }
    }

    //print 1 to 10 but not 4
    for(int k=1;k<=10;k++){
        if(k==4){
            continue; //means, i==4 pr es particular iteration ko skip kr do or i==5 pe chale jao
        }
        cout<<k<<endl;
    }
    return 0;
}
