#include<iostream>
#include <list>

using namespace std;
void display (list<int>&lst){
    list <int>::iterator it ;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";

    }
}
// int main(){
// list <int>list1;
// list1.push_back(5);
// list1.push_back(596);
// list1.push_back(45);
// list1.push_back(4);
// display(list1);
// return 0;
// }
int main (){
    list<int>list2(3);
    list<int>::iterator it=list2.begin();
    *it=45;
    it++;
    *it=6;
    it++;
    display(list2);
    return 0;
}