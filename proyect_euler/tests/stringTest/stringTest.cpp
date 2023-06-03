#include <iostream>
#include <string>

int main(){

    std::string str = "Hello world!";
    for(int i = 0; i <= str.size()-1; i++){
        std::cout << str[i] << "\n";
    }


}