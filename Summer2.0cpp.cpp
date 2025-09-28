//================================================================================
//#include<iostream>
//using namespace std;
//
//class Node{
//	public:
//		int data;
//		Node *next;
//		Node(int data){
//			this -> data = data;
//			next = NULL;
//		}
//};
//
//class Link{
//	public:
//		Node *head;
//		Node *tail;
//		Link(){
//			head=tail=NULL;
//		}
//		
//		void push_front(int data){
//			Node *newnode = new Node(data);
//			if(head==NULL){
//				head=tail=newnode;
//			}else{
//				(*newnode).next=head;
//				head=newnode;
//			}
//		}
//		
//		void push_back(int data){
//			Node *newnode=new Node(data);
//			if(head==NULL){
//				head=tail=newnode;
//			}
//			else{
//				Node* temp=head;
//    			tail->next = newnode;
//    			tail = newnode;
//            }
//
//			}
//
//		
//		void Middle(){
//			Node *fast=head;
//			Node *slow=head;
//			while(fast != NULL && fast->next!=NULL){
//				slow->next;
//				fast->next->next;
//			}
//			return slow;
//		}
//		
//		void reverse(){
//			Node * curr=head;
//			Node * pre=NULL;
//			Node * next=NULL;
//			while(curr !=NULL){
//				next= curr->next;
//				curr->next= pre;
//				
//				pre=curr;
//				curr=next;
//			}
//			head= pre;
//		}
//	
//};
//
//int main(){
//	Link l;
//	l.push_front(7);
//	l.push_front(10);
//	l.push_front(3);
//	l.push_front(66);
//	
//	l.push_back(334);
//	l.pop_front();
//	l.pop_back();
//	
//	l.insert(23,2);
//	l.dis();
//	
//}

//===-----00999============-----=-=------
//  void push_front(int data){
//	Node *newnode=new Node(data);
//	if(head==NULL){
//		head=tail=NULL;
//	}else{
//		newnode->next= head;
//		head=newnode;
//	}
//} 
//
//  void push_back(int data){
//  	Node *newnode= new Node(data);
//  	if(head==NULL){
//  		head=tail=newnode;
//	  }else{
//	  		tail->next=tail;
//	  		tail=newnode;
//		  }
//	  }
//	  
//	void pop_front(){
//		Node *temp=head;
//		head=head->next;
//		temp->next=NULL;
//		delete temp;
//	}

//==========================================================================
//#include<iostream>
//using namespace std;
//
//class Node{
//	public:
//	int data;
//	Node *left;
//	Node *right;
//	Node(int data){
//		this->data= data;
//		left=right=NULL;
//	}
//};
//
//	static int ind=-1;
//	Node *Built(int pre[]){
//	ind++;
//		if(pre[ind]==-1){
//		return NULL;
//	}
//	
//	Node *root =new Node(pre[ind]);	
//	root->left=Built(pre);
//	root->right =Built(pre);	
//	return root;
//}
//void preorder(Node* root) {
//    if (root == NULL) return;
//    cout << root->data << " ";
//    preorder(root->left);
//    preorder(root->right);
//}
//	void inorder(Node *root){
//			if(root==NULL){
//			return ;
//		}
//		
//		inorder(root->left);
//		cout<<root->data<<" ";
//		inorder(root->right);
//	}
//	
//	void postorder(Node *root){
//			if(root==NULL){
//			return ;
//		}
//		
//		postorder(root->left);
//		postorder(root->right);
//		cout<<root->data<<" ";
//	}
//
//
//int main(){
//	int pre[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//
//    Node* root = Built(pre);
//
//    cout << "Preorder: ";
//    preorder(root);
//    cout << "\nInorder: ";
//    inorder(root);
//    cout << "\nPostorder: ";
//    postorder(root);
//    cout << endl;
//
//    return 0;
//}
//==============================================================----------------====================
//#include<iostream>
//using namespace std;
//
//class Node{
//	public:
//		int data;
//		Node * left;
//		Node * right;
//		
//		Node(int data){
//			this->data = data;
//			left=right=NULL;
//		}
//};
//
//	static int idx=-1;
//	
//	Node * built(int pre[]){
//		idx++;
//		Node *root= new Node(pre[idx]);
//		
//		if(pre[idx]==-1){
//			return NULL;
//		}
//		
//		cout<<root->data<<" ";
//		root->left= built(pre);
//		root->right= built(pre);
//		
//		return root;
//	}
//	
//	void preorder (Node *root){
//		if(root==NULL){
//			return;
//		}
//		
//		cout<<root->data<<" ";
//		 preorder(root->left);
//		preorder(root ->right);
//	}
//	
//	void inorder (Node *root){
//		if(root==NULL){
//			return;
//		}
//		inorder(root->left);	
//		cout<<root->data<<" ";
//		inorder(root ->right);
//	}
//	
//	void postorder (Node *root){
//		if(root==NULL){
//			return;
//		}
//		postorder(root->left);	
//		postorder(root ->right);
//		cout<<root->data<<" ";
//	}
//	
//int main(){
//	int pre[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//
//    Node* root = built(pre);
//    cout<<"\nPre-order: ";
//    preorder(root);
//    cout<<"\nIn-order: ";
//    inorder(root);
//    cout<<"\nPost-order: ";
//    postorder(root);
//}
	
//----------============================-----------------------------===================
//#include<iostream>
//using namespace std;
//
//class Node{
//	public:
//	int data;
//	Node *next;
//	
//	Node(int data){
//		this->data=data;
//		next=NULL;
//	}
//};	
//
//class List{
//	public:
//	Node *head;
//	Node* tail;
//	List(){
//		head=tail=NULL;
//	}
//	
//	void push_front(int data){
//		Node *newnode = new Node(data);
//		if(head ==NULL){
//		
//		head=tail=newnode;
//	}else{ 
//	    newnode->next=head;
//	    head=newnode;
//	}
//}
//
//	void dis(){
//		Node *temp=head;
//		while(temp!=NULL){
//			cout<<temp->data<<" -> ";
//			temp=temp->next;
//		}
//	}
//};
//	
//int main(){
//	List l;
//	
//	l.push_front(23);
//	l.push_front(99);
//	l.push_front(1000);
//	l.push_front(46);
//	
//	l.dis();
//}
//====================''Linked List''========================================
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node * next;
		Node(int data){
			this-> data=data;
			next =NULL;
		}
};

class link{
	public:
		Node *head;
		Node *tail;
		link(){
			head=tail=NULL;
		}
	
	void push_front(int data){
		Node *newnode =new Node(data);
		if(head==NULL){
		head=tail=newnode;
		}else{
		newnode->next =head;
		head=newnode; 
	}
}
	
	void push_back(int data){
		Node *newnode= new Node(data);
		if(head==NULL) head=tail=newnode;
		tail-> next=newnode;
		tail=newnode;
	}
	
	void pop_front(){
		Node *temp=head;
		if(temp==NULL){
			return;
		}else{
			head=head-> next;
			temp->next=NULL;
			delete temp;
		}
	}
	
	void pop_back(){
		Node *temp=head;
		
		while(temp->next!=tail){
			temp=temp->next;
		}
		delete tail;
		tail=temp;
		tail->next=NULL;

	}
	
	Node *middle(){
		Node *fast=head;
		Node *slow=head;
		
		while(fast!=NULL && fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
		}
		return slow;
	}
	
	Node *reverse(){
		Node *pre=NULL;
		Node *next=NULL;
		Node *cur=head;

		while(cur!=NULL){
			next=cur->next;
			cur->next=pre;
			
			pre=cur;
			cur=next;
		}
		head=pre;
		return pre;
	}
	
//	Node* reverse(){
//    Node *pre = NULL;
//    Node *next = NULL;
//    Node *cur = head;
//
//    tail = head; // Original head becomes new tail
//
//    while(cur != NULL){
//        next = cur->next;
//        cur->next = pre;
//        pre = cur;
//        cur = next;
//    }
//
//    head = pre; // Update head to new front
//    return head;
//}

	
	void dis(){
		Node *temp=head;
		while(temp!=NULL){
			cout<<temp->data<<" -> ";
			temp=temp->next;
		}
	}
};

int main(){
	link l;
	
	l.push_front(24);
	l.push_front(3);
	l.push_front(66);
	l.push_front(73);
	l.push_front(56);
	
	l.push_back(499);
	
//	l.pop_back();

	Node* mid = l.middle();
	if(mid != NULL)
    cout << "Middle element: " << mid->data << endl;

	l.dis();
	cout<<"\n";
	l.reverse();
	l.dis();
	
}
