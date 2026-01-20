#include <iostream>
using namespace std;
int main(){
    float tax;
    int income;
    cout<<"Enter the income in laks:";
    cin>>income;
    if (income < 5){
        tax =0;
    }else if (income >=10){
        tax = 0.2 *income;
    }else if (income >=15){
        tax = 0.3 * income;
    }else{
        tax = 0.5 * income;
    }
    cout<< "Tax =" << (tax * 100000)<<endl;
    return 0;
    
}
