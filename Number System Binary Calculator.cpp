                         /* <----------[ Number System Binary Calculator Use Of Class and Function ]----------> */


 //header file in C++ -------------------------------------------------------------------->                           
#include <iostream> // Provides input and output stream functionality
#include <bitset>  // For bit manipulation
#include <cstdlib> // For exit()
#include<iomanip> // Provides tools for manipulating input/output formatting
#include <string> // Provides support for using the `std::string` class
/* <---------------------------------------------------------------------------------------->*/

using namespace std; // Allows direct access to all elements in the standard namespace (e.g., cout, cin) without prefixing them with `std::`

/* <---------------------------------------------------------------------------------------------------------------------------------------------->*/




/*------------------------- Class: convertDecimal -------------------------*/


// Class to convert a binary number to its decimal equivalent
class convertDecimal {
public:

    long int convertDeci(long long int binary_num) {
        long long int decimal = 0, base = 1, lastDigit;

        // Convert binary number to decimal
        while (binary_num > 0) {
            lastDigit = binary_num % 10;     
            decimal += lastDigit * base;    
            binary_num /= 10;              
            base *= 2;                      
        }

        return decimal;
    }
};
/*---------------------------------------------------------------------------*/




/*------------------------- Class: convertBinary -------------------------*/


// Class to convert a decimal number to its binary equivalent
class convertBinary {
public:

    // Convert positive decimal to binary
    long long int convertBin(long long int Decimal_num) {
        long long int binary = 0, base = 1, lastDigit;

        while (Decimal_num > 0) {
            lastDigit = Decimal_num % 2;    
            binary += lastDigit * base;    
            Decimal_num /= 2;            
            base *= 10;                    
        }

        return binary;
    }



    // Convert negative decimal to binary
    long long int convertBinNegative(long long int negDecimalNum) {
        long long int binary = 0, base = 1, lastDigit;

        while (negDecimalNum > 0) {
            lastDigit = negDecimalNum % 2;
            binary += lastDigit * base;   
            negDecimalNum /= 2;           
            base *= 10;                    
        }

        return binary * -1; // Return negative binary
    }
};
/*---------------------------------------------------------------------------*/




/*--------------------- Function: toTwosComplement -----------------------*/


// Converts a decimal number to its 2's complement binary representation
string toTwosComplement(int num, int bits) {

    // Add the 2's complement of the negative number if necessary
    num = (1 << bits) + num;


    // Return the binary representation of the number
    bitset<32> binary(num); // Use a 32-bit bitset
    return binary.to_string().substr(32 - bits); // Extract the last 'bits' bits
}
/*---------------------------------------------------------------------------*/





/*---------------------------- Function: check ---------------------------*/


// Function to validate if the input is a binary number
void check(long long int num) {
    if (num > 0 || num == 0) {
        while (num > 0) {
            int digit = num % 10; // Extract the last digit
            if (digit != 0 && digit != 1) {
                cout << "\n\t[Sorry, this is not a 'Binary Number'. Please enter a valid binary number.]\n\n";
                exit(0); // Exit program on invalid input
            }
            num /= 10; // Remove the last digit
        }
    } else {
        // Reject negative values for binary input
        cout << "\n\t[Sorry, negative values are not allowed. Please enter a positive binary number.]\n\n";
        exit(0);
    }
}
/*---------------------------------------------------------------------------*/




/*----------------------------- Class: Input -----------------------------*/


// Class to handle user input and binary-to-decimal conversions
class Input {
public:

    long long int num1, num2;         // Binary numbers for operations
    convertDecimal cd;               // Object for binary-to-decimal conversion
    long int deci1, deci2;           // Decimal equivalents
    long long int dividend, divisor; // Binary numbers for division
    long int deciDivdendVal, deciDivisorVal; // Decimal equivalents for division


    // Get user input for binary numbers and convert to decimal
    void getinfo() {
        cout << "\nEnter the First Binary Number: ";
        cin >> num1;
        check(num1); // Validate binary input
        cout << "\nEnter the Second Binary Number: ";
        cin >> num2;
        check(num2); // Validate binary input
        deci1 = cd.convertDeci(num1); // Convert to decimal
        deci2 = cd.convertDeci(num2); // Convert to decimal
    }



    // Get user input specifically for division and convert to decimal
    void getinfoDivision() {
        cout << "\nEnter the 'Dividend' Binary Number: ";
        cin >> dividend;check(dividend);
        check(dividend); // Validate dividend input
        cout << "\nEnter the 'Divisor' Binary Number: ";
        cin >> divisor;check(divisor);

        // Check for divisor being zero
        if (divisor == 0) {
            cout << "\n\n\t\t[Cannot divide by '0']\n\n";
            exit(0);
        } 
    else{
        
        deciDivdendVal = cd.convertDeci(dividend); // Convert dividend to decimal
        deciDivisorVal = cd.convertDeci(divisor); // Convert divisor to decimal
    }

        
    }
};
/*---------------------------------------------------------------------------*/





