                                /* <----------Classic_Calculator Use of Function----------> */

#include<iostream>
#include <iomanip>
#include<stdlib.h>
#include<string>
using  namespace std;

                  

// All integer Function Declaration ----->
void integer(); // Main Function of Integer !!!

void additional_int();  // Addition  Function----> ' + '
void subtraction_int(); // Subtraction  Function----> ' - '
void multiply_int(); // Multiply  Function----> ' * '
void divide_int();  // Divide  Function----> ' / '
void remender_int(); // Remender  Function----> ' % '
/* <--------------------------->*/





// All floating Function Declaration ----->
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
   
    int cho;

repeate:
    cout << "\n\t[ Classic Calculator ]";
     cout <<"\n----------------------------------------------";
     cout << "\n 1. Integer Value" << endl ;
     cout << "\n 2. Float Value" << endl ;
     cout <<"----------------------------------------------\n";
    cout << "Choice Any one Option: ";
    cin >>  cho;
    if(cho == 1)
    {
        integer();

    }
    else if(cho == 2) 
    {
        floating();

    }
else
{

cout << "\n\t<-----[!! Sorry Wrong choice !!]-----> ";
 goto repeate;

}
  return 0;

}





/* ---------------------------------------------------------------------------------------------------- */
                                 /*  <-----End Of  main() function----->  */








                        /* <----- All integer Function Definition -----> */






// Main Function of Integer !!!

void integer()
{
    char ch; 
cout << "\n\tOPERATOR---> [ + , - , * , / , % ]" << endl;
 repeate :
        cout << "\n Enter the Choose Operator any One : ";
        cin >> ch;
        if(ch == '+' || ch =='-' || ch =='*' || ch =='/' || ch =='%')
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
        default:
        cout << "Sorry Wrong Choise";
         break;
        }
     }

 else{
        cout << "\n\n\t!!! [ Sorry Wrong Choise ]----> Please Enter These Operators---> [ + , - , * , / , %  ]" << endl;
        goto repeate;
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
    if(num1_float != static_cast <long long int> (num1_float))
    {
      cout << "\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
      exit(0);

    }
    else
    {
        num1_int = static_cast <long long int> (num1_float);
    }



    cout << "\nEnter the Second Number: ";
    cin >> num2_float; 
    if(num2_float != static_cast <long long int> (num2_float))
    {

    cout << "\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    exit(0);

    }

    else
    {
        num2_int = static_cast <long long int> (num2_float);
    }



    ans = num1_int + num2_int;
    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]";

}






// Subtraction  Function----> ' - '

void subtraction_int()
{
    long double num1_float,num2_float;
    long long int  num1_int, num2_int;
    long long int ans;

    cout << "\nEnter the Frist Number : ";
    cin >> num1_float;
    if(num1_float != static_cast <long long int> (num1_float))
    {
      cout << "\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
      exit(0);

    }
    else
    {
        num1_int = static_cast <long long int> (num1_float);
    }



    cout << "\nEnter the Second Number: ";
    cin >> num2_float; 
    if(num2_float != static_cast <long long int> (num2_float))
    {

    cout << "\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    exit(0);

    }
    
    else
    {
        num2_int = static_cast <long long int> (num2_float);
    }


    ans = num1_int - num2_int;
    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]";

}






// Multiply  Function----> ' * '

void multiply_int()
{
    long double num1_float,num2_float;
    long long int  num1_int, num2_int;
    long long int ans;

    cout << "\nEnter the Frist Number : ";
    cin >> num1_float;
    if(num1_float != static_cast <long long int> (num1_float))
    {
      cout << "\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
      exit(0);

    }
    else
    {
        num1_int = static_cast <long long int> (num1_float);
    }


    cout << "\nEnter the Second Number: ";
    cin >> num2_float; 
    if(num2_float != static_cast <long long int> (num2_float))
    {
    cout << "\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    exit(0);
    }
    
    else
    {
        num2_int = static_cast <long long int> (num2_float);
    }


    ans = num1_int * num2_int;
    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]";
}






