#include<iostream>
#include<string>
#include<map>

using namespace std;
int main(){
map<string,int>marksmap;
marksmap["mihir"]=85;
marksmap["nakul"]=01;
marksmap["pari"]=05;
marksmap["ranveer"]=65;
map<string,int>::iterator iter;
for(iter =marksmap.begin();iter !=marksmap.end();iter++){
    cout<<(*iter).first<<" "<<(*iter).second<<"\n";

}
cout<<"mihir and ranveer are merit"<<endl;
cout<<"nakul and parii have to reappear"<<endl;
return 0;
}