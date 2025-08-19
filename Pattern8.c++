#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n:";
    cin>> n ;
    int i=1;
    while(i<=n)
    {
       int j=i;
        while(j<=n)
        {
            cout<< " "<< (n-i)+1;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}