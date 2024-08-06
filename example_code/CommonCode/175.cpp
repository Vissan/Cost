#include <cstdio>
#include <vector>

int main(){

    volatile long n = 5;
    volatile bool object[] = {true, true, false, false, true};
    volatile long previous[] = {-1, 0, 1, 2, 3};
    volatile long outDegree[] = {1, 1, 1, 1, 0};


    std::vector<long> hotels = {0, 1, 4};

    std::vector<long> bestPath;
    for(int k = 0; k < hotels.size(); k++){
        std::vector<long> currentPath;
        long start = hotels[k]; currentPath.push_back(start);
        long current = previous[hotels[k]];
        while(current >= 0 && !object[current] && outDegree[current] <= 1){currentPath.push_back(current);current = previous[current];}
        if(currentPath.size() > bestPath.size()){bestPath = currentPath;}
    }



    for(int k = bestPath.size() - 1; k >= 0; k--){

    }

    return 0;
}