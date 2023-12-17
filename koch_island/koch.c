#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100000

char *apply_rule(char *s, char *rule)
{
    char *t = (char *)malloc(MAX_LEN * sizeof(char));
    int i = 0;
    int j = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'F')
        {
            strcpy(t + j, rule);
            j += strlen(rule);
        }
        else
        {
            t[j] = s[i];
            j++;
        }
        i++;
    }
    t[j] = '\0';
    return t;
}

int main()
{
    FILE *input = fopen("input.txt", "w+r");
    if (input == NULL)
    {
        printf("Erro ao abrir o arquivo input.txt\n");
        return 1;
    }
    int id;
    char axiom[MAX_LEN];
    double angle;
    char rule[MAX_LEN];
    printf("Digite o numero do fractal correspondente: ");
    scanf("%d", &id);

    printf("Digite o axioma: ");
    scanf("%s", axiom);

    printf("Digite o ângulo: ");
    scanf("%lf", &angle);

    printf("Digite a regra: ");
    scanf("%s", rule);

    fprintf(input, "%d\n", id);
    fprintf(input, "%s\n", axiom);
    fprintf(input, "%lf\n", angle);
    fprintf(input, "%s\n", rule);
    fclose(input);

    FILE *output = fopen("output.txt", "w");
    if (output == NULL)
    { 
        printf("Erro ao abrir o arquivo output.txt\n");
        return 2;
    }
    int iterations = 3;
    char *fractal = (char *)malloc(MAX_LEN * sizeof(char));
    strcpy(fractal, axiom);
    fprintf(output, "Estágio 1: %s\n", fractal);
    for (int i = 1; i <= iterations; i++)
    {
        fractal = apply_rule(fractal, rule); 
        fprintf(output, "Estágio %d: %s\n", i+1, fractal);
    }
    fclose(output);

    free(fractal);

    return 0;
}