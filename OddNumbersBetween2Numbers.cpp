//Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;

void Oddnumber(int a,int b){
     if(a > b) {
       Oddnumber(b, a);
     return;
     }
      for(int i=a; i<=b; i++){
         if(i%2!=0){
            cout<<i<<" ";
         }
      }
     
}

int main(){
   int a,b;
   cout<<"enter first number :";
   cin>>a;
   cout<<"enter second number :";
   cin>>b;

  Oddnumber(a,b);
}