// Write a function that takes the radius of a circle as an argument and returns its area.

#include<iostream>
using namespace std;

float Area(float n){
  
   float p=3.14 ,a;
   a=p*n*n;
   return a;

}

int main(){
float n;
  cout<<"enter a radius of circle :";
  cin>>n;

  cout<<Area(n);

}