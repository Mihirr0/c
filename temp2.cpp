#include <iostream>
using namespace std;
template <class T1, class T2>
class myclass
{
public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout<<this->data1 << " " <<this->data2;
    } /* */
};

int main()
{
    myclass<int ,float>obj(5,1.22);
    // myclass<int, char> obj(1, 'c'); *********moku is a good girl
    // obj.display();
    obj.display();
}

#include<iostream>
using namespace std;
template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }
    void display(){
        cout<<this->data1<<" "<<this->data2;
    }
};
int main()
{
    myClass<int, char> obj(1, 'c');
    obj.display();
}
//include stdio.h
