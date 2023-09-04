                                // Loops

        /*> Iteration execution : allows a block of code to be executed multiple times based on a specified condition.
                            Loops
                            >> for
                            >> while
                            >> do-while  
        */

             
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
#include<iostream>
using namespace std;

int main()

// Example
{
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