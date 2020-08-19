#include <iostream>
#include <algorithm>
using namespace std;
int main(){

  int a,b,key;
  
  /*
  cout<<"Enter the size of the array";
  cin>>a;
  int arr[a];
  cout<<"Enter the elements";
  for(int i=0; i<a; i++){
    cin>>arr[n];
   }
   */
   
   int arr[]={20,30,40,40,40,50,100,1100}
   int n=sizeof(arr)/sizeof(int);
   cout<<"Enter the element to be searched";
   cin>>key;
   
   // Binary Search function
   bool present = binary_search(arr,arr+n,key);
   if(present){
    cout<<"THe element"<<key<<" is not found";
    }
    else{
      cout<<key<<" has been found at the place"<<index;
      }
   
   //Get the index of element
   //For that in the algo header, use lower_bound(starting_e,ending_e,key); or upper_bound
   //or int *it
   
   auto it = lower_bound(arr,arr+n,key);
   cout<<endl<<"Lower bound<<(it-arr);
   
   //lower_bound returns the index of the location of the >=key
   //upper returns >key
   //here lower =2 and upper=5
   //frequency of occurence of an ele in a sorted array is upper-lower
   
 
   
   
    return 0;
 }
