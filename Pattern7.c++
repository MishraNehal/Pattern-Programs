#include <iostream>
using namespace std;
// // for star
// int main() {
//     int n;
//     cout<<"enter n:";
//     cin>> n ;
//     int i=1;
//     while(i<=n)
//     {
//        int j=1;
//         while(j<=i)
//         {
//             cout<< " "<< "*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

//for i
int main() {
    int n;
    cout<<"enter n:";
    cin>> n ;
    int i=1;
    while(i<=n)
    {
       int j=1;
        while(j<=i)
        {
            cout<< " "<< i;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}

// // for (n-i)+1
// int main() {
//     int n;
//     cout<<"enter n:";
//     cin>> n ;
//     int i=1;
//     while(i<=n)
//     {
//        int j=1;
//         while(j<=i)
//         {
//             cout<< " "<< (n-i)+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }