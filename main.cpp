/*Mokobia Jane Chidima, st135735@student.spbu.ru, 24.B83*/

#include "header.h"

int main(){
  string input;
  cout << "Hello World \n";

  while (true)
  {
    cout << "user_name:" ;
    getline(cin, input);

    if(input == "exit"){
        break;
    }
    /* Try to formalize this as a function */
    cout << "Hello, " + input <<endl;
  }
   return 0;
}
