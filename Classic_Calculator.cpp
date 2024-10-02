                                /* <----------Classic_Calculator Use Of Function----------> */


//header file in C++ ------>
#include<iostream>
#include <iomanip>
#include<stdlib.h>
#include<string>
/* <------------------>*/


// use names for objects and variables from the standard library------>

using  namespace std;
/* <------------------>*/





// All integer Function Declaration ------>
void integer(); // Main Function of Integer !!!

void additional_int();  // Addition  Function----> ' + '
void subtraction_int(); // Subtraction  Function----> ' - '
void multiply_int(); // Multiply  Function----> ' * '
void divide_int();  // Divide  Function----> ' / '
void remender_int(); // Remender  Function----> ' % '
/* <--------------------------->*/





// All floating Function Declaration ------>
void floating(); // Main Function of Floating !!!

void additional_float(); // Addition  Function----> ' + '
void subtraction_float(); // Subtraction  Function----> ' - '
void multiply_float(); // Multiply  Function----> ' * '
void divide_float(); // Divide  Function----> ' / '
/* <--------------------------->*/




/* ---------------------------------------------------------------------------------------------------- */
                                 /*  <-----Start Of  main() function----->  */

int main()
{
   
long int cho;

repeate:
    cout << "\n\n\t[ Classic Calculator ]";
    cout <<"\n----------------------------------------------";
    cout << "\n 1. Integer Value" << endl ;
    cout << "\n 2. Float Value" << endl ;
    cout << "\n 3. EXIT"<<endl;
    cout <<"----------------------------------------------\n";
    cout << "Choice Any one Option: ";
    cin >>  cho;
    switch(cho)
    {
        case 1:
        integer();
        break;

        case 2:
        floating();
        break;

        case 3:
        cout<<"\n\t[ **Thanks for using my Classic Calculator**  ]\n"<< endl;
        exit(0);
        break;

        default:
        cout << "\n\n\t<-----[!! Sorry Wrong choice !!]----->\n\n";
        goto repeate;
        break;

    }

  return 0;

}





/* ---------------------------------------------------------------------------------------------------- */
                                 /*  <-----End Of  main() function----->  */








                        /* <----- All integer Function Definition -----> */






// Main Function of Integer !!!

void integer()
{
   
    while(true)
    {

    char ch; 
    cout << "\n\n\tOPERATOR---> [ + , - , * , / , % , < BACK ]" << endl;
    cout << "\n Enter the Choose Operator any One : ";
        cin >> ch;
        if(ch == '+' || ch =='-' || ch =='*' || ch =='/' || ch =='%' || ch == '<')
        {    
        switch (ch)
        {
        case '+':
            additional_int();
        break;
         case '-':
            subtraction_int();
        break;
         case '*':
            multiply_int();
        break;
         case '/':
            divide_int();
        break;

        case '%':
        remender_int();
        break;

        case '<':
        main();
        break;


        default:
        cout << "Sorry Wrong Choise";
        break;

    }
}

 else{
        
    cout << "\n\n\t!!! [ Sorry Wrong Choise ]----> Please Enter These Operators---> [ + , - , * , / , %  ]" << endl;
    cout << "\n\t\t\t[ **Please Run Again** ]\n"<<endl;
    exit(0);
        
    }

  }

}






// Addition  Function----> ' + '

void additional_int()
{
    long double num1_float,num2_float;
    long long int  num1_int, num2_int;
    long long int ans;



    cout << "\nEnter the Frist Number : ";
    cin >> num1_float;

    //This Condition Will check if the floating Value Exists  <----[Frist Number].
    if(num1_float != static_cast <long long int> (num1_float))
    {
      cout << "\n\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
      integer();

    }
    else
    {
        num1_int = static_cast <long long int> (num1_float);  // The first Number is assigned to the 'num1_int' variable. 
    }

/* --------------------------------------------------------------------------------------------------------------------------------*/

    cout << "\nEnter the Second Number: ";
    cin >> num2_float; 

    //This Condition Will check if the floating Value Exists  <----[Second Number].
    if(num2_float != static_cast <long long int> (num2_float))
    {

    cout << "\n\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    integer();

    }

    else
    {
        num2_int = static_cast <long long int> (num2_float); // The second Number is assigned to the 'num2_int' variable. 
    }

/* --------------------------------------------------------------------------------------------------------------------------------*/

    ans = num1_int + num2_int;  // The first number and the second number are assigend to the 'ans' variable by adding.

    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]";  // Print 'ans' variable.

}






