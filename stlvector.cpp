#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
    for(int i=0;i<v.size();i++)
    { cout<<v[i]<<" ";
    }
    cout <<endl;
}
int main(){
    vector<int>vec1;
    int element,size;
    cout<<"enter the  size of vector"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)

{
    cout<<"enter an element  to add to ths vector"<<endl;
    cin>>element;
    vec1.push_back(element);
// vec1.pop_front();
}
display (vec1);

return 0;
}