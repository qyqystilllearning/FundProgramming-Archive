#include <stdio.h>
#define lli signed long long int
//bismillahhh
void bisayok(lli a, lli b, lli c, lli d, lli e){
    b = a % b;
    d = c * d;
    e = (b + d) % e;
    printf(" %lld", e);
};

int main()
{
    lli T, a, b, c , d, e;
    scanf(" %lld", &T);
    
    for(int i = 0; i < T; ++i){
        scanf(" %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e);
        bisayok(a, b, c, d, e);
    }
    
    return 0;
}