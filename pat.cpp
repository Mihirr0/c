#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int i= 1;
  while(i <= n){
    int j= 1;
    while(j<= (n-i+1)){
      cout<<j <<" ";
      j=j + 1;
    }
    // first star print

    int fstar=i-1;
    while(fstar){
      cout<<"* ";
      fstar--;
    }
    // second triangle 
    int tstar=1;
    while(tstar<i){
      cout<<"* ";
      tstar++;

    }
    int start=1;
    while(start<=n-i+1){
      cout<<n-i+1<<" " ;
      start++;
    }

    cout<<endl;
    i=i + 1;
  }
return 0;
}