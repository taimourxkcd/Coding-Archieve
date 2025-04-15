/*
Implementation of bst
insert element into bst
find min and max element in the bst both iteratively and recursively 
search element in the bst
find the height of the bst 
*/

#if 0

#include<iostream>
#include<queue>

using namespace std;

struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;
 };




BstNode* GetNewNode(int data)
{
	BstNode* newNode = new BstNode(); // In C: BstNode* newNode = (BstNode*)malloc(sizeof(BstNode));
	newNode->data = data;   // In C: (*newNode).data = data;  
	newNode->left = newNode->right = NULL;
	return newNode;
}

#if 0  // when the address of the root is passed 
BstNode* Insert(BstNode** rootPtr, int data)
{
	if (*rootPtr == NULL) {	// empty tree
		*rootPtr = GetNewNode(data);
	}

}
#endif

#if 1 // when the root is passed
BstNode* Insert(BstNode* root, int data)
{
	if (root == NULL) {	// empty tree
		root = GetNewNode(data);
	}
	else if (data <= root->data) {
		root->left = Insert(root->left, data);
	}
	else {
		root->right = Insert(root->right, data);
	}
		return root;

}
#endif

bool search(BstNode* root, int data) {
	if (root == NULL) return false;
	if (root->data == data) return true;
	else if (data <= root->data) return search(root->left, data);
	else return search(root->right, data);
}

// Find function for the successor BST thing
struct BstNode* Find(BstNode* root, int data) {
	if (root == NULL) return false;
	if (root->data == data) return root;
	else if (data <= root->data) return Find(root->left, data);
	else return Find(root->right, data);
}



int FindMin(BstNode* root) {
	BstNode* current = root;

	if (root == NULL) {
		cout << "Error: Tree is empty\n";
		return -1; 
	}


	while (current->left != NULL) {  // we can also write root->left != NULL
		current = current->left;	// OR root = root->left;	
	}
	return current->data;			// OR root->data 
}

int FindMinRecursively(BstNode* root) {
	BstNode* current = root;

	if (root == NULL) {
		cout << "Error: Tree is empty\n";
		return -1; 
	}
	else if (root->left == NULL) {
		return root->data;
	}

	FindMinRecursively(root->left);
}

int FindMaxRecursively(BstNode* root) {
	BstNode* current = root;

	if (root == NULL) {
		cout << "Error: Tree is empty\n";
		return -1; 
	}
	else if (root->left == NULL) {
		return root->data;
	}

	FindMaxRecursively(root->right);
}



int FindMax(BstNode* root) {
	BstNode* current = root;

	if (root == NULL) {
		cout << "Error: Tree is empty\n";
		return -1; 
	}


	while (current->right != NULL) {  // we can also write root->left != NULL
		current = current->right;	// OR root = root->left;	
	}
	return current->data;			// OR root->data 
}


int FindHeight(struct BstNode *root) {
	if (root == NULL) return -1;
	int temp =  max(FindHeight(root->left), FindHeight(root->right)) + 1;
	return temp;
}


void LevelOrder(struct BstNode* root)
{
	if (root == NULL) return;

		queue<BstNode*> Q;

		Q.push(root);

		//while there is atleast one discoved node 
		while (!Q.empty()) {
			BstNode* current = Q.front();
			cout << current->data << " ";
			
			if (current->left != NULL) Q.push(current->left);
			if (current->right != NULL) Q.push(current->right);
			
			Q.pop(); // removing the element at the front 
		
		}
}						  


