#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n:";
    cin>> n ;
    int i=1;
    while(i <= n)
    {
       int j=1;
        while(j <= n)
        {
            cout<<" "<< (n-j)+1 ; //if you do not want to given space between char you can change with cout<< j;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
