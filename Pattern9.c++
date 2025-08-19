#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n:";
    cin>> n ;
    int i=1;
    int count = 1;
    while(i <= n)
    {
       int j=1;
        while(j <= i)
        {
            cout<<" "<< count ; //if you do not want to given space between char you can change with cout<< j;
            count++;
            j++;
            
        }
        cout<<endl;
        i++;
    }

    return 0;
}
