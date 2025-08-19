#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n:";
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        // Print spaces (1st triangle)
        int space = n - row;
        while (space > 0)
        {
            cout << " ";
            space = space - 1;
        }

        // Print 2nd triangle (increasing numbers)
        int j = 1;
        while (j <= row)
        {
            cout << j;
            j = j + 1;
        }

        // Print 3rd triangle (decreasing numbers)
        int start = row - 1;
        while (start>0)
        {
            cout << start;
            start = start - 1;
        }

        // Move to the next line
        cout << endl;

        // Increment row
        row = row + 1;
    }

    return 0;
}
