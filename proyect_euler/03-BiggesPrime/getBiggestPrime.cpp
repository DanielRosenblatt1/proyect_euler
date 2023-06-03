#include <iostream>
#include <vector>

int main(){

      long long int n = 600851475143;
      long long int max;
      long long int store;
      std::vector<long long int> lista;

    for(long long int i = 2; i<=n; i++){
        
        if(n % i == 0)
        {
            
            n = n/i;
            std::cout << "n is equal to: " << n << "\n";
            lista.push_back(i);
            
            i = 1;
        }

    }
    for (auto i: lista){
        std::cout << i << ' ';
    }
}