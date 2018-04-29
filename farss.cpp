#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct Node{
	int data;
	 Node* next;
};
struct Node* head;
void Insert(int x){
	Node* temp=(Node*)malloc(sizeof(Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print(){
	 Node* temp=head;
	cout<<"List is =";
	while(temp != NULL){
		cout<<"  "<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
}
void Delete(int n){
     struct	Node* temp1=head;
	  if(n==1){
		head=temp1->next;
		free(temp1);
		return;
	}
	
	for(int i=0;i<n-2;i++){
		temp1=temp1->next;}
		struct Node* temp2=temp1->next;
		temp1->next=temp2->next;
		free(temp2);
}
int main(){
	head=NULL;
	int size,j,k;
	char ch,choice;
	
	do{
	
	cout<<"\t\tMAIN MENU\t\t"<<endl;
	cout<<"1.Create Link list"<<endl;
	cout<<"2.Traversing Link list"<<endl;
	cout<<"3.Deletion In Link List"<<endl;
	cout<<"enter your choice=";
	cin>>choice;
	switch(choice){
		case '1':
			{
				cout<<"How many Numbers you want to enter=";
	            cin>>size;
				for(j=0;j<size;j++){
				cout<<"enter the number=";
				cin>>k;
				Insert(k);
			}}
			break;
		case '2':
			{
					print();
			}
			break;
		case '3':
			{
				int x;
				cout<<"enter the node you want to delete=";
				cin>>x;
				Delete(x);
			}
			break;
			default:
				cout<<"invalid choice !!!!!!!!"<<endl;
	}
	cout<<"Do you want to continue Y/N=";
	cin>>ch;
}
while((ch=='Y')||(ch=='y'));
getch();
return 0;
}
