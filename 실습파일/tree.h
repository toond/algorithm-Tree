#pragma once

typedef struct node {
	int value;
	struct node * left;
	struct node * right;
}Node;

extern Node* makeTree();
extern void preorder(Node* root);
extern void inorder(Node* root);
extern void postorder(Node* root);
extern Node* findNode(Node* root, int value);
extern Node* createNode(int val);
extern Node* insertLeftNode(Node* where, Node* new_node);
extern Node* insertRightNode(Node* where, Node* new_node);
