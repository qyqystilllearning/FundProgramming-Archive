#include <stdio.h>
#define lli signed long long int

lli acsebelas(lli M, lli K, lli L){
    lli mod = 1000000000;
    lli sum = 0;
    for (lli i = M; i <= K; i++) {
        sum = (sum + i) % (mod + 7);
    }

    return sum;
}

int main() {
    lli M, K, L;
  
    scanf("%lld %lld %lld", &L, &M, &K);
    
    lli result = acsebelas(M, K, L);
    
    printf("%lld\n", result);
    
    return 0;
}