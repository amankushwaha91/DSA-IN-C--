#include<iostream>
using namespace std;

int binsearch(int arr[],int n,int key){
    int st=0,end=n-1;
    while (st<=end){
        int mid =(st+end)/2;
        if (arr[mid]==key){
            return mid;
        }else if (arr[mid]<key){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;  // key is not found
}
int main(){
    int arr[]={4,6,14,17,25,30};
    int n=sizeof(arr)/sizeof(int);
    cout<<binsearch(arr,n,30)<<endl;
    return 0;
}