// Subtraction  Function----> ' - '

void subtraction_int()
{
    long double num1_float,num2_float;
    long long int  num1_int, num2_int;
    long long int ans;



    cout << "\nEnter the Frist Number : ";
    cin >> num1_float;

    //This Condition Will check if the floating Value Exists  <----[Frist Number].
    if(num1_float != static_cast <long long int> (num1_float))
    {
      cout << "\n\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
      integer();

    }
    else
    {
        num1_int = static_cast <long long int> (num1_float);  // The first Number is assigned to the 'num1_int' variable. 
    }

/* --------------------------------------------------------------------------------------------------------------------------------*/

    cout << "\nEnter the Second Number: ";
    cin >> num2_float; 

    //This Condition Will check if the floating Value Exists  <----[Second Number].
    if(num2_float != static_cast <long long int> (num2_float))
    {

    cout << "\n\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    integer();

    }
    
    else
    {
        num2_int = static_cast <long long int> (num2_float);  // The second Number is assigned to the 'num2_int' variable. 
    }

/* --------------------------------------------------------------------------------------------------------------------------------*/
    
    ans = num1_int - num2_int;  // The first number and the second number are assigend to the 'ans' variable by Subtract.

    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]";  // Print 'ans' variable.

}






// Multiply  Function----> ' * '

void multiply_int()
{
    long double num1_float,num2_float;
    long long int  num1_int, num2_int;
    long long int ans;



    cout << "\nEnter the Frist Number : ";
    cin >> num1_float;

    //This Condition Will check if the floating Value Exists  <----[Frist Number].
    if(num1_float != static_cast <long long int> (num1_float))  
    {
      cout << "\n\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
     integer();

    }
    else
    {
        num1_int = static_cast <long long int> (num1_float); // The first Number is assigned to the 'num1_int' variable. 
    }

/* --------------------------------------------------------------------------------------------------------------------------------*/

    cout << "\nEnter the Second Number: ";
    cin >> num2_float; 

    //This Condition Will check if the floating Value Exists  <----[Second Number].
    if(num2_float != static_cast <long long int> (num2_float)) 
    {
    cout << "\n\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    integer();
    }
    
    else
    {
        num2_int = static_cast <long long int> (num2_float); // The second Number is assigned to the 'num2_int' variable. 
    }

/* --------------------------------------------------------------------------------------------------------------------------------*/

    ans = num1_int * num2_int; // The first number and the second number are assigend to the 'ans' variable by multiply.

    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]"; // Print 'ans' variable.
}






// Divide  Function----> ' / '

void divide_int()
{
    long double Dividend_float , Divisor_float;
    long long int  Dividend_int , Divisor_int;
    long double ans;


    
    cout << "\nEnter the Dividend Value : ";
    cin >> Dividend_float;

    //This Condition Will check if the floating Value Exists  <----[Frist Number].
    if(Dividend_float !=  static_cast <long long int> (Dividend_float)) 
    {
    cout << "\n\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    integer();
    }
    else
    {
        Dividend_int = static_cast <long long int> (Dividend_float);  // The first Number is assigned to the 'num1_int' variable. 
    }

/* ----------------------------------------------------------------------------------------------------------------------------------------*/

    cout << "\nEnter the Divisor Value : ";
    cin >> Divisor_float; 

    //This Condition Will check if the floating Value Exists  <----[Second Number].
    if(Divisor_float !=  static_cast <long long int> (Divisor_float)) 
    {
    cout << "\n\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    integer();
    }
    else if(Divisor_float == 0) // This condition will work if a number is divided by Zero(0).
    {
        cout << "\n\n\t Sorry---->[ Cannot be divide by 0 ]" << endl;
        integer();
    }
    else
    {
        Divisor_int = static_cast <long long int> (Divisor_float); // The second Number is assigned to the 'num2_int' variable. 
    }

/* ----------------------------------------------------------------------------------------------------------------------------------------*/

    ans = (double) Dividend_int / Divisor_int;  // The first number and the second number are assigend to the 'ans' variable by divide.
    
    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]"; // Print 'ans' variable.
}






// Remender  Function----> ' % '

