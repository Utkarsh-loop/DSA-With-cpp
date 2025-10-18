#include<iostream>
using namespace std;

//--------------Pattern-1-----------------4stars in 4 rows--------------
/*int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<< "*" ;
        }
        cout<< endl;
    }
    return 0;
}*/
//--------------Pattern-2-----------------Right angled triangle of stars--------------
/*int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j =0; j<=i;j++){
            cout<< "*";
        }
        cout<< endl;
    }

  return 0;
}*/
//---------------pattern-3-------------numbered right angled triangle--------------
void pattern3(int n){
    for(int i=1;i<n;i++){
        for(int j =1; j<=i;j++){
            cout<<j<<" ";
        }
        cout<< endl;
    }
}
//-------------pattern-4-----------------1 time 1to 5times 5--------------------
void pattern4(int n){
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

//-----------------------pattern-5  inverted star triangle---------------------
void pattern5(int n){
    for(int i=1;i<=n;i++){
         for(int j=1;j<=n-i+1;j++){
            cout<<"*";
         }
         cout<<endl;
    }
}
//----------------------------pattern-6  inverted number triangle------------
void pattern6(int n){
    for(int i=1;i<=n;i++){
         for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
         }
         cout<<endl;
    }
}
////////////////------pattern-7 right faced triangle----------------
void pattern7(int n){
   for(int i = 1;i<=2*n-1;i++){
    int stars = i;
    if(i>n)stars = 2*n-i;
    for(int j = 1;j<=stars;j++){
        cout<<"*";
    }
    cout<< endl;
   }
}

//------------------pattern-8----1 0 triangle right angles-----------
void pattern8(int n){
    int start= 1;
    for(int i=0;i<n;i++){
        if(i%2==0) start=1;
        else start = 0;
        for(int j=0;j<i;j++){
            cout<<start;
            start = 1-start;
        }

    }
}
//-------------------pattern-9-----------------------------
void pattern9(int n){
   int space= 2*(n-1);
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space -= 2;
        }
    }

//-----------------pattern-10 butterfly----------------------------
void butterfly(int n){
    int spaces= 2*n-2;
    for(int i =1;1<=2*n-1;i++){
        int stars = i;
        if(i>n)stars = 2*n-i;
        for(int j =1;j<=stars;j++){
            cout<<"*";

        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        
         
         
    
        for(int j =1;j<=stars;j++){
            cout<<"*";

        }
        cout<<endl;
        if(i<n) spaces -=2;
        else spaces +=2;

    }
}
    

int main(){
    butterfly(4);
}
