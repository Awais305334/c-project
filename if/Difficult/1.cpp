#include <iostream>
using namespace std;
int main(){
int a, b, c, d;
int max=a;
int min=a;
if (b > max){
cout<<"max = b";
}
if (c > max){
cout<<"max = c";
}
if (d > max){
cout<<"max = d";
}
if (b < min){
cout<<"min = b";
}
if (c < min){
cout<<"min = c";
}
if (d < min){
cout<<"min = d";
}
cout<<"Largest"<<max << endl;
cout<<"Smallest"<<max << endl;
return 0;
}