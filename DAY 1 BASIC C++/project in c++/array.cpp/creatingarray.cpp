#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter length of array:";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int length = sizeof(n)/sizeof(int);
    cout<< "size of array= "<<sizeof(arr)/sizeof(int) << endl;// size of array    
    cout<< "size of bytes= "<<sizeof(arr)<<endl;// size of bytes
    return 0;

}