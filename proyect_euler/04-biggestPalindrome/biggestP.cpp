#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){

    int product;
    std::vector<int> list;
    std::string string;
    int stringSize;
    bool palyndrome;
    int sizeFinal;


    for(int i = 100; i<=999; i++){
        for(int j = 100; j<=999; j++){

            product = i*j;
            string = std::to_string(product);
            stringSize = string.size();
            for(int h = 0; h<stringSize; h++){
                if(string[h] != string[stringSize-1-h]){
                    palyndrome = false;
                    break;
                    }
                else{
                    palyndrome = true;
                    }
                }   
            if(palyndrome == true){
                list.push_back(product);
                }
        }
    }

    sizeFinal = list.size();
    int max;
    for(int i = 0; i<sizeFinal; i++){
        if(i == 0){
            max = list[0];
        }
        if(list[i] >= max){
            max = list[i];
        }
    }
    std::cout << "The largest palyndrome is: " << max;
}