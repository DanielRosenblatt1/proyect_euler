#include <iostream>
#include <vector>

int main() {

    std::vector<int> lista; 

    for(int i = 1; i<=20; i++){
        lista.push_back(i);
    }

    for(auto i: lista){
        std::cout << i << ", ";
    }

    lista[0] = 25553;

    for(auto i: lista){
        std::cout << i << ", ";
    }


}