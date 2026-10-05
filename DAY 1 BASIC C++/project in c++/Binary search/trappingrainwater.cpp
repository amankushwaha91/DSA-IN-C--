#include<iostream>
#include<climits>
using namespace std;
void trap(int hight[],int n){
    int leftmax[20000],rightmax[20000];
    leftmax[0]=hight[0];
    rightmax[n-1]=hight[n-1];
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],hight[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],hight[i+1]);
    }
    int trapwater=0;
    for(int i=0;i<n;i++){
        int currwater=min(leftmax[i],rightmax[i])-hight[i];
        if(currwater>0){
            trapwater += currwater;
        }
    }
    cout<<"water is trapped="<<trapwater;
    


}
int main(){
    int hight[]={4,2,0,6,3,2,5};
    int n=sizeof(hight)/sizeof(int);
    trap(hight,n);
    return 0;
}