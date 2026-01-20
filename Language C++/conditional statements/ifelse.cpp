#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age:";
    cin>>age;
    if(age>=18){
        cout<<"Can Vote"<<endl;
    }if (age>=25){
        cout<<"Eliglible for election"<<endl;
    }else{
        cout<<"can't Vote"<<endl;
    }
    return 0;
}