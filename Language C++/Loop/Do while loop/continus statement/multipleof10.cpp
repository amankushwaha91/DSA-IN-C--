#include <iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"Enter the numnber:";
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<"your entered ="<<n<<endl;
    }while(true);
    return 0;
}