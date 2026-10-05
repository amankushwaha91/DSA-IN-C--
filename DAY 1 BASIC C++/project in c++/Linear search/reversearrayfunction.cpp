#include<iostream>
using namespace std;
void reversearray(int arry[],int n)
{
    for (int i=0;i<n;i++){
        cout<<arry[i]<<",";
    }
    cout<<endl;
}
int main(){
    int arry[]={3,4,5,6,7,1,8};
    int n=sizeof(arry)/sizeof (int);
    int copyarry[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyarry[i]=arry[j];   
    }
    for(int i=0;i<n;i++){
        arry[i]=copyarry[i];
    }
    reversearray(arry,n);
    return 0;
}
