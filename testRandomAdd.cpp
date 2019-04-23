#include <iostream>
#include <cstdlib> // for std::rand() and std::srand()
#include <time.h>

#include "rhai.h"
using namespace std;

int main(){
    srand (time(NULL));
    long int a;
    #pragma optimize( "", off )
    //std::srand(5323); // set initial seed value to 5323
    for(int i = 0;i<1000;i++){
        a = (a%10000) + arr[rand()%1000][0]; 
        srand (time(NULL));
        arr[rand()%1000][0] = a%1000;
        srand (time(NULL));
    }
    #pragma optimize( "", off )
    return 0;
}