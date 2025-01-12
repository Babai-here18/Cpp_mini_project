                         /* <-----Determinant Calculator [3x3] Matrix Solver-----> */


//header file in C++ ---------------------------------------------------------------------->  
#include <iostream>
#include <iomanip>
using namespace std;
/* <---------------------------------------------------------------------------------------->*/


int main()
{
    // Declare a 3x3 matrix and necessary variables
    int a[3][3], i, j, Ans = 0;
    int D1, D2, D3; // To store intermediate results for determinant calculation
    D1 = D2 = D3 = 0; // Initialize all determinant components to 0

    // Display a heading message about the matrix size
    cout << endl
         << "\t\t<----[This Determinant Matrix is only used for 3X3 Row & Column]---->" << endl;

    // Input loop to populate the 3x3 matrix
    for (i = 0; i < 3; i++)
    {
        cout << endl; // Blank line for better readability
        for (j = 0; j < 3; j++)
        {
            // Prompt the user to enter each element of the matrix
            cout << "Enter Number in Row->[" << i << "] | Column->[" << j << "] : ";
            cin >> a[i][j]; // Read the element
        }
    }

    // Display the inputted matrix
    cout << endl
         << endl
         << "Find the determinant of the coefficient Matrix-----> " << endl
         << endl
         << endl;

    for (i = 0; i < 3; i++)
    {
        cout << " | " << setw(3); // Print left boundary of the matrix row
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << " " << setw(3); // Print each element in the row with spacing
        }
        cout << "|"; // Print right boundary of the matrix row
        cout << endl; // Move to the next row
    }

    // Display heading for determinant solution
    cout << endl
         << endl
         << "-----------------------" << endl;
    cout << "The solution is----->" << endl;
    cout << "-----------------------" << endl;

    // Compute the determinant using the formula for a 3x3 matrix
    Ans = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) -
          a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2])) +
          a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));

    // Calculate individual terms of the determinant for clarity in display
    D1 = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]));
    D2 = a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2]));
    D3 = a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));

    // Display the determinant calculation step by step
    cout << endl
         << endl
         << setw(3) << a[0][0] << " * ((" << a[1][1] << " * " << a[2][2] << ") - (" << a[2][1] << " * " << a[1][2] << ")) =  " << D1 << endl
         << endl
         << setw(3) << a[0][1] << " * ((" << a[1][0] << " * " << a[2][2] << ") - (" << a[2][0] << " * " << a[1][2] << ")) =  " << D2 << endl
         << endl
         << setw(3) << a[0][2] << " * ((" << a[1][0] << " * " << a[2][1] << ") - (" << a[2][0] << " * " << a[1][1] << ")) =  " << D3 << endl
         << endl;

    // Display the final calculation with proper formatting
    cout << "  => ( " << D1 << " )  -  ( " << D2 << " )  +  ( " << D3 << " )" << setw(3) << endl
         << endl;
    cout << "  =>  " << Ans << "  [Answer]" << setw(3) << endl;

    return 0; // Exit the program
}
/*------------------------------------------------------------------['End of The Program'] -----------------------------------------------------------------------*/