#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    std::string input = "abccba";
    std::vector<char> state;
    for(long p = 0; p < input.size(); p++){
        if(!state.empty() && state.back() == input[p]){state.pop_back();}
        else{state.push_back(input[p]);}
    }


    return 0;
}