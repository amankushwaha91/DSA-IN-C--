//number=10829
#include <iostream>
using namespace std;
int main(){
int n=10829;
int digitsum=0;
while (n>0){
    int lastdigit=n%10;
    digitsum += lastdigit;
    n=n/10;
}
cout<<"sum of digits ="<<digitsum<<endl;
return 0;
}
