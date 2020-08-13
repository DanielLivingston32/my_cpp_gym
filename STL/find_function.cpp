#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int a,b,key;
  cout<<"Enter the size of the array";
  cin>>a;
  int ar[a];
  cout<<"Enter the elements";
  for(int i=0; i<a; i++){
    cin>>ar[n];
   }
   int n=sizeof(ar)/sizeof(int);
   cout<<"Enter the element to be searched";
   cin>>key;
   auto elt = find(ar,ar+n,key);
   int index= elt - ar;
   if(index==n){
    cout<<"THe element"<<key<<" is not found";
    }
    else{
      cout<<key<<" has been found at the place"<<index;
      }
    return 0;
 }
    
   
   
