#include <iostream>
#include 

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
  
}
