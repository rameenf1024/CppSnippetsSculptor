                            // Variables and Data types
/*      
        ----> Variables : stores value/data, e.g; it works as a container.
        ----> type of 'variable' depends upon type of data/value 
        ----> Rules for making variable : 
            > variable must start with an alphabet(capital or small) and underscore'_'.
            > As c++ is case sensitive, a variable with capital letter and a varialbe with samll letter 
                both will be treated as  different 2 variables (myname, myName)   
            > Integers can be used in variable name but after an alphabet or underscore(a1,a2,_3)
            > Reseved words cannot be used as variable name ('int', 'float', 'char', 'if')   

        ----> Local/Global variables : 
            > Global variables ---> declared outside the function, and are accessible anywhere in the program.        
            > Local variables ---> defined inside the function, so it can only be accessed inside that function.

        ----> Data types :  which indicates the type of data.
            > Integer type :
                int ---> Used to store whole numbers (10, -5, 0)
                short ---> Similar to int, but typically takes less memory.
                long ---> Similar to int, but usually takes more memory and can represent larger values.
                long long ---> Similar to long, but provides an even wider range of values.

            > Floating-Point Types:
                float ---> Used to store decimal numbers with single precision (3.14, -2.5)
                double ---> Similar to float, but with double precision and a wider range of values.
                long double ---> Similar to double, but with extended precision.    

            > Character Types:
                char ---> Used to store individual characters, such as 'a', '5', '!'.
                wchar_t ---> Used to store wide characters, often used for internationalization.
                char16_t and char32_t ---> Used to store Unicode characters.   

            > Boolean Type:
                bool ---> Represents a logical value and can be either true or false.
                False = 0 and True = 1

            > Void Type:
                void ---> Indicates the absence of a type. Used for functions that do not return a value.

            > Miscellaneous Types:
                string ---> Represents a sequence of characters (a string of text, "hello","goodnight").
                nullptr ---> Represents a null pointer.
                size_t ---> Used for sizes and indices        

        ----> User defined data-types are :
            > Struct
            > Union Enum

        ----> Derived Data Types are : 
            > Arrey
            > Pointer 
            > Function
            > Reference                         


            syntax to declare a variable : 
                "    data-type variable-name = data   "  
*/    

//  Example :
#include<iostream>
using namespace std;

int main()
{
// Using int data-type :
    int number = 45;
    cout<<" The Number is : "<<number<<endl;         //endl ---> means this line end's here,which prints next statement on next line
   // output ---> The number is 45


 // Using float data-type: 
    float f;
    f = 34.5;
    cout<<"The Number is : "<<f<<endl;
    // output ---> The Number is 34.5


// Using string data-type : 
    string  greeting = "Good Morning";
    cout<<"Heyy! buddy "<<greeting<<endl; 
    // output ---> Heyy! buddy Good Morning


// Using character data-type :
    char  v1,v2,v3,v4,v5;  
    v1 = 'a';
    v2 = 'e';
    v3 = 'i';
    v4 = 'o';
    v5 = 'u';
     cout<<"vowels are : "<<v1<<","<< v2<<"," << v3<<","<< v4<<","<< v5<<endl;
    // output ---> vowels are : a,e,i,o,u

// Taking a variable's value or data by user : 
// Example 1 : 
int n1,n2;
cout<<"First number is ";
cin>>n1;
cout<<"Second number is ";
cin>>n2;
cout<<endl;   
/* output ---> First number is 14
               Second number is 54 */

// Example 2 :
string name;
cout<<"What's up ";
cin>>name;
// output ---> Whats up jenny

return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------
//Example of same Local and global varaible
#include<iostream>
using namespace std;
int num = 05;                               // Global variable

int main()
{
    int num = 45;                           // Local Variable
    cout<<" Value is "<<num <<endl;            // output ---> 45 

// To call global variable 'scope of resolution operator is used (::)'
    cout<<" Value of  Local variable is  "<<num <<endl;         //output ---> 45
    cout<<" Value of global variable is  "<<::num <<endl;       //output --->05

    return 0;
}