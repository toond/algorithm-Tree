#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include <conio.h>

int main(void)
{
	printf("Hello World\n");

	Node* root = makeTree();
	Node* find = NULL;
	preorder(root);
	find = insertLeftNode(findNode(root, 300), createNode(350));
	find = insertRightNode(findNode(root, 300), createNode(450));
	preorder(root);

}