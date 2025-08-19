#include <iostream>
using namespace std;
//STAR
// int main()
// {
//     int n;
//     cout<<"enter n:";
//     cin >> n;
//     int i = 1;

//     while (i <= n)
//     {
//         // Print spaces 
//         int space = i-1;
//         while (space > 0)
//         {
//             cout << " ";
//             space --;
//         }

//         // star
//         int star =2 * (n-i)+1;
        
//         while (star>0)
//         {
//             cout << "*" ;
            
//             star--;
//         }

    

//         // Move to the next line
//         cout << endl;

//         // Increment row
//         i++;
//     }

//     return 0;
// }


//Number 
// int main()
// {
//     int n;
//     cout<<"enter n:";
//     cin >> n;
//     int i = 1;

//     while (i <= n)
//     {
//         // Print spaces 
//         int space = i-1;
//         while (space > 0)
//         {
//             cout << " ";
//             space --;
//         }

//         // star
//         int star =2 * (n-i)+1;
//         int value = 1;
        
//         while (star>0)
//         {
//             cout << value ;
//             value ++;
            
//             star--;
//         }

    

//         // Move to the next line
//         cout << endl;

//         // Increment row
//         i++;
//     }

//     return 0;
// }

//char
int main()
{
    int n;
    cout<<"enter n:";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        // Print spaces 
        int space = i-1;
        while (space > 0)
        {
            cout << " ";
            space --;
        }

        // star
        int star =2 * (n-i)+1;
        char  value = 'A';
        
        while (star>0)
        {
            cout << value ;
            value ++;
            
            star--;
        }

    

        // Move to the next line
        cout << endl;

        // Increment row
        i++;
    }

    return 0;
}