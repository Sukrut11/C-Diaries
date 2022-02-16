#include <iostream>
using namespace std;
int main()
{
    int a; // declaration
    a = 12; // initialization
    cout<<"size of int: " <<sizeof(a)<<endl;


    float b; // declaration
    cout<<"size of float: "<<sizeof(b)<<endl;
    
    char c; // declaration
    cout<<"size of char: "<<sizeof(c)<<endl;
    
    bool d; // declaration
    cout<<"size of bool: "<<sizeof(d)<<endl;
    
    short int si;
    long int li;
    
    cout<<"size of shortint: "<<sizeof(si)<<endl;
    cout<<"size of longint: "<<sizeof(li)<<endl;
    
    return 0;
}


// Memory is a three dimensional cube in which each each cube is divided
// into small parts. Each part comprises of 1 byte, ie (8 bits).
// Integer data type stores 4 bytes or blocks of memory, character 
// data type stores 1 byte of memory.

/* Data types
1) Primitive Data types: Int, Float, Character, Boolean
2) Derived Data Types: Function, Array, Pointer, Reference
3) User Defined: Class, Structure, Union, Enum

Int datatype consists of 4 bytes of memory ie 32 bits of memory.
The maximum numbers that we can form with 1 bits is-
2^1 = 2
With 2 bytes- 2^2 - 1 = 3
With 3 bits is 2^3 - 1 = 8 - 1 = 7


# Size of float is 4 byte and it can store upto 7 digits of numbers
For double float the size is 8 byte and it can store upto 15 decimal digits.


If we want to store positive and negative numbers then we can Use
signed data type which has a range of -2,147,483,648 to 2,147,483,648.
But if we gonna use only positive numbers then we can use unsigned data types
The size of signed and unsigned is 4 bytes
If you want a long range then you can use long data type
For a short range you can use short data type which consists of 2 bytes of memory.
ie. -32768 to 32,767