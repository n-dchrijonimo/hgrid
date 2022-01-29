#include <iostream>
#include <string>
#include "funcs.h"

using namespace std;

int main(){
  srand((unsigned int)time(NULL)); //sets rng seed
  int cyc=0;
  setup();
  while(cyc<x*y){
    if(grid[cyc]==0){
      cout<<"@";
    } else if(grid[cyc]==1) {
      cout<<"^";
    }
    ++cyc;
    if(cyc%x==0){
      cout<<"\n";
    }
  }
 return 0; 
}

void setup{
  int cyc=0; /*we can make another variable called "cyc" here because in c++, variables declared in a function can only be accessed in said function,
  unless they are declared in a header or before the beginning of the main function (these are called global variables). This is known as a variable's scope*/
  string ans; //will store answer from input stream
  getline(cin, ans); /*will take the whole line. Normally spaces after characters end the cin function, and any characters after the space would remain
  in the buffer. Getline is a lot cleaner. More on this later*/
  
  inline int positive_int_only(string inum){ //this function tests if input was of correct type. It is an inline function.
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
        if(b>9){ /*since b is incremented each time chk was tested and found not to be a numeral, if it equals 9, that means all numerals have been
          tested. Thus, we can conclude that the input answer was not a positive integer*/
            num=-1;
            /*num is the return variable. If a positive integer was entered, num would be assigned the value of said integer and be returned.
            However if the entered value was not a positive integer, num is set to -1 and returned, so the calling function can know the wrong value was entered.
            More generally, a return value of -1 is often used in both c and c++ to indicate a process was not successful.*/
            a=l;
        }
    }
    if(num!=-1){
        num=0;
    }
    return num;
}
       
  unsigned short *grid=new unsigned short[x*y]{0); //allocate a 1 d array of length x times y
}
