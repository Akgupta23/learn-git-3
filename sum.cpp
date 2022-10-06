#include <iostream>
using namespace std;
int newf(int a,int b,int c){
    int s=a+b+c;
    return s;
}
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   int d=newf(a,b,c);
   cout<<d;
}
//hello