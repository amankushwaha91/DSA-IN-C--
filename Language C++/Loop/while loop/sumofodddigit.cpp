#include <iostream>
using namespace std;
int main(){
    int n=1082957;
    int odddigitsum=0;
    while(n>0){
        int lastdigit =n%10;
        if (lastdigit%2 != 0){
            odddigitsum += lastdigit;
        }
        n=n/10;
    }
    cout<<"sum of odd digits ="<<odddigitsum<<endl;
    return 0;
}