#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        // Print spaces
        int space = row - 1;
        while (space > 0)
        {
            cout << " ";
            space = space - 1;
        }

        // Print stars
        int col = n - row + 1;
        while (col > 0)
        {
            cout << "*";
            col = col - 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}
