//Write a function to print squares of first n natural numbers, taking n as argument to the function.
#include<iostream>
using namespace std;

int square(int n){

 return n*n;

}

void Nnumbers(int n){

     int s;
     for(int i=1; i<=n; i++){

        
        cout<<i<<":"<<square(i)<<" ";

     }
   

}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
     
    Nnumbers(n);
    

}