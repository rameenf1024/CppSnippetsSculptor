                                // script contents
        
        /*      ----> Execution Flow : the order in which statements are executed in a program. 
                ----> There are three typoes of execution flow.
                        > Sequential execution : executes statements sequentially from top to bottom. 
                            Each statement is executed one after another, following the order they appear in the code. 

                        > Conditional execution : allows the program to make decisions based on certain conditions. 
                            Conditional statements :
                            >> if 
                            >> if else
                            >> nested if
                            >> if else if
                            >> switch

                        > Iteration execution : allows a block of code to be executed multiple times based on a specified condition.
                            Loops
                            >> for
                            >> while
                            >> do-while
        
        */
//------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;

int main()
{
                        // Conditional Statements

/*          syntax for if : 
                    if (condition) 
                        {
                            // Code to be executed if the condition is true
                        }
*/

// Example 
int num1 = 10;

if (num1> 0)
 {
     cout << "The number is positive." <<endl;
 }
 // output ---> The number is positive.
 //---------------------------------------------------------------

 /*         syntax for if else :
                if (condition)
                {
                    // Code to be executed if the condition is true
                } 

                else
                {
                    // Code to be executed if the condition is false
                }
 */

// Example 
    int num2 = -10;

if (num2 > 0) 
{
    cout << "The number is positive." << endl;
} else 
{
    cout << "The number is negative." << endl;
}
// output ---> The number is negative.
//-------------------------------------------------------------------

/*              syntax for nested if :
                    if (condition1) 
                    {
                        // Code to be executed if condition1 is true

                     if (condition2)
                        {
                         // Code to be executed if both condition1 and condition2 are true
                        }

                        else
                        {
                         // Code to be executed if condition1 is true but condition2 is false
                        }

                    }
                    else 
                    {
                        // Code to be executed if condition1 is false
                    }
*/

// Example
int n;
cout<<" Enter Number : ";
cin>>n;

if (n > 0) 
{
    cout << "The number is positive." << endl;

    if (n % 2 == 0) 
    {
        cout << "The number is even." << endl;
    }
    
     else 
    {
        cout << "The number is odd." << endl;
    }

} 
else
 {
    cout << "The number is negative." << endl;
 }

 //---------------------------------------------------------------

 /*             syntax for if else if :
                        if (condition1)
                        {
                            // Code to be executed if condition1 is true
                        }
                        else if (condition2) 
                        {
                            // Code to be executed if condition1 is false and condition2 is true
                        } 
                        else if (condition3) 
                        {
                            // Code to be executed if condition1 and condition2 are false and condition3 is true
                        }

                        else 
                        {
                            // Code to be executed if all conditions are false
                        }
 */

// Example
int number;
cout<<"Enter Number : ";
cin>>number;          

    if(number > 0)                         
        cout<<number<<" is a positive number."<<endl;
        
     else if (number < 0)                     
        cout<<number<<" is a negative number."<<endl;

     else                                  
        cout<<" 0 is nither positive nor negative number."<<endl;

//-----------------------------------------------------------------------

/*              syntax for switch :
                        switch (expression) 
                        {
                            case value1:
                                // Code to be executed if expression matches value1
                                break;
                            case value2:
                                // Code to be executed if expression matches value2
                                break;
    
                        default:
                             // Code to be executed if expression doesn't match any case
                        }
*/

// Example
char gender;
cout<<" Press 'M' for male and 'F' for female : ";
cin>>gender;

switch(gender)
{
    case 'M':
    cout<<"You are welcome in Male team."<<endl;
    break;
    case 'F':
    cout<<"You Are welcome in Female team."<<endl;
    break;

    default:
        cout<<"Invalid character!"<<endl;
}

//------------------------------------------------------------------------------------------------------------------------------------
                            // Loops
/*          ----> pre-conditional : First condition check if it,s true then execution takes place.
                    > foor loop
                    > while-loop
            ----> post-conditional : First execution takes place and then condition is checked.
                    > do-while loop
*/

/*          syntax for for loop :
                    for (initialization; condition; update) 
                    {
                        // Code to be executed
                    }
*/

// Example
int s,f;
f=1;
cout<<"Enter a Number : ";
cin>>s;

for(int i=1 ; i<= s; i++)
{
    f=f*i;
}
cout<<"Factorial of "<<s<<" is : "<<f<<endl;

//----------------------------------------------------------------

/*                  syntax for while loop :
                            while (condition) 
                            {
                                 // Code to be executed
                            }
*/

// Example
int t;
cout<<" Enter Number : ";
cin>>t;

int i = 1;
while(i<=10)
{
    cout<<t<<" x "<<i<<" = "<<t*i<<endl;
    i++;
}

//-----------------------------------------------------------

/*                  syntax for do-while loop :
                        do 
                        {
                            // Code to be executed
                        } 
                        while (condition);
*/

// Example 

int i = 1;

do 
{
    cout << i << endl;
    i++;
}
while (i <= 5);

return 0;
}