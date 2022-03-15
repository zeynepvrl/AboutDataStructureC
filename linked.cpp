#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;
};
struct node* head =NULL;
struct node* tail =NULL;
int addnodeend(int value) {
	if (head == NULL) {
		struct node* newnode = (struct node*)malloc(sizeof(struct node));
		newnode->data = value;
		newnode->next = NULL;
		head = tail = newnode;
	}
	else {
		struct node* newnode = (struct node*)malloc(sizeof(struct node));
		newnode->data = value;
		newnode->next = NULL;
		tail->next = newnode;
		tail = newnode;
	}
}
	int addnodehead(int value)
	 {
		if (head == NULL) {
			struct node* newnode = (struct node*)malloc(sizeof(struct node));
			newnode->data = value;
			newnode->next = NULL;
			head = tail = newnode;
		}
		else {
			struct node* newnode = (struct node*)malloc(sizeof(struct node));
			newnode->data = value;
			newnode->next = head;
			head = newnode;
		}
	}
		int print() {
			struct node* index = head;
			while (index != NULL) {
				printf("%d\n", index->data);
				index = index->next;
			}
			
		}
		
	int aftergiven(int A, int value){
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=value;
		struct node*index=head;
		while(index->data!=A){
			index=index->next;
		}
		newnode->next=index->next;
		index->next=newnode;
		
		} 
	int deletefirst(){
		if(head==NULL){
			printf("List is already empty");
		}
		else{
			struct node*todelete=head;
			head=head->next;
			("Data deleted=%d\n", todelete->data);
			free(todelete);
		}
	}
	int lastnode(){
		if(head==NULL)
		{
			printf("There is no element in the list");
		}
		else{
			struct node*todellast=head;
			while(todellast->next->next!=NULL){
				todellast=todellast->next;
			}
			struct node*tofree=todellast->next;
			todellast->next=NULL;
			free(tofree);			
		}
	}
	void deleteposition(int x){
		if(head==NULL){
			printf("linked list is empty");
		}
		if(head->data==x){
			struct node* temp=head;
			head=head->next;
			free(temp);
			return ;
		}
		struct node* previous=NULL;
		struct node* lastly=NULL;
		struct node* temp=head;
		while(temp->next->data!=x){
			temp=temp->next;
		}
		if(temp->next==NULL){
			struct node* todelete=head;
			while(todelete->next->next!=NULL){
				todelete=todelete->next;
			}
			struct node* tofree=todelete->next;
			todelete->next=NULL;
			free(tofree);

		}
		previous=temp;
		lastly=temp->next->next;
		free(temp->next);
		previous->next=lastly;
		
}
		
	
	

		
	int main() {
				addnodehead(3);
				addnodehead(2);
				addnodehead(1);
				//print();
				addnodeend(4);
				addnodeend(5);
				//print();
				//aftergiven(2,1000);
				//deletefirst();
				//lastnode();
				deleteposition(1);
				print();
				
			}
