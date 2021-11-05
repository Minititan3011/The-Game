#include <iostream>
int main(){
int calden; 

  std::cout << "Fuck you Calden.\n";
  std::cout << "What would you like Calden to do?\n"; //outputs for Calden

  std::cout << "1)" << " Get fucked.\n";
  std::cout << "2)" << " Suck a fat one.\n";
  std::cout << "3)" << " Go die.\n";
  std::cout << "4)" << " Go see your Dad. Oh wait. \n";
  //output for options relating to Calden.

  std::cin >> calden; //input for calden.

  if(calden == 1){
    std::cout << "Get fucked Calden.\n";

  }else if(calden == 2){
    std::cout << "Suck a fat one Calden.\n";

  }else if(calden == 3){
    std::cout << "Go die.\n";

  }else if ( calden == 4){
    std::cout << "Go see your Dad. Oh wait.";

  }else std::cout << "I thought Calden was stupid, but you couldn't even select a number between 1 and fucking 4. IDIOT.\n";
}