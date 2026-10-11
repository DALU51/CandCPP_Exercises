#include <iostream>
#include "count.h"
using namespace std;

int main(){

  person* y = new person;
  
  cout << "What is your full name? ";
  
  getline(cin , y->OGname);
  *y = cleaner(y->OGname);

  cout << "Hi "<< y->name.data() << ", nice to meet you!\n" ;
  cout << "Your name is " << y->cleanSize << " characters long.\n";
  
  delete y;
  return 0;
}