#include <iostream>
#include <string>
#include <vector>
#include <cmath>

bool is_integer(double n){

    if(n == static_cast<int>(n)){
        return true;
    }
    else{
    return false;
    }
}

int main(){

    double a = 1;
    double b = 1;
    double c;
    bool is_pythagorean_triple = false;
    int answer; 

    bool found = false;
    while(found == false){
        c = std::sqrt(std::pow(a,2) + std::pow(b,2));
        if(is_integer(c)){
            if(a + b + c == 1000){
                answer = a*b*c;
                std::cout << "Numbers are: " << a << ", " << b << ", " << c << "\n";
                std::cout << answer;
                found = true;
            }
        }
    
        if(a==b){
            a++;
            b = 1;
            continue; 
        }

        if(b<a){
            b++;
        }
    
    
    }

}