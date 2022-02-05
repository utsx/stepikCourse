#include <iostream>
using namespace std;

int board[10];

bool check_queen(int i, int j, int k)
{
    if (k == i)
    {
        return true;
    }
    else
    {
        return board[k] != j && (i - k) != (j - board[k]) && (i - k) != (board[k] - j) && check_queen(i, j, k + 1);
    }
}

int find_queen(int n, int i, int j)
{
    if (i == n)
    {
        return 1;
    }
    else
    {
        if (j < n)
        {
            int r = 0;
            if (check_queen(i, j, 0))
            {
                board[i] = j;
                r = find_queen(n, i + 1, 0);
            }
            return r + find_queen(n, i, j + 1);
        }
        else return 0;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << find_queen(n, 0, 0);
    return 0;
}
