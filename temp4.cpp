#include<iostream>
using namespace std;
template<class T>
void swapp(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
template<class T1,class T2>
float funaverage(T1 a, T2 b){
    float avg=(a+b)/2.0;
   
    return avg;

}
int main(){
    float a;
    a=funaverage(5,2);
    cout<<"the average of these functiom is:"<<a<<endl;
    int x=3,y=9;
     swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}