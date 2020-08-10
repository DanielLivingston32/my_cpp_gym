/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int front = - 1, rear = - 1;
int b[100];
void enque(int size){
    int val;
    
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
void Deque() {
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
    int i,a,n;
    
    cout<<"Welcome please enter the size of the queue"<<endl;
    cin>>n;
     while(true){
        cout<<"Please enter the digit from the options"<<endl;
        cout<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Display"<<endl<<"0.Close"<<endl;
        cin>>a;
   
        switch(a){
            case 0:
            cout<<endl<<"Thank you";
                return false;
            case 1:
                enque(n);
                cout<<endl;
                break;
            case 2:
                Deque();
                cout<<endl;
                break;
            case 3:
                Display();
                cout<<endl;
                break;
            
        }
    }  

    return 0;
}