/*---------------------------- Function: addition ----------------------------*/


// Function to perform the addition of two binary numbers and display the solution
void addition() {


    // Create an object of the Input class to handle user input
    Input obj;  


    // Create an object of the convertBinary class to convert decimal to binary
    convertBinary cb;  


    // Get the binary numbers from the user and convert them to decimal
    obj.getinfo();


    // Perform the addition of the two decimal values
    long int Sum = obj.deci1 + obj.deci2;


    // Convert the sum to binary
    long long int BinSum = cb.convertBin(Sum);


    /*------------------------- Display the solution -------------------------*/


    // Display the solution message
    cout << "\n\nSolution is :- " << endl;
    cout << "----------------\n" << endl;


    // Format the output for the first binary number
    cout << setw(5) << "\n\t(" << obj.num1 << ")" << "--->"
         << "[Decimal Value : " << obj.deci1 << "]\n"
         << "    +\n";  // Added newline for clarity


    // Format the output for the second binary number
    cout << setw(5) << "\t(" << obj.num2 << ")" << "--->"
         << "[Decimal Value : " << obj.deci2 << "]" << endl;


    // Display separator for readability
    cout << "   ------------------------------------------------\n"
         << setw(5) << "    =>";  // Showing the result symbol (=>)


    // Display the result in binary and its decimal value
    cout << "\t" << "(" << BinSum << ")--->" << "[Decimal Value : " << Sum << "]" << endl;


    // Display binary representation section
    cout << setw(2) << "\n\n[Binary Value] =>" 
         << " [" << obj.num1 << " + " << obj.num2 << "]" << " = " << BinSum << endl;


    // Display decimal representation section
    cout << setw(2) << "\n\n[Decimal Value] =>"
         << " [" << obj.deci1 << " + " << obj.deci2 << "]" << " = " << Sum << endl;


    // Display final answer
    cout << "\n\n=> " << "[ Answer = " << BinSum << " ]\n" << endl;

}
/*---------------------------------------------------------------------------*/





/*-------------------------- Function: subtraction ---------------------------*/


// Function to perform the subtraction of two binary numbers and display the solution
void subtraction() {


    // Create an object of the Input class to handle user input
    Input obj;      


    // Create an object of the convertBinary class to convert decimal to binary
    convertBinary cb;       


    // Get the binary numbers from the user
    obj.getinfo();


    // Perform subtraction of the two decimal values
    long int Difference = obj.deci1 - obj.deci2;


    // Check if the result of subtraction is negative

    if (Difference < 0) {


                            /*----- If the result is negative -----*/


        // Define the number of bits for binary representation
        int bits = 8;


        // Take the absolute value of the difference
        long int temp = abs(Difference);


        // Convert the absolute value to binary using negative binary conversion
        long long int BinDifferenceNega = cb.convertBinNegative(temp);


        // Convert the negative number to its two's complement form
        string result = toTwosComplement(Difference, bits);


        // Display the solution message
        cout << "\n\nSolution is :- " << endl;
        cout << "----------------\n" << endl;


        // Format the output for the first binary number
        cout << setw(5) << "\n\t(" << obj.num1 << ")" << "--->"
             << "[Decimal Value : " << obj.deci1 << "]\n"
             << "    -" << endl;


        // Format the output for the second binary number
        cout << setw(5) << "\t(" << obj.num2 << ")" << "--->"
             << "[Decimal Value : " << obj.deci2 << "]" << endl;


        // Display separator line
        cout << "   ------------------------------------------------\n"
             << setw(5) << "    =>";  // Showing the result symbol (=>)


        // Display the result in binary and its decimal value
        cout << "\t" << "(" << BinDifferenceNega << ")--->"
             << "[Decimal Value : " << Difference << "]" << endl;


        // Binary representation section
        cout << setw(2) << "\n\n[Binary Value] =>" << " [" << obj.num1 << " - " << obj.num2 << "]" << " = " << BinDifferenceNega << endl;


        // Decimal representation section
        cout << setw(2) << "\n\n[Decimal Value] =>" << " [" << obj.deci1 << " - " << obj.deci2 << "]" << " = " << Difference << endl;


        // Display the final answer
        cout << "\n\n=> " << "[ Answer = " << BinDifferenceNega << " ]" << endl;
        cout << "\n=> 2's complement representation of " << Difference << " in " << bits << " bits is: " <<"["<<result<<"]\n"<< endl;

    } 

    else { 

                            /*----- If the result is positive -----*/


        // Convert the positive result to binary
        long long int BinDifferencepos = cb.convertBin(Difference);


        // Display the solution message
        cout << "\n\nSolution is :- " << endl;
        cout << "----------------\n" << endl;


        // Format the output for the first binary number
        cout << setw(5) << "\n\t(" << obj.num1 << ")" << "--->"
             << "[Decimal Value : " << obj.deci1 << "]\n"
             << "    -" << endl;


        // Format the output for the second binary number
        cout << setw(5) << "\t(" << obj.num2 << ")" << "--->"
             << "[Decimal Value : " << obj.deci2 << "]" << endl;


        // Display separator line
        cout << "   ------------------------------------------------\n"
             << setw(5) << "    =>";  // Showing the result symbol (=>)


        // Display the result in binary and its decimal value
        cout << "\t" << "(" << BinDifferencepos << ")--->"
             << "[Decimal Value : " << Difference << "]" << endl;


        // Binary representation section
        cout << setw(2) << "\n\n[Binary Value] =>" << " [" << obj.num1 << " - " << obj.num2 << "]" << " = " << BinDifferencepos << endl;


        // Decimal representation section
        cout << setw(2) << "\n\n[Decimal Value] =>" << " [" << obj.deci1 << " - " << obj.deci2 << "]" << " = " << Difference << endl;


        // Display the final answer
        cout << "\n\n=> " << "[ Answer = " << BinDifferencepos << " ]\n" << endl;

    }
}
/*---------------------------------------------------------------------------*/




