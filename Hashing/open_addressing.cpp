#include <iostream>
#include <vector>
#define MAX 100

using namespace std;

/*Like separate chaining, open addressing is a method for handling collisions.
 In Open Addressing, all elements are stored in the hash table itself.
 
 Linear probing -- storing the same value with same key value to that key or key next to it
 Quadratic Probing -- We look for i2‘th slot in i’th iteration.
 Double Hashing -- We use another hash function hash2(x) and look for i*hash2(x) slot in i’th rotation. 
 */
bool has[MAX + 1][2];
vector<int> storage;

bool search(int X)
{
    if (X >= 0)
    {
        if (has[X][0] == 1){
            return true;
        }
        else
            return false;
    }
    X = abs(X);
    if (has[X][1] == 1){
        return true;
    }

    return false;
}

void insert(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sign = 0;
        if (arr[i] < 0)
        {
            sign = 1;
        }
        if (has[abs(arr[i])][sign] = 1)
        {
            int j = abs(arr[i]);

            //linear probing
            while (has[j][sign] != 1)
            {
                j++;
            }
            has[j][sign] = 1;
        }
        else
        {
            has[arr[i]][sign] = 1;
        }
    }
}

int main()
{
    int a[] = {-1, 9, -5, -8, -5, -2};
    int n = sizeof(a) / sizeof(a[0]);
    insert(a, n);
    int X = -5;
    if (search(X) == true)
        cout << "Present";
    else
        cout << "Not Present";
    return 0;
}