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
    cout << "Hello, " + input <<endl;
  }
   return 0;
}