/*------------------------ Function: Multiplication -------------------------*/


// Function to perform the multiplication of two binary numbers and display the solution
void Multiplication() {


    // Create an object of the Input class to handle user input
    Input obj;  


    // Create an object of the convertBinary class to convert decimal to binary
    convertBinary cb;  


    // Get the binary numbers from the user
    obj.getinfo();


    // Perform multiplication of the two decimal values
    long int Mul = obj.deci1 * obj.deci2;


    // Convert the result to binary
    long long int BinMul = cb.convertBin(Mul);


    /*------------------------- Display the solution -------------------------*/


    // Display the solution message
    cout << "\n\nSolution is :- " << endl;
    cout << "----------------\n" << endl;


    // Format the output for the first binary number
    cout << setw(5) << "\n\t(" << obj.num1 << ")" << "--->"
         << "[Decimal Value : " << obj.deci1 << "]\n"
         << "    *\n";  // Added newline for clarity


    // Format the output for the second binary number
    cout << setw(5) << "\t(" << obj.num2 << ")" << "--->"
         << "[Decimal Value : " << obj.deci2 << "]" << endl;


    // Display separator for readability
    cout << "   ------------------------------------------------\n"
         << setw(5) << "    =>";  // Showing the result symbol (=>)


    // Display the result in binary and its decimal value
    cout << "\t" << "(" << BinMul << ")--->" << "[Decimal Value : " << Mul << "]" << endl;


    // Binary representation section
    cout << setw(2) << "\n\n[Binary Value] =>" 
         << " [" << obj.num1 << " * " << obj.num2 << "]" << " = " << BinMul << endl;


    // Decimal representation section
    cout << setw(2) << "\n\n[Decimal Value] =>"
         << " [" << obj.deci1 << " * " << obj.deci2 << "]" << " = " << Mul << endl;


    // Display the final answer
    cout << "\n\n=> " << "[ Answer = " << BinMul << " ]\n" << endl;

}
/*---------------------------------------------------------------------------*/





/*------------------------- Function: Division ----------------------------*/


// Function to perform the division of two binary numbers and display the solution
void Division() {


    // Create an object of the Input class to handle user input
    Input obj;  


    // Create an object of the convertBinary class to convert decimal to binary
    convertBinary cb;  


    // Get the binary numbers from the user for division
    obj.getinfoDivision();


    // Perform division of the two decimal values (quotient and remainder)
    long int quotient = obj.deciDivdendVal / obj.deciDivisorVal;
    long int rem = obj.deciDivdendVal - quotient * obj.deciDivisorVal;


    // Convert the quotient and remainder to binary
    long long int BinQuotient = cb.convertBin(quotient);
    long long int BinRem = cb.convertBin(rem);


    /*------------------------- Display the solution -------------------------*/


    // Display the solution message
    cout << "\n\nSolution is :- " << endl;
    cout << "----------------\n" << endl;
    cout << "\nDIVDEND VALUE IS : " << obj.dividend << endl;
    cout << "\nDIVISIOR VALUE IS : " << obj.divisor << endl;


    // Binary value section
    cout << "\n\nBinary Value :-" << endl;
    cout << "----------------\n" << endl;
    cout << "[ DIVDEND--->[ " << obj.dividend << " / " << obj.divisor << " ]<---DIVISIOR ]" << endl;
    cout << "\nQuotient in binary => [ " << BinQuotient << " ]" << endl;
    cout << "\nRemainder in binary => [ " << BinRem << " ]\n" << endl;


    // Decimal value section
    cout << "\n\nDecimal Value :-" << endl;
    cout << "----------------\n" << endl;
    cout << "[ DIVDEND--->[ " << obj.deciDivdendVal << " / " << obj.deciDivisorVal << " ]<---DIVISIOR ]" << endl;
    cout << "\nQuotient in Decimal => [ " << quotient << " ]" << endl;
    cout << "\nRemainder in Decimal => [ " << rem << " ]\n" << endl;


    // Display the final answer
    cout << "\n\n=> " << " [ Answer  =  \n" <<"\t\t Quotient : "<<BinQuotient<<"\n\n\t\t Remainder : "<<BinRem<<" ]\n" << endl;

}
/*---------------------------------------------------------------------------*/