void remender_int()
{

    long double Dividend_float , Divisor_float;
    long long int  Dividend_int , Divisor_int;
    long long int quotient_int,rem;
    string str;
    

   
    cout << "\nEnter the Dividend Value : ";
    cin >> Dividend_float;

    //This Condition Will check if the floating Value Exists  <----[Frist Number].
    if(Dividend_float !=  static_cast <long long int> (Dividend_float)) 
    {
    cout << "\n\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    integer();
    }
    else
    {
        Dividend_int = static_cast <long long int> (Dividend_float); // The first Number is assigned to the 'num1_int' variable. 
    }

/* ----------------------------------------------------------------------------------------------------------------------------------------*/

    cout << "\nEnter the Divisor Value : ";
    cin >> Divisor_float; 

    //This Condition Will check if the floating Value Exists  <----[Second Number].
    if(Divisor_float !=  static_cast <long long int> (Divisor_float))  
    {
    cout << "\n\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    integer();
    }
    else if(Divisor_float == 0) // This condition will work if a number is divided by Zero(0).
    {
        cout << "\n\n\t Sorry---->[ Cannot be divide by 0 ]" << endl;
        integer();
    }
    else
    {
        Divisor_int = static_cast <long long int> (Divisor_float); // The second Number is assigned to the 'num2_int' variable. 
    }


    quotient_int = Dividend_int / Divisor_int;  // The Quotient is assigned to the 'quotient_int' variable.

    if(Dividend_int % Divisor_int == 0)  // This condition will work number is even or odd.
    {
        str = "[ even ]";
    }
    else 
    {
        str = "[ odd ]";
    }

/* ----------------------------------------------------------------------------------------------------------------------------------------*/

    cout << "\n\t\t[ Quotient : " << quotient_int; // print 'Quotient' 

    rem = Dividend_int - quotient_int * Divisor_int;  // The first number and the second number are assigend to the 'ans' variable by remender.

    cout << "\n\n\t\tRemainder : " << rem << " ]"<<"--->"<< str;  // Print 'ans' variable.
}





                                 /* <----- End Of integer Function -----> */










                                /* <----- All Floating Function Definition -----> */






// Main Function of Floating !!!

void floating()
{

while(true)
{
char ch; 
cout << "\n\n\tOPERATOR---> [ + , - , * , / , < BACK ]" << endl;
 
        cout << "\n Enter the Choose Operator any One : ";
        cin >> ch;
        if(ch == '+' || ch =='-' || ch =='*' || ch =='/' || ch == '<')
        {    
        switch (ch)
        {

        case '+':
            additional_float();
        break;


         case '-':
            subtraction_float();
        break;


         case '*':
            multiply_float();
        break;


         case '/':
            divide_float();
        break;

        case '<':
        main();
        break;


        default:
        cout << "Sorry Wrong Choise";
         break;
        }
    }

 else{
        cout << "\n\n\t!!! [ Sorry Wrong Choise ]----> Please Enter These Operators---> [ + , - , * , / ]" << endl;
        cout << "\n\t\t\t[ **Please Run Again** ]\n"<<endl;
        exit(0);
    }

}
}






// Addition  Function----> ' + '

void additional_float()
{
     long double num1;
     long double num2;
     long double ans;
    cout << "\nEnter the Frist Number : ";
    cin >> num1;
    cout << "\nEnter the Second Number: ";
    cin >> num2; 
    ans =  (double) num1 + num2;
    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]";
}






// Subtraction  Function----> ' - '

void subtraction_float()
{

    long double num1;
    long double num2;
    long double ans;
    cout << "\nEnter the Frist Number : ";
    cin >> num1;
    cout << "\nEnter the Second Number: ";
    cin >> num2; 
    ans = (double) num1 - num2;
    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]";


}






// Multiply  Function----> ' * '

 void multiply_float()
 {

    long double num1;
    long double num2;
    long double ans;
    cout << "\nEnter the Frist Number : ";
    cin >> num1;
    cout << "\nEnter the Second Number: ";
    cin >> num2; 
    ans =   num1 * num2;
    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]";

 }






// Divide  Function----> ' / '

 void divide_float()
 {

    long double Dividend , Divisor;
    long double ans;

    cout << "\nEnter the Dividend Value : ";
    cin >> Dividend;
    cout << "\nEnter the Divisor Value : ";
    cin >> Divisor; 
    if(Divisor == 0) // This condition will work if a number is divided by Zero(0).
    {
        cout << "\n\n\t Sorry---->[ Cannot be divide by 0 ]" << endl;
        floating();
    }
    ans = (double) Dividend / Divisor;
    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]";

 }
 
 
 
 
 
                                /* <----- End Of Floating Function -----> */