#include <iostream>
#include <variant>
#include <string>
#include <cstdarg>

//source for print: https://www.geeksforgeeks.org/variadic-function-templates-c/

void print(){
    std::cout << "" << std::endl;
}

template <typename T, typename... Types>
void print(T firstArgument, Types... concurent){
    std::cout << firstArgument;
    std::cout << " ";
    print(concurent...);
}


int main(){
    std::cout << "witam" << std::endl;
    print(1,2,3,4, "dwadziescia osiem", 2137*420);

}
