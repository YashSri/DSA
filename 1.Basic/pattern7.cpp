#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;

    int row = 1;

    while (row<=n)
    {
        int j =1;
        char start = 'A' + row + j-2;
        while (j<=n)
        {
           cout<< start;
           start= start+ 1;
           j=j+1;

        }
        cout<<endl;
        row = row +1;
        
    }
    
}