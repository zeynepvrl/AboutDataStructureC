#include<stdio.h>
#include<stdlib.h>
/*struct node{
	int data;
	struct node*next;
};
struct node*top=NULL;     //stack yapisinda head yani ilk deger sürekli degisecegi için her zaman ilk degeri güncelleyecegimiz bir top degeri olusturduk.
void push(int value){
	if(top==NULL){
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	top=newnode;
   }
   else{
   	struct node*newnode=(struct node*)malloc(sizeof(struct node));
   	newnode->data=value;
   	newnode ->next=top;
   	top=newnode;
   }
}
int pop(){
	if(top==NULL){
		printf("stack is empty");
		return 1;
	}
	struct node*temp=top;
	top=top->next;
	free(temp);
	
}
int print(){
	if(top==NULL){
		printf("stack is empty \n");
		return 1;
	}
	struct node* index=top;
	while(index!=NULL){
		printf("%d\n", index->data);
		index=index->next;
	}
}
int main(){
	push(5);
	push(6);
	push(9);
	print();
	pop();
	print();
}*/

struct node {
	int data;
	struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
int addnodeend(int value) {
	if (head == NULL) {
		struct node* newnode = (struct node*)malloc(sizeof(struct node));
		newnode->data = value;
		newnode->newxt = NULL;
		head = tail = newnode;
	}
	else {
		struct node* newnode = (struct node*)malloc(sizeof(struct node));
		newnode->data = value;
		newnode->next = NULL;
		tail->next = newnode;
		tail = newnode;
	}
	int addnodehead(int value) {
		if (head == NULL) {
			struct node* newnode = (struct node*)malloc(sizeof(struct node));
			newnode->data = value;
			newnode->next = NULL;
			head = tail = newnode;
		}
		else {
			struct node* newnode = (struct node*)malloc(sizeof(struct node));
			newnıde->data = value;
			newnnode->next = head;
			head = newnode;
		}
		int print() {
			struct node* index = head;
			while (index != NULL) {
				printf("%d\n", index->data);
				index = index->next;
			}
			int main() {
				addnodehead(10);
				addnodehead(11);
				addnodehead(12);
				addnodeend(90);
				addnodehead(33);
			}
		}





