#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node* next;
	node* pre;
	
	node* head;
	node(){
		head=NULL;
	}
	
	void insert_at_firstDLL(int n)
	{
		if(head==NULL)
		{
			head=new node();
			head->data=n;
			head->next=NULL;
			head->pre=NULL;
		}
		else
		{
			node* newnod=new node;
			newnod->data=n;
			newnod->next=head;
			newnod->pre=NULL;
			head->pre=newnod;
			head=newnod;
		}
		
		
	}
	
	
	
	void insert_at_anyDLL(int pos,int n)
	{
		if(head==NULL)
		{
			head=new node();
			head->data=n;
			head->next=NULL;
			head->pre=NULL;
		}
		else
		{
			node* temp;
			temp=head;
			while(temp->data!=pos)
			{
				temp=temp->next;
			}
			
			
			
			node* newnod=new node;
			newnod->data=n;
			newnod->next=temp->next;
			newnod->pre=temp;
			temp->next=newnod;
			
			if (newnod->next != NULL) {
            newnod->next->pre = newnod;
        }

	
		}
		
		
	}
	void display()
	{
		node* temp;
		temp=head;
	
	if(temp==NULL)
	{
		cout<<"DLL is empty";
	}
	else
	{
		
		while(temp!=NULL)
		{
			cout<<temp->data<<"<->";
			temp=temp->next;
		}
		cout<<"NULL"<<endl;
		
	}
}
 void rev_display() {
        node* temp; 
		temp=head;
        if (temp == NULL) {
            cout << "DLL is empty" << endl;
        } else {
            while (temp->next != NULL) {
                temp = temp->next;
            }
            

            while (temp->pre!= NULL) {
                cout << temp->data << "<->";
                temp = temp->pre;
            }
            cout <<temp->data<<" NULL "<< endl;
        }
    }

};

int main(){
	
	node n;
	int size;
	char cho;
	int q;
	int pos;
	
	cout<<"Enter how any data do you want to enter at start of D-link list :";
	            cin>>size;
	           for(int i=1;i<=size;i++){
	           cout<<"Enter data "<<i<<":";
	           cin>>q;
               n.insert_at_firstDLL(q);
                  
				     }
		 cout<<"AT start DLL ORG:-";
         n.display();

	do {
        
                cout<<"Enter how any data do you want to enter at any point of D-link list :";
	            cin>>size;
	           for(int i=1;i<=size;i++){
	           cout<<"Enter postion";
	           cin>>pos;
	           cout<<"Enter data "<<i<<":";
	           cin>>q;
               n.insert_at_anyDLL(pos,q);
                  
				     }
			 cout<<"--------------"<<endl;
		cout<<"Any-Point DLL ORG:-";
         n.display();
				     
        cout<<"DLL REV:-";
        //  n.display();
         n.rev_display();

        cout << "Do you want to enter more data (Y/N)? ";
        cin >> cho;
    } while (cho == 'Y' || cho == 'y');
return 0;
}