// Divide  Function----> ' / '

void divide_int()
{
    long double Dividend_float , Divisor_float;
    long long int  Dividend_int , Divisor_int;
    long double ans;


    repeate:
    cout << "\nEnter the Dividend Value : ";
    cin >> Dividend_float;
    if(Dividend_float !=  static_cast <long long int> (Dividend_float))
    {
    cout << "\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    exit(0);
    }
    else
    {
        Dividend_int = static_cast <long long int> (Dividend_float);
    }



    cout << "\nEnter the Divisor Value : ";
    cin >> Divisor_float; 
    if(Divisor_float !=  static_cast <long long int> (Divisor_float))
    {
    cout << "\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    exit(0);
    }
    else if(Divisor_float == 0)
    {
        cout << "\n\n\t Sorry---->[ Cannot be divide by 0 ]" << endl;
        goto repeate;
    }
    else
    {
        Divisor_int = static_cast <long long int> (Divisor_float);
    }


    ans = (double) Dividend_int / Divisor_int;
    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]";
}






// Remender  Function----> ' % '

void remender_int()
{

    long double Dividend_float , Divisor_float;
    long long int  Dividend_int , Divisor_int;
    long long int quotient_int,rem;
    string str;
    

    repeate:
    cout << "\nEnter the Dividend Value : ";
    cin >> Dividend_float;
    if(Dividend_float !=  static_cast <long long int> (Dividend_float))
    {
    cout << "\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    exit(0);
    }
    else
    {
        Dividend_int = static_cast <long long int> (Dividend_float);
    }



    cout << "\nEnter the Divisor Value : ";
    cin >> Divisor_float; 
    if(Divisor_float !=  static_cast <long long int> (Divisor_float))
    {
    cout << "\n\t[ !!!...Sorry Decimal Value is Not Supported...!!! ] " << endl;
    exit(0);
    }
    else if(Divisor_float == 0)
    {
        cout << "\n\n\t Sorry---->[ Cannot be divide by 0 ]" << endl;
        goto repeate;
    }
    else
    {
        Divisor_int = static_cast <long long int> (Divisor_float);
    }


    quotient_int = Dividend_int / Divisor_int;
    if(Dividend_int % Divisor_int == 0)
    {
        str = "[ even ]";
    }
    else 
    {
        str = "[ odd ]";
    }
    cout << "\n\t\t[ Quotient : " << quotient_int;
     rem = Dividend_int - quotient_int * Divisor_int;
    cout << "\n\n\t\tRemainder : " << rem << " ]"<<"--->"<< str;  
}





                                 /* <----- End Of integer Function -----> */










                                /* <----- All Floating Function Definition -----> */






// Main Function of Floating !!!

void floating()
{

char ch; 
cout << "\n\tOPERATOR---> [ + , - , * , / ]" << endl;
 repeate :
        cout << "\n Enter the Choose Operator any One : ";
        cin >> ch;
        if(ch == '+' || ch =='-' || ch =='*' || ch =='/')
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

        default:
        cout << "Sorry Wrong Choise";
         break;
        }
     }

 else{
        cout << "\n\n\t!!! [ Sorry Wrong Choise ]----> Please Enter These Operators---> [ + , - , * , / ]" << endl;
        goto repeate;
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
    ans =  (double) num1 * num2;
    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]";

 }






// Divide  Function----> ' / '

 void divide_float()
 {

    long double Dividend , Divisor;
    long double ans;
    repeate:
    cout << "\nEnter the Dividend Value : ";
    cin >> Dividend;
    cout << "\nEnter the Divisor Value : ";
    cin >> Divisor; 
    if(Divisor == 0)
    {
        cout << "\n\n\t Sorry---->[ Cannot be divide by 0 ]" << endl;
        goto repeate;
    }
    ans = (double) Dividend / Divisor;
    cout << setprecision(14) << "\n\t\t[Answer : " << ans << "]";

 }
 
 
 
 
 
                                /* <----- End Of Floating Function -----> */