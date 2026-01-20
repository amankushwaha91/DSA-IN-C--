#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"entr the length of array: ";
    cin>>n;
    int arr[n];
    int length = sizeof(arr)/sizeof(int);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max =arr[0];
    for (int i=1; i<n; i++){
        if (arr[i]>max){
            max=arr[i];

        }
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<< "max="<< max <<endl;
    return 0;

}
