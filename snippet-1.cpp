                                // Hello world program
/*  #include<iostream>
    using namespace std;

        ----> Both of them are called header files, generally used to add features in programs.
        ----> They act as a reference guide that tells your program about the names and rules
             it needs to follow, making code organization and reuse easier. 
        ----> 'cout' and 'cin' are used for input and output operations.
              They are defined as objects of the 'ostream' and 'istream' classes, respectively
              which are part of the 'standard library's iostream header'.
        ----> '<<' insertion operator used with 'cout', bits move from keyboard to memory/RAM.
        ----> '>>' extraction operator used with 'cin', bits move from memory/RAM to user's screen.
        
          

            syntax of function : 
                 " return-type  function-name()
                 {
                       ////////// body of funtion
                 } "


        ----> Except 'void' every return-type have a return value, which comes at the end of function body 
              terminates the function's execution.
        ---->  funtion-name  is given by user to call function in program.
        ----> (),parenthesis is used to add parameters(or arguments) with it's data type mentioned.
              and is separated by comma's if it is required in funtion.
        ----> {},anything(statements or instructions ) in curly braces is called 'block of code' or 'body of function'.
        ----> " Hello world! ", anything(statement,integer,character) written inside (" ")string will print as it is in terminal as output.
        ----> Point to be noted :
        > a ---> Here a is declared as variable
        > 'a' ---> Here a is declared as character constant
        > "a" ---> Here a is declared as a string constant

 */


// Program : 

#include<iostream>                  //"iostream" is a library, cin amd cout are objects of this library. 
using namespace std;                //allows you to access the members (variables, functions, classes, etc.) of the 'std'

int main()                          // 'int'--->return-type, 'main'--->function
{
    cout<<"Hello world! ";          // 'cout'--->character output, '<<'---> insertion operator, cout is used to display output in terminal.
    // output ---> Hello world
    return 0;                       // 'return 0'---> maens program is succesfully executed.
}