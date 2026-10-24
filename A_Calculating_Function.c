// 486/A
#include <stdio.h>
int main(){
    
    long long input;
    scanf("%lld", &input);

    if(input % 2 == 0){
        printf("%lld\n", input / 2);
    }
    else{
        printf("%lld\n", -((input / 2) + 1));
    }    
    
}