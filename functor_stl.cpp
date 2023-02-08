#include<iostream>
#include<functional>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    int arr[]={1,34,23,4,32,43};
    sort(arr,arr+5);
    {
            cout<<"the sorted array of the  number\n";
   
        for(int i =0;i<6;i++)
        {
            cout<<arr[i]<<" "<<"";
            
        }
    }

return 0;
}