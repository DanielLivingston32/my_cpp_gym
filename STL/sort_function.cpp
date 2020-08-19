#include <iostream>
#include <algorithm>
using namespace std;

//Comparator function
bool compare(int a,int b){
  return a>b;
}

int main(){
  int n,key;
  
  cin>>n;
  int a[1000];

  for(int i=0; i<a; i++){
    cin>>a[i];
   }
   //sort function sytax, sort(starting_index,ending)
   
   sort(a,a+n,compare);
   //Sort in decending order
   for(int i=0; i<n; i++){
    cout<<a[i]<<",";
    }
   
    return 0;
 }
