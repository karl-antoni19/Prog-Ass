#include <iostream> 
using namespace std; 
int main() 
{ 
    int n,m,k,a; 
    
   cout<<"\n How much money left in my pocket\n";
    cout<<"\n";
    cout << "Choose One \n\n Add left money = 1 \n Subtract allowance to my expenses = 2 \n\n enter your choice:  "; 
    cin >> a; 
    if ( a == 1 )
    {
   cout << "\n\nEnter 2 numbers that you want to add"; 
    cout << "\n\n Enter the first amount:  "; 
    cin >> m; 
    cout << "\n Enter the second amount:  " ; 
    cin >> k;
    n = m + k;
    if ( n % 2 == 0) 
    cout << "\n the total money left in my pocket is " << n << "."; 
   
    else 
    cout << "\n the total money left in my pocket is " << n << "."; 
    }
     else if (a==2)
    {cout << "\n\n Enter 2 numbers that you want to subtract "; 
    cout << "\n\n Enter your Allowance :  "; 
    cin >> m; 
    cout << "\n Enter your total expenses :  " ; 
    cin >> k;
    n = m - k;
    if ( n % 2 == 0) 
    cout << "\n  the total money left in my pocket is " << n << "."; 
    else 
    cout << "\n  the total money left in my pocket is " << n << "."; 

}
    else 
    {cout << "\n\n bobo ka wala sa choices yan cutting ka kasi ng cutting "; }
    
    return 0; 
    }