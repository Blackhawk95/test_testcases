#include <iostream>
#include "rhai.h"
using namespace std;



#pragma optimize( "", off )
int main(){
    long int a=0;
    long int ar[10]; 
    for(int i = 0;i<100;i++){
        for(int j = 1; j < 11;j++){
            ar[j] = arr[i*j][0];
        }
        for(int j = 1; j < 11;j++){
            a = (a%10000) + ar[j]; 
        }
        for(int j = 1; j < 11;j++){
            arr[i*j][0] = a%100;
        }
    }
    return 0;
}
#pragma optimize( "", on )