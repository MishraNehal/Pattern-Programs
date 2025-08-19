#include <iostream>
using namespace std;

// int main() {
//     int n;
//     cout<<"enter n:";
//     cin>> n ;
//     int i=1;
//     while(i <= n)
//     {
//        int j=i;
//         while(j <= n)
//         {
//             cout<<" "<< i ; //if you do not want to given space between char you can change with cout<< j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }


// for star
int main() {
    int n;
    cout<<"enter n:";
    cin>> n ;
    int i=1;
    while(i <= n)
    {
       int j=i;
        while(j <= n)
        {
            cout<<" "<< "*" ; //if you do not want to given space between char you can change with cout<< j;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
