#include<iostream>
using namespace std;
#include "BinaryTreeNode class.h"
#include<queue>
#include <cstdlib>
#include<bits/stdc++.h>
/*
input
     1  
    / \
   2   3
  /    /\
 4 	  5  6
 \
  7
  output for printing levels:
  1
  2 3
  4 5 6 
  7
  
  the approach is a bit complex but highly optimized and useful
  
  Algorithm:
  if root is null the simply return 
  
  Take a queue which can store the nodes of tree and push root and NULL initially.
  Run a loop till queue is not empty 
  Create a node of tree named front which stores the front of the queue.
  Now the front can be either NULL or it cannot be NULL i.e it has a node 
  (NULL indicates that a new level has been reached so as soon as u see a NULL print new line)
  	if front is NULL then we perform the following:
  												print a new line 
												push a null
												pop
												check 
													if only NULL is present then break from the loop 
													else
													continue
	else
		if right and left exist, we push(in the queue) left and right subpart of the tree 
		
	
	now we print the value stored in front
	and pop a value 
	if at any point the queue is empty then simply break from te loop
		
*/
void print_levels(BinaryTreeNode<int>*root){
	if(root==NULL)
		return;
	queue<BinaryTreeNode<int>*>q;
	q.push(root);
	q.push(NULL);
	while(q.size()!=0){
		BinaryTreeNode<int>*front=q.front();
		if(front!=NULL){
			if(front->left)
				q.push(front->left);
			if(front->right)
				q.push(front->right);
		}
		else{
			cout<<endl;
			q.push(NULL);
			q.pop();
			if(q.size()==1)
				break;
			continue;
		}
		
		cout<<front->data<<" ";
		q.pop();
		if(q.size()==0)
			break;
	}	
}
/*

     1
    / \
   2   3
  /     \
 4 	     5
simple recursive function (obviously not optimized), 
if root is null we simply return with no value
else
	print root's data 
	and check if left and right of the tree exist
		if yes then print the left and right value 
	now call the recursive function for letf part of teh tree and right part of the tree
	
*/
void print_tree(BinaryTreeNode<int>*root){
	if(root==NULL)
		return;
	cout<<root->data<<" : ";
	if(root->left)
		cout<<" L: "<<root->left->data;
	if(root->right)
		cout<<" R: "<<root->right->data;
	cout<<endl;
	print_tree(root->left);
	print_tree(root->right);
	
	
}
/*
 quite bad and confusing method 
 we input a root and then input it's left child and then take input of the left child.
 At any step when input is -1 we goback i.e if root data is -1 then we inout the right child
 If right child's data is also -1 then we take input of the parent's right child 
 
  
     1          
    / \
   2   3
  /     \
 4 	     5
 to generate the above tree input is :1 2 4 -1 -1 -1 3 -1 5 -1 -1
*/
BinaryTreeNode<int>*take_input(){
	
	int RootData;
	cout<<"enter root data "<<endl;
	cin>>RootData;
	if(RootData==-1){
		return NULL;
	}
	BinaryTreeNode<int>*root=new BinaryTreeNode<int>(RootData);
	BinaryTreeNode<int>*leftChild=take_input();
	BinaryTreeNode<int>*rightChild=take_input();
	root->left=leftChild;
	root->right=rightChild;
	
	return root;
}
int main(){
	BinaryTreeNode<int>*root=take_input();
	print_tree(root);
	print_levels(root);
}
