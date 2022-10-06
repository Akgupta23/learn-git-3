#include <iostream>
using namespace std;
int newf(int a,int b,int c){
    int s=a+b+c;
    return s;
}
int pro(int a,int b){
    int d=a*b;
    return d;
}
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   int d=newf(a,b,c);
   int f=pro(a,c);
   cout<<d<<" "<<f;
   
}
//hello