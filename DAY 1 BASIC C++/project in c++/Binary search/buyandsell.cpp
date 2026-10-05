#include<iostream>
#include<climits>
using namespace std;

void maxprice(int price[],int n){
    int bestbuy[100000];
    bestbuy[0]=INT_MAX;
    for (int i=1;i<n;i++){
        bestbuy[i]=min(bestbuy[i-1],price[i-1]);
        // cout<<bestbuy[i]<<",";
    }
    int maxprofit=0;
    for(int i=1;i<n;i++){
        int currprofit=price[i]-bestbuy[i];
        maxprofit=max(currprofit,maxprofit);
        
    }
    cout<< "Profit="<<maxprofit<<endl;
    

}
int main(){
    int price[]={7,1,5,3,6,4};
    int n=sizeof(price)/sizeof(int);
    maxprice(price,n);
    return 0;
}