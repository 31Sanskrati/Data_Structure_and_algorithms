#include <iostream>
using namespace std;
/*
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node heap_construction(int arr[], int i){
    struct Node * temp = new Node(arr[i]);
    if(2*i <= arr[0])
        temp->left = new Node(arr[2*i]);
    if((2*i + 1) <= arr[0])
        temp->right = new Node(arr[2*i + 1]);
}
*/

// swap two numbers in array
void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// move the small number down
void move_down(int i, int n, int *arr)
{
    while ((arr[i] < arr[2 * i] || arr[i] < arr[2 * i + 1]) && (2 * i < n))
    {
        // if left number is larger
        if (arr[2 * i] > arr[2 * i + 1])
        {
            swap(arr, i, 2 * i);
            i = 2 * i;
        }
        // if right is larger
        else
        {
            swap(arr, i, 2 * i + 1);
            i = 2 * i + 1;
        }
    }
}

// move the small number down
void move_up(int i, int n, int *arr)
{
    while ((arr[i] > arr[2 * i] || arr[i] > arr[2 * i + 1]) && (2 * i < n))
    {
        // if left number is larger
        if (arr[2 * i] < arr[2 * i + 1])
        {
            swap(arr, i, 2 * i);
            i = i/2;
        }
        // if right is larger
        else
        {
            swap(arr, i, 2 * i + 1);
            i = i/2 + 1;
        }
    }
}

// transform heap to max_heap
int* max_heap(int arr[])
{
    int n = arr[0];
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < arr[2 * i] || arr[i] < arr[2 * i + 1])
        {
            move_down(i, n, arr);
        }
    }
    return arr;
}

// transform heap to max_heap
int* min_heap(int arr[])
{
    int n = arr[0];
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > arr[2 * i] || arr[i] > arr[2 * i + 1])
        {
            move_up(i, n, arr);
        }
    }
    return arr;
}

void print_array(int* arr){
    for (int i = 0; i <= arr[0]; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cin >> size;
    int HEAP[size + 1];
    HEAP[0] = size;

    for (int i = 1; i <= size; i++)
    {
        cin >> HEAP[i];
    }

    cout << "\nHeap will be \n";
    print_array(HEAP);

    cout << "\nMax Heap : \n";
    print_array(max_heap(HEAP));

    cout << "\nMin Heap : \n";
    print_array(min_heap(HEAP));

    return 0;
}