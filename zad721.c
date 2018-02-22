#include <stdio.h>
#include<math.h>
//7.2.1
typedef struct trojkat{
    double a;
    double b;
    double c;
} Trojkat;
 double obwod(Trojkat t)
{
    return t.a+t.b+t.c;
}
//7.2.1 end
 //7.2.2
void przepisz(Trojkat t1,Trojkat* t2)
{
    *t2=t1;
}
// 7.2.2 end
int main(int argc, char *argv[])
{
    // sprawdzenie zadania 7.2.1
    Trojkat  t;
    t.a=5.2;
    t.b=3.1;
    t.c=3.6;
    printf("Obwod trojkata wynosi %lf \n",obwod(t));
    //sprawdzenie zadania 7.2.2
    Trojkat t2;
    przepisz(t,&t2);
    printf("%lf",t2.b);

    return 0;
}
