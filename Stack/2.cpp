#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		
		node* top=NULL;
		
	void push(int n)
	{
	
	
		node* newnod=new node();
		newnod->data=n;
		newnod->next=top;
		top=newnod;
	
}

void pop()
{
	if(top==NULL)
	{
		cout<<"Stack Underflow";
		
	}
	else
	{
		cout<<"The poped element is"<<top->data<<endl;
		top=top->next;
	}
}

void display()
{
	 node* ptr;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != NULL) 
	  {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}

};


int main(){
	
	node n;
	int val,len,cho;
	char c;
// 	cout<<"Firstly Enter how much length of stack :";
// 	cin>>len;
	
	cout<<"Enter 1 for push data in stack"<<endl;
	cout<<"Enter 2 for pop data in stack"<<endl;
	cout<<"Enter 3 for display data in stack"<<endl;
	
do{

	
	
	
	cout<<"Enter your choise:";
	cin>>cho;
	
if(cho==1)
	{
	
	
	cout<<"Enter stack value at" <<": ";
	cin>>val;
	n.push(val);

      
}
else if(cho==2)
{
	n.pop();
}
else if(cho==3)
{

n.display();

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


