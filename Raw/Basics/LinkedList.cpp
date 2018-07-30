#include <iostream>
#include <conio.h>
#include <assert.h>
#include <Windows.h>

struct node
{
	int data;
	node* next;
};

struct LinkedList
{
	node* head;
	node* tail;

	LinkedList()
	{
		head = NULL;
		tail = NULL;
	}
	void createnode(int value);
	void display();
	void insert_start(int value);
	void insert_position(int pos, int value);
	void delete_first();
	void delete_last();
	void delete_position(int pos);
};

struct A 
{
	int *p;
	A() { p = new int; }
};
int mainiti()
{
	A a;
	*a.p = 10;

	std::cout << *a.p << std::endl;

	//LinkedList *linklist = new LinkedList();
	//linklist->createnode(10);
	//linklist->insert_start(5);
	//linklist->insert_start(53);
	//linklist->insert_position(1, 2);
	//std::cout << std::endl;
	////linklist->insert_start(50);
	////linklist->delete_first();
	//linklist->display();
	//if (linklist != nullptr)
	//{
	//	delete linklist;
	//	linklist = 0;
	//}

	std::cout << std::endl;
	system("pause");
	return 0;
}

void LinkedList::createnode(int value)
{
	node *n = new node();
	n->data = value;
	n->next = NULL;

	if (head == nullptr) {
		head = n;
		tail = n;
		n = NULL;
	}
	else 
	{
		tail->next = n;
		tail = n;
	}
}

void LinkedList::display() 
{
	node *temp = head;
	while (temp->next != NULL) //check node itself not node->next 
	{
		std::cout << temp->data << std::endl;
		temp = temp->next;
	} 
	std::cout << temp->data << std::endl;
}

void LinkedList::insert_start(int val)
{
	//simple first create a node add head address to current node's next and assign this node as head node
	node *newNode = new node;
	newNode->data = val;
	newNode->next = head;
	head = newNode;
}


void LinkedList::insert_position(int pos,int val)
{
	
}

void LinkedList::delete_first() 
{
	head = head->next;
}
