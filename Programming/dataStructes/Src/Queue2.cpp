/* Queue - Circular Array implementation in C++
CODE WRITTEN JUST FOR THE PRACTICE 
EXACTLY SAME CODE AS IT IS IN QUEUE.CPP

*/



#if 0


#include<iostream>

using namespace std;

#define MAX_SIZE 101

class Queue
{
private:
	int A[MAX_SIZE];
	int front, rear;
public:
	Queue() { front = -1; rear = -1; }

	bool isEmpty()
	{
		return (front == -1 && rear == -1);
	}


	bool isFull()
	{
		return (rear + 1) % MAX_SIZE == front ? true : false;
	}

	void Enqueue(int x)
	{
		cout << "Enqueueing: " << x << endl;
		if (isFull())
		{
			cout << "Error Queue is full" << endl;
			return;
		}
		
		if (isEmpty())
		{
			front = rear = 0;
		}
		else
		{
			rear = (rear + 1) % MAX_SIZE;
		}
		A[rear] = x;

	}


	void deQueue()
	{
		cout << "dequeuing :" << endl;
		if (isEmpty())
		{
			cout << "Error the queue is empty " << endl;
			return;
		}
		else if (front == rear)
		{
			rear = front = -1;
		}
		else
		{
			front = (front + 1) % MAX_SIZE;
		}
	}

	int Front()
	{
		if (front == -1)
		{
			cout << "cannot return from the empty queue " << endl;
		}
		return A[front];
	}

	void Print()
	{
		int count = (rear + MAX_SIZE - front) % MAX_SIZE + 1;
		cout << "Queue" << endl;

		for (int i = 0; i < count; i++)
		{
			int index = (front + 1) % MAX_SIZE;
			cout << A[index]<<" ";
		}
		cout<< "\n\n";
	}


};




int main()
{
	Queue Q; // creating an instance of Queue. 
	Q.Enqueue(2);  Q.Print();
	Q.Enqueue(4);  Q.Print();
	Q.Enqueue(6);  Q.Print();
	Q.deQueue();	  Q.Print();
	Q.Enqueue(8);  Q.Print();
	return 0;
}











#endif