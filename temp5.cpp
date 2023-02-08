#include<iostream>
using namespace std;

template<class T>
class mihir{
    public:
T data;
mihir(T a){
    data=a;
 }    
 void display()
 {
     cout<<data;
 }
};
int main(){
mihir <int > h(5.4);
cout<<h.data<<endl;
// h.display();
return 0;
}