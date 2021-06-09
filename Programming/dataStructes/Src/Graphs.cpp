/*


*/

#if 0

#include<iostream>

using namespace std;

#define MAX_SIZE 10

#if 0 // In c langauage 

struct Edge
{
	int startVertex; //char* startVertex;
	int endVertex;   //char* endVertex;
	int weight;
};

#endif

#if 1 // In c++ language 

class Edge
{
	int startVertex;   //string startVertex;
	int endVertex;	   //string endVertex;
	int weight;
};


string VertexList[MAX_SIZE];	
struct Edge EdgeList[MAX_SIZE];


#endif


// adjecency matrix stored as a adjacenecy list 
struct Node
{
	int data;
	struct Node* next;
};

struct Node* A[8];











int main()
{
	return 0;
}











#endif
