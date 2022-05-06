#include <stdio.h>
#include <iostream>
#include <cmath>

//tail sum of cube
int sumOfCube(int n){
    int sum=pow(n,3);
    if (n<=1){
        return 1;}
    else{
        return sum+sumOfCube(n-1);}
    return sum;
    
    
}


//int main(){
    //std::cout<<sumOfCube(3);
//}
