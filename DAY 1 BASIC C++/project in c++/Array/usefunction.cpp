#include<iostream>
using namespace std;
void fun(int arr[]){//address
    arr[0]=1000;

}
void fun2(int *ptr){
    ptr[0]=1000;

}
int main(){
    int a=5;
    int *ptr=&a;
    cout<<ptr<<endl;//address
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    fun(arr);//passing array name is equal to passing pointer
    cout<<*arr<<endl;//arr[0]
    cout<<*arr+1<<endl;//arr[1]
    return 0;



}