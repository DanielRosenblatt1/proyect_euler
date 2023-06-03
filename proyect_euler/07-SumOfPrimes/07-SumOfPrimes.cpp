#include <iostream>
#include <vector>

void get_next_prime(std::vector<long long int>& primes){

    std::vector<long int> new_list;
    long long int max_prime;
    bool found = false;
    bool is_prime = true;

    max_prime = primes[primes.size()-1];

    while(found == false){



        max_prime ++;

        for(auto prime: primes){

            if(max_prime % prime == 0){
                is_prime = false;
                break;
                /*not found*/
            }   

            is_prime = true;

        }

        if(is_prime == true){
            primes.push_back(max_prime);
            found = true;
        }


    }
}

void is_prime(long long int prime){

    for(long long int i = 2; i <= prime/2; i++){
        if(prime%i == 0){
            std::cout << "Not a prime!";
            return;
        }
    }

    std::cout << "Is a prime!";
    return;



}

int main(){

    int currentPrime = 2;
    std::vector<long long int> primes;
    int counter = 0;

    primes.push_back(2);


    while(primes.size() < 10001){

        get_next_prime(primes);
    
        

    }
    std::cout << primes[primes.size()-1] << ", ";



}