#include <iostream>
#include <math.h>
using namespace std;
class MinHeap
{
public:
	int *harray; // pointer to array of the elements
	int items;	 // maximum possible set of the items in the min heap
	int heap_priority;
	int apples;
	MinHeap(int items)
	{
		heap_priority = 0;
		items = apples;
		harray = new int[apples];
	}
	int linear_Search(int val)
	{
		for (int i = 0; i < heap_priority; i++)
		{
			if (harray[i] == val)
			{
				cout << "The value is found in the array";
				return -1;
			}
		}
		cout << "The value is not found in the array";
	}
	void print_Array()
	{
		for (int i = 0; i < heap_priority; i++)
			cout << harray[i] << "";
		cout << endl;
	}
	int height()
	{
		return ceil(log2(heap_priority + 1)) - 1;
	}
};

int main()
{
	int s;
	cout << "Enter the priority of the min heap" << endl;
	cin >> s;
	MinHeap Obj(s);
	cout << "Min heap is being created" << endl;
	int option, val;
	do
	{
		cout << "Which option will you choose?" << endl;
		cout << "1.void add(apples,0)" << endl;
		cout << "2.boolean contains(apples)" << endl;
		cout << "3.Seemin()" << endl;
		cout << "4.Extractmin()" << endl;
		cout << "5.void changePriority(apples,0)" << endl;
		cout << "6.int size()" << endl;
		cout << "7.boolean isEmpty()" << endl;
		cout << "7.Exit program" << endl;
		cin >> option;
		switch (option)
		{
		case 0:
			break;
		case 1:
			cout << "ADD Operation" << endl;
			cout << "Add an apple with the given priority value:";
			cin >> val;
			cout << endl;
			break;
		case 2:
			cout << "Boolean operation" << endl;
			cout << "Returns true if the heap contains the given item, false otherwise:";
			cout << endl;
			break;
		case 3:
			cout << "See min value:";
			cout << endl;
			break;
		case 4:
			cout << "Extract min value";
			cout << endl;
			break;
		case 5:
			cout << "Priority changing operation" << endl;
			cout << "Changes the priority of an apple :";
			cin >> val;
			break;
		case 6:
			cout << "Returns the number of apples in the heap:" << endl;
			cout << endl;
			break;
		case 7:
			cout << "Exit operation" << endl;
			cout << "Ends the process";
			cout << endl;
			break;
		}
	} while (option != 7);

	return 0;
}