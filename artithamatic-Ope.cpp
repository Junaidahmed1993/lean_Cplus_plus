#include <iostream>

int main () 
{
    int student = 20; // Suppose, we have 1 variables with define value
    
    // Now, we want to do certain arithmatic operations 

    // 1. Additions
    // student = student +3;
    // student++ // This will only add 1 number. 

    // 2. Substractions
    // student = student -3;
    // student--; // This will only substract 1 number from total. 

    // 3. Multiplications. 
    // student = student*2;

    // 4. Division 
    // student = student /2;

    // 4.1. Division for remainder varaible
    // As out student varaibles is in the integer, we need to convert into double declaration
    // double studentss = 20; // so that we have the results on decimals 
    // studentss = studentss/3;
    // std::cout << studentss;

    // 4.2. Remainder from division
    // We can create the remainder from the division from the operation
    // We can do it usng the int remainder operation
    int remainder = student % 3 ; 
    std::cout << remainder;



    // std::cout << student; // we coommented this line for double declaratoion varailes 
    return 0;

}
