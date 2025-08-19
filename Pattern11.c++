#include <iostream>
using namespace std;
// int main() {
//     int n;
//     cout<<"enter n:";
//     cin>> n ;
//     int i=1;
    
//     while(i <= n)
//     {
//        int j=1;
//        int value = i;
//         while(j <= i)
//         {
//             cout<<" "<< value ; //if you do not want to given space between char you can change with cout<< j;
//             value --;
//             j++;
            
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }


int main() {
    int n;
    cout<<"enter n:";
    cin>> n ;
    int i=1;
    
    while(i <= n)
    {
       int j=1;
       
        while(j <= i)
        {
            cout<<" "<< i-j+1 ; //if you do not want to given space between char you can change with cout<< j;
            
            j++;
            
        }
        cout<<endl;
        i++;
    }

    return 0;
}
