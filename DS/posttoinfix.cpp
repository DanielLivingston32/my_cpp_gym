#include <bits/stdc++.h>
using namespace std;
bool isOperand(int x) {
   return (x >=48 && x <=57);
}


string infixConversion(string postfix) {


	stack<string> infix;
	int n=postfix.length();
	int result[n];
	for(int i=0; i<n; i++){
		
	  result[i]=int(postfix[i]);
	   
	}
	
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
