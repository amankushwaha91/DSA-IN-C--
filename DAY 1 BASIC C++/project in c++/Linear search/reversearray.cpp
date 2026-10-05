#include<iostream>
using namespace std;
void printarry(int arry[],int n){
    for (int i=0;i<n;i++){
        cout<<arry[i]<<",";
    }
    cout<<endl;
}
int main(){
    int arry[]={4,6,7,8,9,1,2};
    int n=sizeof(arry)/sizeof (int);
    int st=0, end=n-1;
    while(st<end){
        swap(arry[st],arry[end]);
        // int temp=arry[st];               // used the only on method  swap / temp variable method
        // arry[st]=arry[end];
        // arry[end]=temp;
        st++;
        end--;
    }
    printarry(arry,n);
    return 0;
}