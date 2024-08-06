#include <cstdio>
#include <vector>
#include <algorithm>

struct point{
    long x;
    long y;
    long dist;
};


bool pointCompare(point A, point B){return A.dist < B.dist;}
long labs(long x){return (x < 0) ? -x : x;}

int main(){

    long n = 2;
    std::vector<point> pointVec(n);

    long total(0);

    pointVec[0].x = 1; pointVec[0].y = 1; pointVec[0].dist = labs(pointVec[0].x) + labs(pointVec[0].y);
    total += 2 *(pointVec[0].x != 0) + 2 *(pointVec[0].y != 0) + 2;

    pointVec[1].x = 2; pointVec[1].y = 2; pointVec[1].dist = labs(pointVec[1].x) + labs(pointVec[1].y);
    total += 2 *(pointVec[1].x != 0) + 2 *(pointVec[1].y != 0) + 2;


    std::sort(pointVec.begin(), pointVec.end(), pointCompare);


    for(int p = 0; p < n; p++){
        char hf, hb, vf, vb;
        if(pointVec[p].x > 0){hf = 'R'; hb = 'L';} else{hf = 'L'; hb = 'R';}
        if(pointVec[p].y > 0){vf = 'U'; vb = 'D';} else{vf = 'D'; vb = 'U';}
        long ht(labs(pointVec[p].x)), vt(labs(pointVec[p].y));


    }

    return 0;
}