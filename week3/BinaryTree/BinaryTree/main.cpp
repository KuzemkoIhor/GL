#include "H.h"

//=========Definition of Binary tree node's===========
struct BinTreeNode {

	int data;
	BinTreeNode* left;
	BinTreeNode* right;
	BinTreeNode* root;
};
//====================================================

//===============Global values========================
BinTreeNode* temp=NULL;
int height=0;
int amount=0;

//===================Functions========================
void Add(int data,BinTreeNode *root,char side);
int PreoderPrint(BinTreeNode *root);
void NullBrenchs(BinTreeNode *x);
void NullAll(BinTreeNode *x);
void DeleteTree(BinTreeNode *root);
void AddSort(int data,BinTreeNode* root);
void MaxElemInSortTree(BinTreeNode *x);
void MinElemInSortTree(BinTreeNode *x);
//====================================================


//====================MAIN=============================
void main()
{

	int t=0;
	int add=0;
	cout << "Enter data of root node "<< endl;
	cin >> t;
	BinTreeNode* root=new BinTreeNode;
	root->data=t;
	NullAll(root);

	bool b=true;
	
	while(b)
	{
		cout <<endl <<  "Enter number of task "  << endl<< "(1-add element, 2-print tree, 3-find MAX and MIN data, 4-clean console, 5-exit)\n" << endl;
		cin>>t;
		switch (t) {
			case 1:
				cout << "\nEnter int number to add the tree" <<endl;
				cin>>add;
				AddSort(add,root);
				break;
			case 2:
				PreoderPrint(root);
				height=height-1;
				cout << endl << "height of this tre is: " << height << endl;
				cout << "Amount elem in tree: " << amount << endl;
				break;
			case 3:
				MaxElemInSortTree(root);
				MinElemInSortTree(root);
				break;
			case 4:
				system("cls");
				break;
			case 5:
				b=false;
				break;

		}
	}

	cout <<endl <<  "\n\nDelete Tree using postorder methods" << endl;
	DeleteTree(root);
	
}

//===========================================================
/*Add new element with:
data - data in node
root - node after which input new node
side - choose: 'l'(left) or 'r'(right) brench of root 
*/
void Add(int data,BinTreeNode *root,char side)
{
	BinTreeNode* rez=new BinTreeNode;
	NullBrenchs(rez);
	rez->data=data;
	rez->root=root;

	if(side=='r')
	{
		if(root->right!=NULL)	{	rez->right=root->right;	}
		root->right=rez;
	}

	if(side=='l')
	{
		if(root->left!=NULL){	rez->left=root->left;	}
		root->left=rez;
	}
}

//==============================================================

//===============Make Sort Binary Tree==========================
//data - input int in tree with root - root

void AddSort(int data,BinTreeNode* root)
{
	if(root!=NULL)
	{
		if(root->data==data)
		{
			cout << "Binary Tree have this element!" << endl;
		}
		if(root->data>data)
		{
			if(root->left!=NULL) {
				temp=root->left;
				AddSort(data,temp);
			}
			else 
			{	Add(data,root,'l');	}
		}
		if(root->data<data)
		{
			if(root->right!=NULL)	{
				temp=root->right;
				AddSort(data,temp);
			}
			else
			{	Add(data,root,'r');	}
		}
	}
}

int tempdepth=0;
//==================Print Binary Tree=================================
int PreoderPrint(BinTreeNode *root)
{
	
	if(root!=NULL)
	{
		tempdepth++;
		cout << endl << root->data <<endl;;// << "height  " << tempdepth<< endl <<endl;
		amount++;
		
		if(root->left!=NULL)
		{
			temp=root->left;
			cout << "left" ;
			PreoderPrint(temp);
		}
		if(root->right!=NULL)
		{
			temp=root->right;
			cout << "right";
			PreoderPrint(temp);
		}
		

		if(height<tempdepth)
		{
			height=tempdepth;
		}
		cout << "back  ";
		tempdepth--;
	}
	return 0;
}

//==========Delete ALL TREE's nodes using postorder=========== 
void DeleteTree(BinTreeNode *root)
{
	if(root!=NULL)
	{
		if(root->left!=NULL)
		{
			temp=root->left;
			DeleteTree(temp);
			temp->left=NULL;
		}
		if(root->right!=NULL)
		{
			temp=root->right;
			DeleteTree(temp);
			temp->right=NULL;
		}
		if((root->left==NULL)&&(root->right==NULL))
		{
			cout << root->data << endl;
			temp=root->root;
			delete root;
		}
	}
}

//Set left and right brench's NULL
void NullBrenchs(BinTreeNode *x)
{
	x->left=NULL;
	x->right=NULL;
}

//Set left,right and root pointers NULL
void NullAll(BinTreeNode *x)
{
	x->root=NULL;
	NullBrenchs(x);
}

//==============Find max elem in tree=========================
void MaxElemInSortTree(BinTreeNode *x)
{
	if(x->right!=NULL)
	{
		temp=x->right;
		MaxElemInSortTree(temp);
	}
	else 
	{
		cout << "Max element in tree is: " << x->data << endl;
	}

}


//=============Find min element in Tree============================== 
void MinElemInSortTree(BinTreeNode *x)
{
	if(x->left!=NULL)
	{
		temp=x->left;
		MinElemInSortTree(temp);
	}
	else 
	{
		cout << "Min element in tree is: " << x->data << endl;
	}
}


//================================================================


//=============Delete Elem from Tree==============================
void DeleteElem(int data,BinTreeNode* root)
{

}