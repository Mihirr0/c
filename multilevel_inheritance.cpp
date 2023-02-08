#include<iostream>
using namespace std;
class student{
protected:
int roll_number;
public:
void set_roll_number(int);
void get_roll_number(void);
};
void student::set_roll_number(int r){
    roll_number=r;

}
void student::get_roll_number(){
    cout<<"the roll number is "<<roll_number<<endl;


}
class exam :public student{
    protected:
float math;
float physics;

public :
void set_marks(float,float);
void get_marks();

};
void exam::set_marks(float m1,float m2){
    math= m1;
physics= m2;

}
void exam ::get_marks()
{
    cout<<"the marks obtained in maths are :"<<math<<endl;
    cout<<"the marks obtained in physics are :"<<physics<<endl;
}
class result:public exam{
float percentage;

public:
void display_results(){
    get_roll_number();
    get_marks();
    cout<<"your result is"<<(math+physics)/2<<"%"<<endl;
}
};

int main(){
result harry;
harry.set_roll_number(420);
harry.set_marks(54.0,64.0);
harry.display_results();
return 0;
}