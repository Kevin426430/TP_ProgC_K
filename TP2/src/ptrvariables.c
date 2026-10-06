#include <stdio.h>

int main()
{
    char c = 'A';
    short s = 123;
    int i = 123456;
    long int l = 123456789;
    long long int ll = 1234567890123;
    float f = 1.0f;
    double d = 2.0;
    long double ld = 3.0L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pl = &l;
    long long int *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant la manipulation :\n");

    printf("Adresse de c : %p, Valeur : %02x\n", (void *)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur : %04x\n", (void *)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur : %08x\n", (void *)pi, (unsigned int)i);
    printf("Adresse de l : %p, Valeur : %lx\n", (void *)pl, (unsigned long)l);
    printf("Adresse de ll : %p, Valeur : %llx\n", (void *)pll, (unsigned long long)ll);
    printf("Adresse de f : %p, Valeur : %x\n", (void *)pf, *(unsigned int *)pf);
    printf("Adresse de d : %p, Valeur : %lx\n", (void *)pd, *(unsigned long *)pd);
    printf("Adresse de ld : %p, Valeur : %lx\n", (void *)pld, *(unsigned long *)pld);

    /* Modification avec les pointeurs */
    *pc = 'B';
    *ps = 456;
    *pi = 654321;
    *pl = 987654321;
    *pll = 9876543210123;
    *pf = 2.0f;
    *pd = 4.0;
    *pld = 5.0L;

    printf("\nApres la manipulation :\n");

    printf("Adresse de c : %p, Valeur : %02x\n", (void *)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur : %04x\n", (void *)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur : %08x\n", (void *)pi, (unsigned int)i);
    printf("Adresse de l : %p, Valeur : %lx\n", (void *)pl, (unsigned long)l);
    printf("Adresse de ll : %p, Valeur : %llx\n", (void *)pll, (unsigned long long)ll);
    printf("Adresse de f : %p, Valeur : %x\n", (void *)pf, *(unsigned int *)pf);
    printf("Adresse de d : %p, Valeur : %lx\n", (void *)pd, *(unsigned long *)pd);
    printf("Adresse de ld : %p, Valeur : %lx\n", (void *)pld, *(unsigned long *)pld);

    return 0;
}