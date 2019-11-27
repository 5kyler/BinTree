#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"

#include "bintreetravesalrec.h"

BinTree* createExampleBinTree();

int main(int argc, char *argv[])
{
	BinTree *pBinTree = NULL;
	pBinTree = createExampleBinTree();
	if (pBinTree != NULL) {
		printf("Preorder Recursive Traversal\n");
		preorderTraversalRecursiveBinTree(pBinTree);

		printf("\nInorder Recursive Traversal\n");
		inorderTraversalRecursiveBinTree(pBinTree);

		printf("\nPostorder Recursive Traversal\n");
		postorderTraversalRecursiveBinTree(pBinTree);
		printf("\n");
		deleteBinTree(pBinTree);
	}

	return 0;
}

BinTree* createExampleBinTree() {
	BinTree* pReturn = NULL;
	BinTreeNode *pNodeA = NULL, *pNodeB = NULL, *pNodeC = NULL;
	BinTreeNode *pNodeD = NULL, *pNodeE = NULL, *pNodeF = NULL;
	BinTreeNode *pNodeG = NULL, *pNodeH = NULL, *pNodeI = NULL;
	BinTreeNode *pNodeJ = NULL, *pNodeL = NULL, *pNodeK = NULL;
	BinTreeNode *pNodeM = NULL;
	BinTreeNode node = { 0, };

	node.data = '+';
	pReturn = makeBinTree(node);
	if (pReturn != NULL) {
		pNodeA = getRootNodeBT(pReturn);
		node.data = '*';
		pNodeB = insertLeftChildNodeBT(pNodeA, node);
		node.data = '*';
		pNodeC = insertRightChildNodeBT(pNodeA, node);
		if (pNodeB != NULL) {
			node.data = 'A';
			pNodeD = insertLeftChildNodeBT(pNodeB, node);
			node.data = '-';
			pNodeE = insertRightChildNodeBT(pNodeB, node);
		}
		if (pNodeC != NULL) {
			node.data = 'E';
			pNodeF = insertLeftChildNodeBT(pNodeC, node);
			node.data = '+';
			pNodeG = insertRightChildNodeBT(pNodeC, node);
		}

		if (pNodeE != NULL) {
			node.data = '*';
			pNodeH = insertLeftChildNodeBT(pNodeE, node);
			node.data = 'D';
			pNodeI = insertRightChildNodeBT(pNodeE, node);
		}
		
		if (pNodeG != NULL) {
			node.data = 'F';
			pNodeJ = insertLeftChildNodeBT(pNodeG, node);
			node.data = 'G';
			pNodeK = insertRightChildNodeBT(pNodeG, node);
		}

		if (pNodeH != NULL) {
			node.data = 'B';
			pNodeL = insertLeftChildNodeBT(pNodeH, node);
			node.data = 'C';
			pNodeM = insertRightChildNodeBT(pNodeH, node);
		}
	}
	return pReturn;
}