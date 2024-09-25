// Let's work with the varaibles

So, in the c++ we can have multiple and different types of data such as integers, decimals, single characters, booleans and the strings

// To work with variables, we need to have:
// 1. declaration of types of varaibles
// 2. Assign name in declaration
// 3. values; yes

// Lets work with the integeres first
#include <iostream>
main int () {
    int x; // (1) Declaration of varaibles and (2) Name of varaibles  
    x = 5; // values assigned to varaible. 
    std::cout << x;
    return 0;
}

// Cool, We can directly assigned a value to varaibles at declaration line like following
#include <iostream>
int main () {
    int x = 15;
    std::cout << x;
    return 0;
}

//  How about working with multiple varaibles 
#include <iostream>
int main () {
    int x = 5;
    int y= 10;
    std::cout << x << "\n";
    std::cout << y;
    return 0; 
}

// We can also do maths operations 
#include <iostream>
int main () {
    int x = 52;
    int y= 102;
    int sum = x+y; // We can add -, * and division sign here. 
    std::cout << x << "\n";
    std::cout << y<< "\n";
    std::cout << sum;
    return 0; 
}

// Now we can work with decimals
// to work with decimals, we use double as declaration

#include <iostream>
int main () {
    double x = 7.5;
    double y = 2.5;
    double sum = x+y;
    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum;
    return 0;

}

// LET'S WORK WITH THE BOOLEANS
#include <iostream>
int main () {
    bool fees = false;
    std::cout << fees;
    return 0;
}


// CHARS
// #include <iostream>
// int main () {
//     char grades = 'A';
//     char section = 'H';
//     std::cout << grades << "\n";
//     std::cout << section;
//     return 0;
// }

// Lets work with the strings
#include <iostream>
// int main () {
//     std::string name = "My Name is Junaid Ahmed";
//     std::string country= "Pakistan";
//     std::string address = "Krochmalna 58/1"; 
//     std::cout << "What is your name? "<< name << " I am from " << country << " now, I live in " << address;
//     return 0;
// }

// All in one?
#include <iostream>
int main () {
    int age = 31;
    char grade = 'B';
    std::string qual = "degree";
    std::string name = "My name is Junaid Ahmed";
    std::cout << name << ", and I am " << age << " years old" << ", and I secured " << grade << " in my MBA " << qual;
    return 0; 
}


/*

NOW LETS WORK WITH THE CONST
So, there are situation in which we wanted our varaible's value to remain fix
These are constants such as value of alpha in regression, or pi values or anyother
these value either are constant but it can destroy entire calculation once these values are changed. 
So, to prevent thuer changing we can secify them into the costant varaibales

REMEMBER: the name of varibles will always be in the CAP SCAPE
           Secndly, we can have constant in either double or decimals or the integers 

*/
#include <iostream>
// int main () {
//     const int ALPHA = 55;
//     double beta = 13.5;
//     int x = 12;
//     const double ERROR= 2.5;
//     double y = ALPHA + beta + ERROR;
//     std::cout << y;
//     return 0;

// }

// A. lets define our #include <iostream> function
#include <iostream>
// B. Lets define the name space
namespace data {
    int vaccine = 55; 
}

namespace data {
    int climate = 65;

// now we can define
}
int main () {
    std::cout << data::climate;
    return 0;
}
// So, in above function, we have data but than we labelize it using cliamte and vaccine with help of namscaping data itself

// We can also have another way aronnd in which different namespace are used for same varaibles. 
#include <iostream>
namespace climate {
    int mean = 56;
}
namespace vaccine {
    int mean = 76;
}
// now lets execute 
int main () {
    std::cout << vaccine::mean << "\n";
    std::cout << climate::mean;
    return 0;
}
/*
Well defining the data and varaible types withinn function of variable declaration can be a problem. 
in may reuslts in typos and error which can create a bug in our code to resolve. 
what we can now do here is the fact we can use line of code by defining data type and give it alias name
so, we can use that name everytime we wanted to create a varaiable using the data type. 
For ex, In string  VAR we use std::string. we can give a name and than use that name insread of std::string. 
*/

// here how we can do
#include <iostream>
typedef std::string text_t;

int main () {
    text_t name = "junaid Ahmed Abbasi";
    std::cout << "My name is " << name;
    return 0;
}

// There is an another way of "USING" Keyword.
// Its like typedef but more people are now shifting towards the "USING" key instead of typedef
// here is how, we can do it
#include <iostream>
using text_t = std::string;

int main () {
    text_t name = "Hello World";
    std::cout << name;
    return 0;
}

