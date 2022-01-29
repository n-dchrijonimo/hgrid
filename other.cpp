include <string>
include "funcs.h"
  
using namespace std;

int positive_int_only(string inum){ //this function tests if input was of correct type.
    int number;
    int a=0; int b=0;
    int l=inum.length(); //length of inum, which is the string the value of the answer was passed to
    char chk; char cmp='0'; //the char cmp is set to 0.
    while(a<l){ //will evaluate each character in input
        chk=inum.at(a); //extracts the character at the currently evaluated position
        if(cmp!=chk){
            ++cmp; /*cmp is a char however char types can still be manipulated with numeric operators. Conveintly adding 1 to a char that's
            a numeral will increase the number the char represents by 1*/
            ++b;
        }
        if(cmp==chk){
            cmp='0';
            b=0;
            ++a;
        }
        if(b>9){
         
         /*since b is incremented each time chk was tested and found not to be a numeral, if it equals 9, that means all numerals have been
          tested. Thus, we can conclude that the input answer was not a positive integer*/
         
            num=-1;
         
            /*num is the return variable. If a positive integer was entered, num would be assigned the value of said integer and be returned.
            However if the entered value was not a positive integer, num is set to -1 and returned, so the calling function can know the wrong value was entered.
            More generally, a return value of -1 is often used in both c and c++ to indicate a process was not successful.*/
         
            a=l; //if a is equal to l, it is not less than l, so the loop breaks. Your computer is no longer a slave, it's shackles are unchained!
        }
    }
    if(num!=-1){
        num=stoi(inum); //stoi is a function in std that converts numeric streams to integer. Only works in c++11 and onwards
    }
    return num;
}
