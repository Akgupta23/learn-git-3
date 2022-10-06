#include <iostream>
using namespace std;

int multiply(int a,int b){
    int d=a*b;
    return d;
}
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   int d=multiply(a,b);
   int f=multiply(a,c);
   cout<<d<<" "<<f;
   
}