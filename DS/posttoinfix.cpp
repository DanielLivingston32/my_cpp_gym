#include <bits/stdc++.h>
using namespace std;
bool isOperand(int x) {
   return (x >=INT_MIN && x <= INT_MAX);
}


string infixConversion(string postfix) {


	stack<string> infix;
	int n=postfix.length();
	stringstream a(postfix);
	int num[n];
	char c;
	int temp;
	while(a >> temp){
		num.push_back(temp);
		a >> c;
	}
	ostringstream str1;
  //HOW TO CONVERT A VECTOR TO A INT ARRAY
  //CAN YOU FIX THIS CODE
	str1 << num; 

	// the str() coverts number into string 
	string result = str1.str(); 
   
   for (int i=0; result[i]!='\0'; i++) {
      if (isOperand(result[i])) {
         string op(1, result[i]);
         infix.push(op);
      } else {
         string op1 = infix.top();
         infix.pop();
         string op2 = infix.top();
         infix.pop();
         infix.push("{"+op2+postfix[i]+op1 +"}");
      }
   }
   return infix.top();
}
int main() {
   string postfix = "1+((2+3)/(2*4))";
   cout<<"The infix conversion of the postfix expression '"<<postfix<<"' is : ";
   cout<<infixConversion(postfix);
   return 0;
}
