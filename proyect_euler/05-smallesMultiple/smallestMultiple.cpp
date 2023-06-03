#include <iostream>
#include <vector>
#include <cmath>


std::vector<int> get_factors(int n){

    std::vector<int> factors;

    for(int i = 2; i<=n; i++){
           
            if(n % i == 0){
                n = n/i;
                factors.push_back(i);
                i = 1;
            }
    }   


    for(auto j: factors){
    }    

    return factors;
    
    }

   

int main(){
    std::vector<std::vector<int>> factors_list;
    std::vector<int> factors;
    int n = 20;
    std::vector<int> final_factors;
    std::vector<int> current_factor_list;
    std::vector<int> past_factor_list;
    int answer = 1;
    int current_exp ;

    for(int i=2; i <= n; i++){
        current_factor_list.push_back(0);
        past_factor_list.push_back(0);
    }

    for(int i = 2; i<=n; i++){
        factors = get_factors(i);

        for(auto j: factors){
            current_factor_list[j-2] ++;
        }

        for(int j = 0; j<current_factor_list.size(); j++){
            if(current_factor_list[j] <= past_factor_list[j]){
                current_factor_list[j] = past_factor_list[j];
            }
        }
        past_factor_list = current_factor_list;
        for(int k=0; k <current_factor_list.size(); k++){
            current_factor_list[k] = 0;
        }

    }

    for(int k = 0; k < past_factor_list.size(); k++){
        
        current_exp = past_factor_list[k];
        std::cout << current_exp << "\n";
        answer = answer*std::pow(k+2, current_exp);


    }

    std::cout << answer;

}

