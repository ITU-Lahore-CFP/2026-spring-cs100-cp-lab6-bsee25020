#include "functions.h"


int main() {
    int choice ;
    cout << " 1. Enter a number to Test " << endl ;
    cout << " 2. Sum of Square " << endl ;
    cout << " 3. Find Factorial " << endl ;
    cout << " Enter choice " << endl ;
    cin >> choice  ;

    int n ;
    if (choice == 1 )
    {
    cout << "Enter a positive number " << endl ;
    cin >> n  ;
    cout << "Enter a " << endl ;

    cout << "Sum of squares from 1 to " << n << "is :" << sumOfSquares(n) << endl ;
    }

    else if (choice == 2)

    {
        int n ;
        cout << "Enter a Positive integer " << endl ;
        cin >> n ;
        cout<< "The factorial is  "  << findFactorial(n) << endl ;
        

        
    }

    else 
    cout << "Invalid Error" << endl ;

}