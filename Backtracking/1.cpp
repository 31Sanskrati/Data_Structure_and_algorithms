#include <iostream>
#include <string>
using namespace std;

int count(int r, int c)
{
    if (r == 1 || c == 1)
    {
        return 1;
    }
    int row = count(r - 1, c);
    int col = count(r, c - 1);

    return row + col;
}

void mazePath1(int r, int c, string s)
{
    if (r == 1 && c == 1)
    {
        cout << s << endl;
        return;
    }
    if (r > 1)
    {
        mazePath1(r - 1, c, s + 'D');
    }
    if (c > 1)
    {
        mazePath1(r, c - 1, s + 'R');
    }
}

void mazePath2(int r, int c, string s)
{
    if (r == 1 && c == 1)
    {
        cout << s << endl;
        return;
    }
    // diagonal
    if (r > 1 && c > 1)
    {
        mazePath2(r - 1, c - 1, s + 'D');
    }
    // bottom
    if (r > 1)
    {
        mazePath2(r - 1, c, s + 'B');
    }
    // right
    if (c > 1)
    {
        mazePath2(r, c - 1, s + 'R');
    }
}

int main()
{
    cout << "Backtracking strated" << endl;

    cout << "Count tracks " << count(3, 3) << endl;

    cout << "Maze paths without diagonal" << endl;
    mazePath1(3, 3, "");

    cout << "Maze paths with diagonal" << endl;
    mazePath2(3, 3, "");
    return 0;
}