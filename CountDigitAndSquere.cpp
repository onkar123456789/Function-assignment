//Write a function to count the number of digits in a number and then print the square of this number


#include<iostream>
using namespace std;

int countAndSquere(int a){
  int count=0,n;
  while(a>0){
       a=a/10;
       count++;
  }
   
    n=count*count;

}
int main(){
   int a ;
   cout<<"enter a number :";
   cin>>a;
   cout<<countAndSquere(a);
   
}