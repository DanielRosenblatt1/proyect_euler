#include <iostream>
#include <vector>

void get_next_prime(std::vector<int>& primes){

    bool found = false;
    int cprime = primes[primes.size()-1];
    bool is_prime = false;

    while(found != true){
        
        cprime ++;

        for(int i = 0; i < primes.size(); i++){
            if(cprime % primes[i] == 0){
                found = false;
                break;
            }
            else{
                found = true;
            }
        }
        if(found == true){
            primes.push_back(cprime);
            return;
        }


    }

}

int main(){

    bool done = false;
    std::vector<int> primes;
    long long int sum = 0;



    primes.push_back(2);
    while(done == false){
        
        if(primes[primes.size()-1] > 2000000){
        break;

        }   
        
        get_next_prime(primes);
    
    }

    std::

    for(auto j: primes){
        if(j < 2000000){
            sum += j;
        }
    }

    std::cout << sum;

}