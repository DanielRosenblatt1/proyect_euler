#include <iostream>
#include <vector>
#include <cmath>

int sum_of_squares(long long int n){

    int sum = 0;

    for(int i = 1; i<= n; i++){
        sum = sum + std::pow(i,2);
    }

    return sum;
}

int square_of_sum(long long int n){

    int sum = 0;

    for(int i = 1; i<= n; i++){
        sum = sum + i;
    }
    
    sum = std::pow(sum, 2);

    return sum;
}


int main(){

    int n = 100;
    long long int sumSquares;
    long long int squaresSum;
    long long int answer;

    std::cout << "Mu1 \n";
    sumSquares = sum_of_squares(n);
    std::cout << "Mu2 \n";
    squaresSum = square_of_sum(n);
    std::cout << "Mu3 \n";

    answer =  squaresSum - sumSquares;

    
    std::cout << answer;



}