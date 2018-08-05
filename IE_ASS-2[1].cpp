#include <iostream> 
using namespace std; 
int main() 
{ 
    int n,m,k,a; 
    
   
    cout << "Choose One \n\n Add = 1 \n Subtract = 2 \n\n enter your choice:  "; 
    cin >> a; 
    if ( a == 1 )
    {
   cout << "\n\nEnter 2 numbers that you want to add"; 
    cout << "\n\n Enter the first number:  "; 
    cin >> m; 
    cout << "\n Enter the second number:  " ; 
    cin >> k;
    n = m + k;
    if ( n % 2 == 0) 
    cout << "\n the sum is " << n << " and it is even."; 
   
    else 
    cout << "\n the sum is " << n << " and it is odd."; 
    }
     else if (a==2)
    {cout << "\n\n Enter 2 numbers that you want to subtract "; 
    cout << "\n\n Enter the first number:  "; 
    cin >> m; 
    cout << "\n Enter the second number:  " ; 
    cin >> k;
    n = m - k;
    if ( n % 2 == 0) 
    cout << "\n the difference is " << n << " and it is even."; 
   
    else 
    cout << "\n the difference is " << n << " and it is odd."; 
}
    else 
    {cout << "\n\n bobo ka wala sa choices yan cutting ka kasi ng cutting "; }
    
    return 0; 
    }