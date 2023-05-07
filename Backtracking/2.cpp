#include <iostream>
using namespace std;

void mazePath(bool maze[3][3], int r, int c, string s)
{
    if (r == 2 && c == 2)
    {
        cout << s << endl;
        return;
    }
    if(maze[r][c] == false){
        return;
    }
    if (r < 2)
    {
        mazePath(maze, r + 1, c, s + 'D');
    }
    if (c < 2)
    {
        mazePath(maze, r, c + 1, s + 'R');
    }
}

void backtracking(bool maze[3][3], int r, int c, string s)
{
    if (r == 2 && c == 2)
    {
        cout << s << endl;
        return;
    }
    if(maze[r][c] == false){
        return;
    }
    maze[r][c] = false;
    if (r < 2)
    {
        backtracking(maze, r + 1, c, s + 'D');
    }
    if (c < 2)
    {
        backtracking(maze, r, c + 1, s + 'R');
    }
    if (r > 0)
    {
        backtracking(maze, r - 1, c, s + 'U');
    }
    if (c > 0)
    {
        backtracking(maze, r, c - 1, s + 'L');
    }
    maze[r][c] = true;
}

void backtracking2(bool maze[3][3], int r, int c, string s, int path[3][3], int count)
{
    if (r == 2 && c == 2)
    {
        cout << s << endl;
        path[r][c] = count;
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                cout<<path[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    if(maze[r][c] == false){
        return;
    }
    maze[r][c] = false;
    path[r][c] = count;
    if (r < 2)
    {
        backtracking2(maze, r + 1, c, s + 'D', path, count+1);
    }
    if (c < 2)
    {
        backtracking2(maze, r, c + 1, s + 'R', path, count+1);
    }
    if (r > 0)
    {
        backtracking2(maze, r - 1, c, s + 'U', path, count+1);
    }
    if (c > 0)
    {
        backtracking2(maze, r, c - 1, s + 'L', path, count+1);
    }
    maze[r][c] = true;
    path[r][c] = 0;
}

int main(){
    bool maze[3][3] = {{true, true, true},
                       {true, true, false},
                       {true, true, true}};

    mazePath(maze, 0, 0, ""); 

    cout<<endl;
    backtracking(maze,0,0,"");

    cout<<endl;
    int path[3][3] = {0};
    backtracking2(maze,0,0,"", path, 1);
    return 0;
}