void Preorder(struct BstNode* root)
{
	if (root == NULL) return;
	cout << root->data << " ";
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(struct BstNode* root)
{
	if (root == NULL) return;
	Inorder(root->left);
	cout <<  root->data << " ";
	Inorder(root->right);
}

void Postorder(struct BstNode* root)
{
	if (root == NULL) return;
	Postorder(root->left);
	Postorder(root->right);
	cout << root->data << " ";

}


bool IsSubTreeLesser(BstNode* root, int value)
{
	if (root == NULL) return true;
	if (root->data <= value &&
		IsSubTreeLesser(root->left, root->data) &&
		IsSubTreeLesser(root->right, root->data))
		return true;
	else
		return false;
}

bool IsSubTreeGreater(BstNode* root, int value)
{
	if (root == NULL) return true;
	if (root->data <= value &&
		IsSubTreeGreater(root->left, root->data) &&
		IsSubTreeGreater(root->right, root->data))
		return true;
	else
		return false;
}


#if 0 // it is a very expensive function 
bool IsBinarySearchTree(BstNode* root)
{
	// return true if BST else return false 

	if (IsSubTreeLesser(root->left, root->data) &&
		IsSubTreeGreater(root->right, root->data) &&
		IsBinarySearchTree(root->left) &&
		IsBinarySearchTree(root->right))
		return true;
	else
		return false;
}
#endif



#if 1// it is a cheap function for identifing the BST
bool IsBinarySearchTree(BstNode* root, int minValue, int maxValue)
{
	// return true if BST else return false 
	return IsBstUtil(root, INT_MIN,INT_MAX);

}


bool IsBstUtil(BstNode* root, int minValue, int maxValue)
{
	if (root->data > minValue &&
		root->data < maxValue &&
		IsBinarySearchTree(root->left, minValue, root->data) &&
		IsBinarySearchTree(root->right, root->data, maxValue))
		return true;
	else
		return false;
}


#endif

struct BstNode* Delete(struct BstNode* root, int data)
{
	if (root == NULL) return;
	else if (data < root->data) root->left = Delete(root->left, data);
	else if (data > root->data) root->right = Delete(root->right, data);
	else // found you ... get ready to be delelted
	{
		//case 1: No child 
		if (root->left == NULL && root->right == NULL) {
			delete root;
			root = NULL;
		}

		//case 2: one child 
		else if (root->left == NULL) {
			struct BstNode* temp = root;
			root = root->right;
			delete temp;
		}
		else if (root->right == NULL) {
			struct BstNode* temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children 
		else {
			struct BstNode* temp = FindMinToDelete(root->right);
			root->data = temp->data; 
			root->right = Delete(root->right, temp->data);



		}
		return root;
	}
}

struct BstNode* FindMinToDelete(struct BstNode* root)
{
	// later implement it yourself OR 
	// look for it in the github of 
	// mycodeschool
}

// Function to find the successor 
struct BstNode* GetSuccessor(struct BstNode* root, int data)
{
	//Search the Node
	struct BstNode* current = Find(root, data);
	if (current == NULL) return; 
	//Case 1: Node has the right subtree
	if (current->right != NULL) {
		return FindMinForSuccessor(current->right);

	}
	else { // there is n right sub tree 
		struct BstNode* successor= NULL;
		struct BstNode* ancestor = root;
		while (ancestor != current) {
			if (current->data < ancestor->data) {
				successor = ancestor;	// so far this is the deepest node for which current node is in the left  
				ancestor = ancestor->left;
			}
			else {
				ancestor = ancestor->right;
			}
			return successor;
		}

	
	}
}


struct BstNode* FindMinForSuccessor(struct BstNode* root)
{
	if (root == NULL) return;
		while (root->left != NULL) root = root->left;
		return root;

}








int main()
{
	BstNode* root; // pointer to the root node 
	root = NULL;   // setting the tree as empty

#if 1 // one way to enter the data into the tree
	root = Insert(root, 7);
	root = Insert(root, 4);
	root = Insert(root, 9);
	root = Insert(root, 1);
	root = Insert(root, 6);

	cout<<IsBinarySearchTree(root,INT_MIN,INT_MAX);



#endif


#if 0 // another way to pass by passing the function
	Insert(&root, 15);
	Insert(&root, 10);
	Insert(&root, 20);
#endif



#if 0 //code for debugging purposes to test the functions 
	int	number;
	cout << "Enter the number that you want to search\n"; 
	cin >> number;
	if (search(root, number) == true) cout << "Found !!!\n";
	else cout << "Not Found !!!\n"; 

	cout << "Largest element is " << FindMaxRecursively(root) << endl;
	cout << "Smallest element is " << FindMinRecursively(root) << endl;

	cout << "height of the tree is " << FindHeight(root) << endl;
	LevelOrder(root);
	Preorder(root);
	cout << endl;
	Inorder(root);
	cout << endl;
	Postorder(root);
	cout << endl;

#endif

	return 0;
}


#endif