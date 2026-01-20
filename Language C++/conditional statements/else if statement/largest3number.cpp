#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the a:";
    cin>>a;
    cout<<"Enter the b:";
    cin>>b;
    cout<<"Enter teh c:";
    cin>>c;
    if (a>b && a>=c){
        cout<<"Largest is a ="<<a<<endl;
    }else if (b>=c){
        cout<<"Largest is b="<<b<<endl;
    }else{
        cout<<"Largest is c="<<c<<endl;
    }
    return 0;
    
}
