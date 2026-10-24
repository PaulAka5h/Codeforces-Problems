//2009 A 
#include <stdio.h>
int main(){

    long long input, a,b;
    scanf("%lld", &input);

    while(input--)
    {
        scanf("%lld %lld", &a, &b);

        printf("%lld\n", b-a);
    }
}     