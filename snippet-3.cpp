                            // Contents 
/*
        ----> Operators
            > Aritmetic Operators
            > Increment/Decrement Operators 
            > Assignments Operators
            > Comparison or Relational Operators 
            > Logical Operators 
            > Bitwise Operators


*/
//------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;

int main()
{                   // Arithmetic Operator(+,-,*,/,%) , used for arithmatic operations
/*          > + ---> is used for addition
            > - ---> is used for subtraction
            > * ---> is used for multiplication 
            > / ---> is used for division
            > % ---> used to get reminder
*/   

int num1,num2;
    cout<<"Enter Number 1 : " ;                 // 54
    cin>>num1 ;  
    cout<<"Enter Number 2 : " ;                 // 6
    cin>>num2;

    cout<<" Number 1 + Number 2 = "<<num1 + num2 <<endl;        //output ---> 60                 
    cout<<" Number 1 - Number 2 = "<<num1 - num2 <<endl;        //output ---> 48
    cout<<" Number 1 * Number 2 = "<<num1 * num2 <<endl;        //output ---> 324    
    cout<<" Number 1 / Number 2 = "<<num1 / num2 <<endl;        //output ---> 9
    cout<<" Number 1 % Number 2 = "<<num1 % num2 <<endl;        //output ---> 0

//-------------------------------------------------------------------------------------------------------------------------------

                            // Increment/Decrement Operator(++/--),inreases or decreases value of variable by 1

    /*      ----> Only difference in post and pre is :
                > post : Increases/Decreases the value of a variable by 1.
                > pre : Increases/Decreases the value of a variable by 1 before using its current value.
    */

    // post increment 
    int w=10;
    w++;                    // x = x+1 or x+=1 

     cout<<" Value of w is "<<w<<endl ;      // output ---> Value of w is 11  

    // pre increment
    int x = 14;
    ++x;

     cout<<" Value of x is "<<x<<endl ;      // output ---> Value of x is 15

    // post decrement
    int y = 23;
    y--;
     cout<<" Value of y is "<<y<<endl ;      // output ---> Value of y is 22

    // pre decrement 
    int z = 54;
    --z;
     cout<<" Value of z is "<<z<<endl ;      // output ---> Value of z is 53     


//-----------------------------------------------------------------------------------------------------------------------------------

                            // Assignment Operators(=,+=,-=,/=,*=,%=), used to assign values to variable 

    int a,b,c;
    a = 5;
    cout<<" Value of a is "<<a<<endl ;      // output ---> Value of a is 5

    a += 5;
    cout<<" Value of a is "<<a<<endl ;      // output ---> Value of a is 10                   

    a -= 3;
     cout<<" Value of a is "<<a<<endl ;      // output ---> Value of a is 7( because 'a' becomes 10 in previous step )

    b = 10;
    b *= 1;
     cout<<" Value of b is "<<b<<endl ;      // output ---> Value of b is 10

     b /= 2;
      cout<<" Value of b is "<<b<<endl ;      // output ---> Value of b is 5

    c = 58;
    c %=6;
     cout<<" Value of c is "<<c<<endl ;      // output ---> Value of c is 4

//----------------------------------------------------------------------------------------------------------------------------------------

                             // Comparison/Relational Operators (<,<=,>,>=,!=,==)
/*      ----> Always gives output in form of True or False.
                > False = 0
                > True = 1
*/    

int s,t;
    s = 70;
    t = 55; 
   
    cout<<" If s == t  "<<(s==t)<<endl;                         // output --->  0, False   
    cout<<" If s != t  "<<(s!=t)<<endl;                         // output --->  1, True
    cout<<" If s < t  "<<(s<t)<<endl;                          // output --->   0, False
    cout<<" If s > t  "<<(s>t)<<endl;                           // output --->  1, True
    cout<<" If s<= t  "<<(s<=t)<<endl;                          // output --->  0, false
    cout<<" If s>= t  "<<(s>=t)<<endl;                          // output --->  1, True

//--------------------------------------------------------------------------------------------------------------------------------

                        // Logical Operators(&&,||,!)
    /*     
            ----> And operator(&&), when both the conditions are true then only it gives output True,or else it will be False.
            ----> Or operator(||), when one of the condition is true, it will give True.
            ----> Not operator (!), it changes the actuall answer, if answer is True it will change it to False and same for other.
            ----> False = 0
            ----> True = 0
    */

        int m,n;
        m = 10;
        n = 20;
        cout<<((m==n) && (m<n))<<endl;                     // output ---> 0,False ('m==n' is false that is why it's false)
        cout<<((m==n) || (m<n))<<endl;                    // output ---> 1, True ('m<n' is true so that answer is true)
        cout<<!(m==n)<<endl;                             // output ---> 1, True (Actually false)

//--------------------------------------------------------------------------------------------------------------------------------

                            // Bitwise Operator(&,|,^,~,<<,>>)
    /*              ----> And(&), If both bits are 1, the result is 1; otherwise, it is 0.
                    ----> Or(|), If at least one of the bits is 1, the result is 1; otherwise, it is 0.
                    ----> Xor(^), If the bits are different (one is 0 and the other is 1), the result is 1; otherwise, it is 0.
                    ----> Not(~), It flips each bit of the operand, changing 1 to 0 and 0 to 1.
                    ----> Left shift(<<), Shifts the bits of the left operand to the left by the number of positions specified by the right operand.
                             The vacant bits are filled with zeros.
                    ----> Right shift(>>), Shifts the bits of the left operand to the right by the number of positions specified by the right operand. 
                            The vacant bits are filled based on the type of the left operand (sign extension for signed types, zero 
                            extension for unsigned types).
    */

    int a = 5;                          // Binary: 0101
    int b = 3;                          // Binary: 0011

    int r1 = a & b;                 // Binary: 0001 (Decimal: 1)
    int r2 = a | b;                 // Binary: 0111 (Decimal: 7)
    int r3 = a ^ b;                 // Binary: 0110 (Decimal: 6)
    int r4 = ~a;                    // Binary: 1010 (Decimal: -6)
    int r5 = a << 2;                // Binary: 010100 (Decimal: 20)
    int r6 = a >> 1;                // Binary: 0010 (Decimal: 2)

//------------------------------------------------------------------------------------------------------------------------------------
                        // Ternary Operator(?:)
/*  
                ----> The ternary operator (?:),is a conditional operator that
                      allows you to make decisions and choose between two expressions based on a condition.

                ----> syntax : 
                        (condition) ? expression1 : expression2;

                ----> If the condition is true, expression1 is evaluated and becomes the result of the entire expression.
                     Otherwise, if the condition is false, expression2 is evaluated and becomes the result.        

*/

    int num ;
    cout<<" Enter any number : "<<endl;
    cin>>num;

  // Check if the number is even or odd using the ternary operator
  string result = (num % 2 == 0) ? "Even" : "Odd";

  cout << "The number is " << result << endl;       

    return 0;
}
