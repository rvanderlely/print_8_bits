/*
Name:       Rachel Vanderlerly
Due Date:   September 12 2022
Class:      Network Programming
Profesor:   Dr.Zhao
Assignment: Program 1
Description: This program uses 4 functions and a main function to print out all
possible combinations of 8 bits along with its respective hexidecimal and decimal digit. 
*/ 

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

//Function Prototypes
string generate_binary_string(int decimal);



int main()
{
    cout<<"Decimal:\tBinary:\t\tHexadecimal:\t"<<endl;

    for (int i = 0;i<256;i++)
    {
    cout << i << "\t\t" << generate_binary_string(i) << "\tFF:" << endl;
    }
    return 0;
}





/*
string generate_binary_string(int decimal)
Input: The decimal number you want to change to binary 
Output: Returns a string containing the binary number of the decmial passed in
*/
string generate_binary_string(int decimal)
{

    string binary_array[8]={"0","0","0","0","0","0","0","0"};
    string binary_string = "";
    int rem;
    int count = 7;

        while (decimal !=0)
        {
            rem = decimal %2;
            if (rem == 0)
            {
                binary_array[count] = "0";
            }
            else if (rem == 1)
            {
                binary_array[count] = "1";
            }
            decimal = (decimal/2);
            count--;
      
        }
    

    for (int i = 0; i <8; i++)
    {
        //cout<<binary_array[i];
        binary_string =  binary_string+ binary_array[i] ;
    }
    return binary_string;
}