#include <stdio.h>
#include <math.h>

int main()
{
   printf("Olá, meu nome é Gustavo Henrique Alves e atualmente estou cursando análise e desenvolvimento de sistemas na Universidade La Salle, minha matrícula é 202214100 \n");
    char o;
    printf("Operação: ");
    scanf("%c", &o);

    if(o == '+')
    {
        float a1, a2, a3;
        printf("Número inicial: ");
        scanf("%f", &a1);
        printf("Quantidade somada: ");
        scanf("%f", &a2);

        a3 = a1 + a2;
        printf("Resultado: %f\n", a3);
    }
    else if(o == '-')
    {
        float s1, s2, s3;
        printf("Número inicial: ");
        scanf("%f", &s1);
        printf("Quantidade subtraida: ");
        scanf("%f", &s2);

        s3 = s1 - s2;
        printf("Resultado: %f\n", s3);
    }
    else if(o == '*')
    {
        float m1, m2, m3;
        printf("Multiplicando: ");
        scanf("%f", &m1);
        printf("Multiplicador: ");
        scanf("%f", &m2);

        m3 = m1 * m2;
        printf("Resultado: %f\n", m3);
    }
    else if(o == '/')
    {
        float d1, d2, d3;
        printf("Dividendo: ");
        scanf("%f", &d1);
        printf("Divisor: ");
        scanf("%f", &d2);

        d3 = d1 / d2;
        printf("Resultado: %f\n", d3);
    }
    else if(o=='^')
    {
        float e1, e2, e3;
        printf("Número inicial: ");
        scanf("%f", &e1);
        printf("Elevado a: ");
        scanf("%f", &e2);
        
        e3 = pow (e1, e2);
        printf("Resultado: %f\n", e3);
    }
    else if (o=='R')
    {
        float r1, r2;
        printf("Número inicial: ");
        scanf("%f", &r1);
        
        
        r2= sqrt(r1);
        printf("Resultado: %f\n", r2);
        
    }
    else
    {
    printf("Não é uma operação!");
    }
    return 0;
}