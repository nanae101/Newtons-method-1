/*ニュートン法のプログラム*/
#include<stdio.h>
#include<math.h>

/*関数f(x), とその導関数f'(x)の定義*/
#define FNC(x)    (x*x-x)
#define FNCD(x)   (2*x-1)

int main(void)
{
    double a, an;
    int k = 0;

    printf("曲線y = f(x)上のある点のx座標を入力してください。\n");
    printf("x=");
    scanf("%lf",&a);

    an = a - FNC(a)/FNCD(a);
    while(fabs(an-a) > 0.00000001)
    {
        k +=1;
        a = an;
        an = a - FNC(a)/FNCD(a);
        printf("%f\n",an);
    }
    printf("%d回目で収束しました。近似解は%fです。\n", k, an);
    return 0;
}