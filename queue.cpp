#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*front=NULL;
struct node*rear=NULL;
int enqueue(int value){
	if(front==NULL){
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->next=NULL;
		rear->next=newnode;
		front=rear=newnode;

	}
	else{
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->next=NULL;
		rear->next=newnode;
		rear=newnode;
	}
}
int dequeue(){
	if(front==NULL){
		printf("queue is empty \n");
		return 1;
	}
	else{
		struct node* temp=front;
		front=front->next;
		free(temp);	}
}
int print(){
	if(front==NULL){
		printf("queue is empty \n");
		return 1;
	}
	else {
		struct node* index=front;
		while(index!=NULL){
			printf("%d\n",index->data);
			index=index->next;
		}
		return 1;
	}
}

int main(){
	enqueue(7);
	enqueue(8);
	enqueue(9);
	print();
	dequeue();
	print();
}
