#include <iostream>
/*headers and libraries you've installed or that came with your operating system are located in a special system folder. Your compiler will
know to looks for them there, and you don't need to include the header file extension (though you can if you really want). When included they should be enclosed
 in less than and greater than signs.*/

#include <string>
#include "funcs.h" //when including a local header, the full file name is used, and it's enclosed in quotes instead of <>

using namespace std;

int main(){
  srand((unsigned int)time(NULL)); //sets rng seed
  int cyc=0;
  setup();
  populate(int x, int y);
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
  int cyc=0;
 
  /*we can make another variable called "cyc" here because in c++, variables declared in a function can only be accessed in said function,
  unless they are declared in a header or before the beginning of the main function (these are called global variables). This is known as a variable's scope*/
 
  string ans; //will store answer from input stream
  getline(cin, ans);
 
  /*will take the whole line. Normally spaces after characters end the cin function, and any characters after the space would remain
  in the buffer. Getline is a lot cleaner. More on this later*/
  
  inline 
       
  unsigned short *grid=new unsigned short[x*y]{0); //allocate a 1 d array of length x times y
}
