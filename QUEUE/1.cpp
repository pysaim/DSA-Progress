#include<iostream>
using namespace std;
int queue[50],n=5,front=-1,rear=-1;
void insert()
{
	int val;
	if(rear==n-1){
		cout<<"Queue Overflow"<<endl;
	}
	else
	{
	    if(front==-1 )
		{
			front=0;
		    
		}
			
			cout<<"Enter data in queue :";
			cin>>val;
			rear++;
			queue[rear]=val;
		
		   
		
    }
	
}
void deletion()
{
	if(front==-1 || )
	{
		cout<<"Queue is underflow"<<endl;
		
	}
	
	else
	{
		cout<<"Element deleted from queue is:"<<queue[front]<<endl;
		if (front == rear) {
            
            front = rear = -1;
        } else {
            front++;
        }
	}
}
void display()
{
	if(front==-1)
	{
		cout<<"Queue is empty"<<endl;
		
	}
	else
	{
		cout<<"Queue elements are:";
		for(int i=front;i<=rear;i++)
		{
			cout<<queue[i]<<",";
			
		}
		cout<<endl;
	}
}


int main(){
	 int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   
   do{
   	cout<<"Enter your choice : "<<endl;
      cin>>ch;
      
      if(ch==1)
      {
      	insert();
	  }
	  else if(ch==2)
      {
      	deletion();
	  }
	  else if(ch==3)
      {
      	display();
	  }
	  else if(ch==4)
      {
      	cout<<"exit"<<endl;
	  }
	  else
	  {
	  	cout<<"invalid choise!"<<endl;
	  }
   }while(ch!=4);
   return 0;
}
