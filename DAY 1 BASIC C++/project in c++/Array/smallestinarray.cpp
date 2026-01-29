# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter length :";
    cin>>n;
    int arr[n];
    int p=sizeof(arr)/sizeof(int);
    int min=arr[0];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"min= "<<min<<endl;
    return 0;
}