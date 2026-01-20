#include <iostream>
using namespace std;
int main (){
    int n=1082954;
    int result =0;
    while(n>0){
        int lastdigit = n % 10;
        result = result * 10 + lastdigit;
        n = n/10;
    }
    cout<<"result ="<<result<<endl;
    return 0;
}