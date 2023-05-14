#include <stdio.h>
#include <stdlib.h>
#define INFN 9203939393

typedef struct Nodeinfo {
	int id;
	char *name;
}Node;

void main()
{
	// const char *nodename[4] = { "n0", "n1", "n2", "n3" }; //

	const Node nodeSet[4] = { {2332, "n0"}, {9993, "n1"}, {332, "n2"}, {234, "n3"} };
	int G[4][4] = { {0, 3, INFN, INFN },
		{INFN, 0, 4, INFN},
		{INFN, INFN, 0, 5},
		{INFN, INFN, 2, 0}
	};
}
typedef struct _Bnode {
	int id;
	Bnode *left;
	Bnode *right;
}Bnode;
// 반환 : 초기화된 이진 트리의 루트노드
Bnode *initTree()
{
	Bnode *b0 = (Bnode*)malloc(sizeof(Bnode));
	Bnode *b1 = (Bnode*)malloc(sizeof(Bnode));
	Bnode *b2 = (Bnode*)malloc(sizeof(Bnode));
	Bnode *b3 = (Bnode*)malloc(sizeof(Bnode));
	Bnode *b4 = (Bnode*)malloc(sizeof(Bnode));

	b0->left = b1;
	b1->right = b2;
	b2->left = b3;
	b3->right = b4;

	return b0;
}