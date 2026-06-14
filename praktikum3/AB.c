#include <stdio.h>

int abnacci(int a, int b, int k){
    if (k==0){
        return a;
    }
    else if (k==1){
        return b;
    }
    else {
        int past = a;
        int now = b;
        for(int i = 2; i <= k; i++){
            int fut = past + now;
            past = now;
            now = fut;
        }
        return now;
    }
}

int main(){
    int t;
    scanf("%d", &t);

    for(int j = 0; j < t;j++){
        int a, b, k;
        scanf("%d %d %d", &a, &b, &k);

        int res = abnacci(a, b, k);
        printf("%d\n", res);
    }
}