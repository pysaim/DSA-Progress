#include<iostream>
using namespace std;
int stack[50],top=-1;


void push(int len,int val)
{
	if(top>=len-1)
	{
	
	cout<<"Stack OverFlow"<<endl;
	    
	}
	else
	{
		top++;
		stack[top]=val;
	}
	
}
void pop()
{
	if(top<=-1)
	{
		cout<<"Stack underflow"<<endl;
	}
	else
	{
		cout<<"The poded element is"<<stack[top]<<endl;
		top--;
	}
}

void display()
{
	if(top>=0)
	{
		cout<<"Stack Elements are :";
		for(int i=top;i>=0;i--)
		{
			cout<<stack[i]<<" ";
// 			
			
		}
		cout<<endl;
	}
}

int main()
{
	int val,len,cho;
	char c;
	cout<<"Firstly Enter how much length of stack :";
	cin>>len;
	
	cout<<"Enter 1 for push data in stack"<<endl;
	cout<<"Enter 2 for pop data in stack"<<endl;
	cout<<"Enter 3 for display data in stack"<<endl;
	
do{

	
	
	
	cout<<"Enter your choise:";
	cin>>cho;
	
if(cho==1)
	{
	
	for(int i=0;i<len;i++)
	{
		
    
	cout<<"Enter stack value at"<<i<<": ";
	cin>>val;
	push(len,val);

      }
}
else if(cho==2)
{
	pop();
}
else if(cho==3)
{

display();

}
else
{
	cout<<"invalid command! Please weite valid command";
}

	

cout<<"Do you want to choose again then Press(Y/y) ";
cin>>c;	
}while(c=='y'||c=='Y');
return 0;

}

