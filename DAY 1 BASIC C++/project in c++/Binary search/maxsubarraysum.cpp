//------------------Brute force approach--------------------

// #include<iostream>
// #include <climits>
// using namespace std;
// void subarrymax1(int arr[],int n){
//     int maxsum=INT_MIN;
//     for (int start=0;start<n;start++){
//         for (int end=start;end<n;end++){
//             int currsum=0;
//             for(int i=start;i<=end-1;i++){
//                 currsum +=arr[i];
//             }                                             
//             cout<<currsum<<",";
//             maxsum=max(maxsum,currsum);

//         }
//         cout<<endl;
//     }
//     cout<<"maxsubarrysum="<<maxsum;
// }
// int main(){
//     int arr[]={2,-3,6,-5,4,2};
//     int n=sizeof(arr)/sizeof(int);
//     subarrymax1(arr,n);
//     return 0;
// }


//------------------optimisation--------------------


// #include<iostream>
// #include <climits>
// using namespace std;
// void subarrymax2(int arr[],int n){
//     int maxsum=INT_MIN;
//     for (int start=0;start<n;start++){
//         int currsum=0;
//         for (int end=start;end<n;end++){
//             currsum +=arr[end];
//             maxsum=max(maxsum,currsum);

//         }
        
//     }
//     cout<<"maxsubarrysum="<<maxsum<<endl;
// }
// int main(){
//     int arr[]={2,-3,6,-5,4,2};
//     int n=sizeof(arr)/sizeof(int);
//     subarrymax2(arr,n);
//     return 0;
// }