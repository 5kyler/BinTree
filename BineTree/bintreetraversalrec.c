#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"
#include "bintreetravesalrec.h"


//--------------------------------------preorder  Traversal
void preorderTraversalRecursiveBinTree(BinTree *pBinTree)
{
	if (pBinTree != NULL) {
		preorderTraversalRecursiveBinTreeNode(pBinTree->pRootNode);
	}
}

void preorderTraversalRecursiveBinTreeNode(BinTreeNode *pRootNode)
{
	if (pRootNode != NULL) {
		printf("%c ", pRootNode->data);												//V
		preorderTraversalRecursiveBinTreeNode(pRootNode->pLeftChild);				//L
		preorderTraversalRecursiveBinTreeNode(pRootNode->pRightChild);				//R
	}
}


//--------------------------------------inorder  Traversal

void inorderTraversalRecursiveBinTree(BinTree *pBinTree)
{
	if (pBinTree != NULL) {
		inorderTraversalRecursiveBinTreeNode(pBinTree->pRootNode);
	}
}

void inorderTraversalRecursiveBinTreeNode(BinTreeNode *pRootNode)
{
	if (pRootNode != NULL) {
		inorderTraversalRecursiveBinTreeNode(pRootNode->pLeftChild);				//L
		printf("%c ", pRootNode->data);												//V
		inorderTraversalRecursiveBinTreeNode(pRootNode->pRightChild);				//R
	}
}


//--------------------------------------postorder  Traversal

void postorderTraversalRecursiveBinTree(BinTree *pBinTree)
{
	if (pBinTree != NULL) {
		postorderTraversalRecursiveBinTreeNode(pBinTree->pRootNode);
	}

}

void postorderTraversalRecursiveBinTreeNode(BinTreeNode *pRootNode)
{
	if (pRootNode != NULL) {
		postorderTraversalRecursiveBinTreeNode(pRootNode->pLeftChild);				//L
		postorderTraversalRecursiveBinTreeNode(pRootNode->pRightChild);				//R
		printf("%c ", pRootNode->data);												//V

	}
}
