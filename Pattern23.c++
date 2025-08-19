#include <iostream>
using namespace std;
//NUMBERS
// int main()
// {
//     int n;
//     cout<<"enter n:";
//     cin >> n;
//     int i = 1;

//     while (i <= n)
//     {
//         // Print spaces 
//         int space = n - i;
//         while (space > 0)
//         {
//             cout << " ";
//             space = space - 1;
//         }

//         // star
//         int star = 2* i - 1;
//         int value =1;
//         while (star >0)
//         {
//             cout << value ;
//             value ++;
//             star --;
//         }

    

//         // Move to the next line
//         cout << endl;

//         // Increment row
//         i++;
//     }

//     return 0;
// }


//ALPHABET
// int main()
// {
//     int n;
//     cout<<"enter n:";
//     cin >> n;
//     int i = 1;

//     while (i <= n)
//     {
//         // Print spaces 
//         int space = n - i;
//         while (space > 0)
//         {
//             cout << " ";
//             space = space - 1;
//         }

//         // star
//         int star = 2* i - 1;
//         char ch = 'A';
//         while (star >0)
//         {
//             cout << ch ;
//             ch++;
//             star --;
//         }

    

//         // Move to the next line
//         cout << endl;

//         // Increment row
//         i++;
//     }

//     return 0;
// }


//STAR
int main()
{
    int n;
    cout<<"enter n:";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        // Print spaces 
        int space = n - i;
        while (space > 0)
        {
            cout << " ";
            space = space - 1;
        }

        // star
        int star = 2* i - 1;
        
        while (star >0)
        {
            cout << "*" ;
            
            star --;
        }

    

        // Move to the next line
        cout << endl;

        // Increment row
        i++;
    }

    return 0;
}