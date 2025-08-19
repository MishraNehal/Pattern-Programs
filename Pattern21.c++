#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n:";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        // Print (1st triangle)
        int j = i , value =1;
        while (j<=n)
        {
            cout <<" "<< value;
            j++;
            value++;
        }

        // Print 2nd triangle 
        int k = i-1;
        while (k>0)
        {
            cout <<" "<< "*";
            k--;
        }

        // // Print 3rd triangle 
        int l = i-1;
        while (l>0)
        {
            cout <<" "<< "*";
            l--;
        }

        // print 4th triangle
         int m = i ;
         int value2 = n-i +1;
        while (m<=n)
        {
            cout <<" "<< value2 ;
            m++;
            value2--;
        }


        // Move to the next line
        cout << endl;

        // Increment row
        i++;
    }

    return 0;
}
