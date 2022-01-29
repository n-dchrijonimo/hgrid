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
  unsigned short *grid=new unsigned short[x*y]{0); //allocate a 1 d array of length x times y
  populate();
  while(cyc<x*y){
    if(grid[cyc]==0){
      cout<<"@";
    } else if(grid[cyc]==1) {
      cout<<"^";
    } else {
     cout<<""";
    }
    ++cyc;
    if(cyc%x==0){ //print the newline character when cyc is a multiple of x
      cout<<"\n";
    }
  }
 return 0; 
}

void setup{
 int cyc=0;
 
  /*we can make another variable called "cyc" here because in c++, variables declared in a function can only be accessed in said function,
  unless they are declared in a header or before the beginning of the main function (these are called global variables). This is known as a variable's scope*/
 
 int ans_num=0;
 string ans; //will store answer from input stream
 
 cout<<"Enter how long you want the grid to be. Positive numbers only please!\n";
 while(cyc<3){
  getline(cin, ans);
 
   /*will take the whole line. Normally spaces after characters end the cin function, and any characters after the space would remain
   in the buffer. Getline is a lot cleaner. More on this later*/
  
   ans_num=positive_int_only(ans);
  if(ans_num==-1){
   cout<<"Input was not a number. Please try again\n";
  } else if(cyc==0){
   x=ans_num;
   cout<<"Nice!\n\nNow enter how tall you want the grid to be!\n";
   ++cyc;
 } else if(cyc==1){
   y=ans_num;
  cout<<"Radical! That's a mighty fine grid! Now let's let 'er rip!\n";
 }
     
  
}
