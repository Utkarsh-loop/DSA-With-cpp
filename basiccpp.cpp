//-------------------------------CPP SKELETON-------------------------------------------------------------------


#include <iostream>
using namespace std;
/*int main(){
    return 0;
}*/

// -------------------------------user input is done using :----------------------------
/*cin>>x
*/


//-----------------------------#include <bits/stdc++.h> //[header file that includes every standard library]

//-----------------------------------DATATYPES IN C++--------------------------------------------------------------------------
//int,long,long long,float,double
//string and getline()function (used to take string input with spaces)
//char

//------------------------------------------------------IF-ELSE STATEMENT-----------------------------------------------------------


/*int main(){
    int age ;
    cin >> age;
    if(age>=18){
      cout<< "you are adult";
    }
    else if(age<18 && age>=13){
        cout<<"you are teen";
    }
    else{
        cout<<"you are not adult";
    }
    return 0;
}*/


//------------------------------------------------------SWITCH STATEMENT-----------------------------


/*int main(){
    int day;
    cin >> day;

    switch(day){
        case 1:
          cout << "Monday";
          break;

        case 2:
         cout << "Tuesday";
         break;

        case 3:
         cout << "Wednesday";
         break;

        case 4:
         cout << "Thursday";
         break;

        case 5:
         cout << "Friday";
         break;

        case 6:
         cout << "Saturday";
         break;

        case 7:
         cout << "Sunday";
         break;

        
    }
    return 0;
}
*/
//------------------------------------------------------Arrays and strings------------------------------------------------------

//1d array

/*int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[0];
    return 0;
}*/

//2D ARRAY

/*int main(){
    int arr[3][5];
    arr[1][3] = 10;
    cout << arr[1][3];
}*/

//Strings

/*int main(){
    string s="Striver";
    int len = s.size();
    s[len-1]='z';
    cout<< s[len-1];
    return 0;
}
*/

//----------------------------------------------------------LOOPS------------------------------------------------

//for loop

/*int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << i << " ";
    }
    return 0;
}*/

//while-loop

/*
int i = 1;
while(i<=5){
    cout << i <<endl;
    i++;
    }
*/

//do-while loop

/*
int i= 2;
do{
 cout << "Striver " << i <<endl;
 i= i+1;
}
while(i<=1);
cout<< i << endl;
*/

//------------------------------------------------FUNCTIONS------------------------------------------------------------
//void
//return functions
//parameterised
//non-parameterised
//pass by value - the variables original value remain same and a copy of that value get affected by the function
//pass by reference - the original value get affected by the function reference variable is created using "&" sign
/*
void dosomething(int &num){                   "{(without & sign it is pass by value)}"
   cout<< num <<endl;
   num+=5;
   cout<< num <<endl;
   num+=5
   cout<< num <<endl;
   }
   int main(){
   int num = 10;
   dosomething(num);
   cout<< num <<endl;
   return 0;
   }
*/

