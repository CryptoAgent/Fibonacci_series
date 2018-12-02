#include <iostream>

int Fib(int n);
using namespace std;
int main(){
int n=0;
cout<<"Enter number>";
cin>>n;
cout<<Fib(n);
return 0;
}
int Fib(int n){
if(n==1 or n==2){
    return 1;
}else if(n==0){
cout<<0;
}
int s = Fib(n-1)+Fib(n-2);
return s;
}
