#include <iostream>
using namespace std;

// stores adjacency list items
struct adjNode
{
    int val, cost;
    adjNode *next;
};

// structure to store edges
struct graphEdge
{
    int start_ver, end_ver;
};

// Adjacency list representation of graph
class AdjList
{
    // insert new nodes into adjacency list from given graph
    adjNode *getAdjListNode(int value, adjNode *head)
    {
        adjNode *newNode = new adjNode;
        newNode->val = value;

        newNode->next = head; // point new node to current head
        return newNode;
    }
    int N; // number of nodes in the graph
public:
    adjNode **head; //adjacency list as array of pointers
    AdjList(graphEdge edges[], int, int);
    ~AdjList();
    void display_AdjList(adjNode *, int);
};

//constructor
AdjList::AdjList(graphEdge edges[], int n, int N)
{
    head = new adjNode *[N]();
    this->N = N;
    // initialize head pointer
    for (int i = 0; i < N; ++i)
        head[i] = nullptr;
    // construct directed graph by adding edges to it
    for (unsigned i = 0; i < n; i++)
    {
        int start_ver = edges[i].start_ver;
        int end_ver = edges[i].end_ver;
        // insert in the beginning
        adjNode *newNode = getAdjListNode(end_ver, head[start_ver]);

        // point head pointer to new node
        head[start_ver] = newNode;
    }
}

//destructor
AdjList::~AdjList()
{
    for (int i = 0; i < N; i++)
        delete[] head[i];
    delete[] head;
}

// print all adjacent vertices of given vertex
void AdjList::display_AdjList(adjNode *ptr, int i)
{
    while (ptr != nullptr)
    {
        cout << "(" << i << ", " << ptr->val
             << ", " << ptr->cost << ") ";
        ptr = ptr->next;
    }
    cout << endl;
}

//  Adjacency matrix representation of graph
class AdjMatrix{
    int n;
    public:
    AdjMatrix(int);
    void add_edge(int, int);
    void displayMatrix();
};

AdjMatrix::AdjMatrix(int N){
    this->n = N;
    int matrix[n][n] = {0};
}

void AdjMatrix::add_edge(int u, int v){
    int matrix[n][n] = {0};
    if(u>n || v>n){
        cout<<"Your given index is greater than graph edges\n";
        return;
    }
    matrix[u][v] = 1;
    matrix[v][u] = 1;
    cout<<"Edge Added\n";
}

// Edge List representation of graph
class EdgeList{
    public:
    EdgeList(graphEdge edges[], int);
};

// Print Edge List
EdgeList::EdgeList(graphEdge edges[], int n){
    for(int i = 0; i<n; i++){
        cout<<"[ ";
        cout<<edges[i].start_ver<<" , ";
        cout<<edges[i].end_ver;
        cout<<" ],";
    }
    cout<<endl;
}

/*
// conversion
AdjList::operator AdjMatrix()
{
  AdjList obj;
  obj.head = list_head;
  return obj;   
}

AdjMatrix::operator EdgeList(){

}
*/

int main()
{
    graphEdge edges[] = {
        // (x, y, w) -> edge from x to y with weight w
        {0, 1},
        {0, 2},
        {1, 4},
        {2, 3},
        {3, 1},
        {4, 3}};
    int N = 6;
    int n = sizeof(edges) / sizeof(edges[0]);

    AdjList ad_graph(edges, n, N);
    cout << "  Graph adjacency list : (start_vertex, end_vertex, weight) " << endl;
    for (int i = 0; i < N; i++)
    {
        ad_graph.display_AdjList(ad_graph.head[i], i);
    }
    cout << endl;
    cout << endl;

    cout<<"  Edge List  ";
    EdgeList list(edges, N);
    cout<<endl;
    cout<<endl;
    
    return 0;
}