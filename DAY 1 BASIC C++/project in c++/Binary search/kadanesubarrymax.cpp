#include<iostream>
#include<climits>
using namespace std;
void maxsubarray(int arry[],int n){
    int maxsum=INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum +=arry[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }

    }
    cout<<"maxsubarrysum="<<maxsum<<endl;
}
int main(){
    int arry[]={2,-3,6,-5,4,2};
    int n=sizeof(arry)/sizeof(int);
    maxsubarray(arry,n);
    return 0;
}