/*------------------------- 'Main Function' ----------------------------*/



int main() {


    // Label for repeating the menu and operation if the user chooses to continue
    repeate:
    int choice;  // Variable to store user's choice for the operation
    char ch;     // Variable to store the user's choice for continuing or exiting


    // Print a header to display the menu
    cout << "\n*****************************************************************" << endl;
    cout << "\n\t -: NUMBER SYSTEM BINARY CALCULATOR :- " << endl;
    cout << "\n\t    [ONLY INTEGERS VALUE ARE ALLOWED]" << endl;
    cout << "-----------------------------------------------------------------" << endl;


    // Display the available operations
    cout << "1.[ADDITION] \n\n2.[SUBTRACTION] \n\n3.[MULTIPLICATION] \n\n4.[DIVISION]" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    

    // Prompt the user to enter a choice for the operation
    cout << "Enter your choice any one Operation : ";
    cin >> choice;


    // Switch statement to handle the different operations based on the user's input
    switch(choice) {


        // Case 1: Addition
        case 1:
            addition();  // Call the addition function
            // Ask if the user wants to perform another operation
            cout << "Any Other Operation you Want to Use ? ['Y' or 'N'-(Any key press)] : ";
            cin >> ch;


            // If user presses 'Y' or 'y', repeat the process
            if(ch == 'y' || ch == 'Y') {
                goto repeate;  // Jump to the 'repeate' label to restart the menu
            } else {
                // If user presses any key other than 'Y', exit the loop
                cout << "\n\n\t\t_____**[ 'THANK YOU SO MUCH' ]**_____\n\n";
                break;  // Break the loop and end the program
            }
            break;  // Break the case for Addition



        // Case 2: Subtraction
        case 2:
            subtraction();  // Call the subtraction function
            // Ask if the user wants to perform another operation
            cout << "Any Other Operation you Want to Use ? ['Y' or 'N'-(Any key press)] : ";
            cin >> ch;

            // If user presses 'Y' or 'y', repeat the process
            if(ch == 'y' || ch == 'Y') {
                goto repeate;  // Jump to the 'repeate' label to restart the menu
            } else {
                // If user presses any key other than 'Y', exit the loop
                cout << "\n\n\t\t_____**[ 'THANK YOU SO MUCH' ]**_____\n\n";
                break;  // Break the loop and end the program
            }
            break;  // Break the case for subtraction



        // Case 3: Multiplication
        case 3:
            Multiplication();  // Call the multiplication function
            // Ask if the user wants to perform another operation
            cout << "Any Other Operation you Want to Use ? ['Y' or 'N'-(Any key press)] : ";
            cin >> ch;

            // If user presses 'Y' or 'y', repeat the process
            if(ch == 'y' || ch == 'Y') {
                goto repeate;  // Jump to the 'repeate' label to restart the menu
            } else {
                // If user presses any key other than 'Y', exit the loop
                cout << "\n\n\t\t_____**[ 'THANK YOU SO MUCH' ]**_____\n\n";
                break;  // Break the loop and end the program
            }
            break;  // Break the case for multiplication



        // Case 4: Division
        case 4:
            Division();  // Call the division function
            // Ask if the user wants to perform another operation
            cout << "Any Other Operation you Want to Use ? ['Y' or 'N'-(Any key press)] : ";
            cin >> ch;

            // If user presses 'Y' or 'y', repeat the process
            if(ch == 'y' || ch == 'Y') {
                goto repeate;  // Jump to the 'repeate' label to restart the menu
            } else {
                // If user presses any key other than 'Y', exit the loop
                cout << "\n\n\t\t_____**[ 'THANK YOU SO MUCH' ]**_____\n\n";
                break;  // Break the loop and end the program
            }
            break;  // Break the case for division



        // Default case: Invalid choice handling
        default:
            cout << "\n\n\t\t_____**[ 'Invalid choice' ]**_____\n\n";  // Display error message
            goto repeate;  // Jump to the 'repeate' label to restart the menu
    }

    return 0;  // End of the program
}

/*------------------------------------------------------------------['End of The Program'] -----------------------------------------------------------------------*/