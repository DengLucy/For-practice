#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
  int input1 = stoi(argv[1]);
  int input2 = stoi(argv[2]);
  int input3 = stoi(argv[3]);
  for(int i = 0; i < argc; i++){
    cout << argv[i] << endl; //outputs each elements inside argv (not address)
    cout << &argv[i] << endl; //outputs aderesses of first character in the string
    cout << (void *)&argv[i] << endl; // same as above: output address of first character in the string
    cout << *argv[i] << endl; //outputs value of the first character of that string: argv[i] is a pointer to the first character, 
                              //so dereferencing it will give the value to the first charcater
                            
    
  }
  return 0;
}
