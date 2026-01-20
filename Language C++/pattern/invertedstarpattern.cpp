#include <iostream>
using namespace std;
int main(){
    int n=10;
    //for (int i=10;i>=1;i--){//outer loop
        //for (int j=1;j<=i;j++){//inner loop
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
