#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<2)
        return false;
    for(int i=2;i<n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
bool isPalindrome(int n){
    int original=n;
    int reverse=0;

    while(n>0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    return original==reverse;
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    if(isPrime(n) && isPalindrome(n)){
        cout<<"Prime Palindrome";
    }
    else{
        cout<<"Not Prime Palindrome";
    }
    return 0;
}