/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int front = - 1, rear = - 1;
int declare(int a)
{
    int b[a];
    return b[a];
}
void enque(int b, int size, int d){
    int val;
    
    for(int i=0; i<b; i++){
        if (rear == size - 1){
            cout<<"Queue Overflow"<<endl;
        }
        else {
              if (front == - 1)
              front = 0;
              cout<<"Insert the element in queue : "<<endl;
              cin>>val;
              rear++;
              b[rear] = val;
        }
        
    }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< b[front] <<endl;
      front++;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
         cout<<b[i]<<" ";
         cout<<endl;
   }
}

int main()
{
    int i;
    
    cout<<"Welcome please enter the size of the queue";
    cin>>n;
    declare(n);
    

    return 0;
}
