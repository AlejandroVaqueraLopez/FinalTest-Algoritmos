//Student: Alejandro Vaquera Lopez
//Exercise: Fibonacci sequence
#include <iostream>

void Fibonacci(int limit, int stNum, int ndNum, int aux) {
  if(aux <= limit){
    //std::cout<<"stNum: "<<stNum<<"\n";
    //std::cout<<"ndNum: "<<ndNum<<"\n";
    aux = stNum + ndNum; // 0 + 1 = 1
    stNum = ndNum;//1
    ndNum = aux; //1

    std::cout << aux << ",";
    //
    Fibonacci(limit, stNum, ndNum, aux);  
  }
}

int main() {
  //Elements
  int limit = 0;
  int stNum = 2;
  int ndNum = 3;
  int aux = 0;
  
  std::cout << "Insert a limit for the fibonacci range:";
  std::cin >> limit;

  //printing first 2 elements of sequence
  std::cout << "{";
  std::cout << stNum;
  std::cout << ",";
  std::cout << ndNum;
  std::cout << ",";

  //call the recursive function
  Fibonacci(limit, stNum, ndNum, aux);
  std::cout << "}";
  
  std::cout << "\nEnd of program";
  
  return 0;
}