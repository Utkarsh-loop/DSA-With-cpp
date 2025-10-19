#include<iostream>
using namespace std;

//------------------count digits-------------------
int count(int n ){
    int cnt = 0;
    while(n>0){
        int lastdigit = n%10;
        cnt = cnt + 1;
        n = n/10;
    }
    return cnt;
}
//------------------reverse a number---------------------
int reverse(int n){
    int cnt =0;
    int revnum = 0;
    while(n>0){
        int lastdigit = n%10;
        cnt = cnt + 1;
        n = n/10;
        revnum = (revnum*10)+lastdigit;
    }

}

//-----------------check palindrome---------------

int palindrome(int n){
    int cnt =0;
    int dup = n;
    int revnum = 0;
    while(n>0){
        int lastdigit = n%10;
        cnt = cnt + 1;
        n = n/10;
        revnum = (revnum*10)+lastdigit;
    }
    if(revnum==dup)cout<< "it's a palindrome";
    else cout<< "not a palindrome";

}
//----------------------armstrong number---------------------------
int armstrong(int n){
    int sum = 0;
    int dup = n;
    while(n>0){
        int ld = n%10;
         sum= sum + (ld*ld*ld);
        n = n/10;
       }
       if(sum==dup)cout<<"it's an armstrong";
       else cout<<"not an armstrong";
}
int main(){
    cout<< armstrong(131);
    return 0;

}