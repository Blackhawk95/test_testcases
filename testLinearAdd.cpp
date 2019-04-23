#include <iostream>
#include "rhai.h"
using namespace std;

#pragma optimize( "", off )
int main(){
    long int a=0;
    for(int i = 0;i<1000;i++){
        a = (a%10000) + arr[i][0]; 
        arr[i][0] = a%1000;
    }
    return 0;
}
#pragma optimize( "", on )