#include<bits/stdc++.h>
using namespace std;

typedef struct BNode{
	int data;
    struct BNode* lchild;
	struct BNode* rchild;
}BNode;

void prenode(BNode* T){
	if(T==NULL)   return ;
	else{
		cout<<T->data ;
		prenode(T->lchild );
		prenode(T->rchild );
	}
}
int main(){
	BNode* node5=new BNode;
	node5->data =5;
	node5->lchild =NULL;
	node5->rchild =NULL;
	
	BNode* node4=new BNode;
	node4->data =4;
	node4->lchild =NULL;
	node4->rchild =NULL;
	
	BNode* node3=new BNode;
	node3->data =3;
	node3->lchild =node5;
	node3->rchild =node4;
	
	BNode* node2=new BNode;
	node2->data =2;
	node2->lchild =NULL;
	node2->rchild =NULL;
	
	BNode* node1=new BNode;
	node1->data =1;
	node1->lchild =node3;
	node1->rchild =node2;
	
	prenode(node1);
	return 0;
}
