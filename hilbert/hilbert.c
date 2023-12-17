#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100000

char *apply_rule(char *s, char *rule1, char *rule2)
{
    int len = strlen(s);
    int rule1_len = strlen(rule1);
    int rule2_len = strlen(rule2);
    int new_len = len * (rule1_len + rule2_len) + 1;
    char *t = (char *)malloc(new_len * sizeof(char));
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == 'X') {
            strcpy(t + j, rule1);
            j += rule1_len;
        } else if (s[i] == 'Y') {
            strcpy(t + j, rule2);
            j += rule2_len;
        } else {
            t[j] = s[i];
            j++;
        }
    }

    t[j] = '\0';
    return t;
}

void remove_symbols(char *fractal)
{
    int i = 0;
    int j = 0;
    while (fractal[i] != '\0') {
        if (fractal[i] != 'X' && fractal[i] != 'Y') {
            fractal[j] = fractal[i];
            j++;
        }
        i++;
    }
    fractal[j] = '\0';
}

int main()
{
    FILE *input = fopen("input.txt", "r+w");
    if (input == NULL)
    {
        printf("Erro ao abrir o arquivo input.txt\n");
        return 1;
    }

    int id;
    char axiom[MAX_LEN];
    double angle;
    char rule1[MAX_LEN];
    char rule2[MAX_LEN];

    printf("Digite o numero do fractal correspondente: ");
    scanf("%d", &id);

    printf("Digite o axioma: ");
    scanf("%s", axiom);

    printf("Digite o ângulo: ");
    scanf("%lf", &angle);

    printf("Digite a regra 1: ");
    scanf("%s", rule1);

    printf("Digite a regra 2: ");
    scanf("%s", rule2);

    fprintf(input, "%d\n", id);
    fprintf(input, "%s\n", axiom);
    fprintf(input, "%lf\n", angle);
    fprintf(input, "%s\n", rule1);
    fprintf(input, "%s\n", rule2);
    fclose(input);

    FILE *output = fopen("output.txt", "w");
    if (output == NULL)
    {
        printf("Erro ao abrir o arquivo output.txt\n");
        return 2;
    }

    int iterations = 4;
    char *fractal = (char *)malloc(MAX_LEN * sizeof(char));
    strcpy(fractal, axiom);

    fprintf(output, "Estágio 0: %s\n", fractal);

    for (int i = 0; i < iterations; i++)
    {
        char *new_fractal = apply_rule(fractal, rule1, rule2);
        free(fractal);
        fractal = new_fractal;
        fprintf(output, "Estágio %d: %s\n", i + 1, fractal);
    }

    remove_symbols(fractal);
    fprintf(output, "Fractal final: %s\n", fractal);
    fclose(output);
    free(fractal);

    return 0;
}