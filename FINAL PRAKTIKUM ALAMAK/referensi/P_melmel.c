#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i;
    double an[100];
    for (i = 0; i < n; i++){
        scanf("%lf", &an[i]);
    }

    double a, b, c, d, e, hasil;

    switch (n){
    case 1:
        hasil = an[0];
        break;
    case 2:
        b = an[1] - an[0];
        an[2] = b + an[1];
        hasil = an[2];
        break;
    case 3:
        a = ((an[2] - an[1]) - (an[1] - an[0])) / 2;
        b = an[1] - an[0] - 3 * a;
        c = an[0] - (a + b);
        an[3] = (16 * a) + (4 * b) + (c);
        hasil = an[3];
        break;
    case 4:
        a = (((an[3] - an[2]) - (an[2] - an[1])) - ((an[2] - an[1]) - (an[1] - an[0]))) / 6;
        b = ((an[2] - an[1]) - (an[1] - an[0]) - (12 * a)) / 2;
        c = (an[1] - an[0]) - ((7 * a) + (3 * b));
        d = an[0] - (a + b + c);
        an[4] = (125 * a) + (25 * b) + (5 * c) + d;
        hasil = an[4];
        break;
    case 5:
        a = ((((an[4] - an[3]) - (an[3] - an[2])) - ((an[3] - an[2]) - (an[2] - an[1]))) - (((an[3] - an[2]) - (an[2] - an[1])) - ((an[2] - an[1]) - (an[1] - an[0])))) / 24;
        b = (((an[3] - an[2]) - (an[2] - an[1])) - ((an[2] - an[1]) - (an[1] - an[0])) - (60 * a)) / 6;
        c = ((an[2] - an[1]) - (an[1] - an[0]) - ((50 * a) + (12 * b))) / 2;
        d = ((an[1] - an[0]) - ((15 * a) + (7 * b) + (3 * c)));
        e = an[0] - (a + b + c + d);
        an[5] = (1296 * a) + (216 * b) + (36 * c) + (6 * d) + e;
        hasil = an[5];
        break;
    default:
        hasil = 0;
        break;
    }

    printf("%.0lf", hasil);

    return 0;
}
