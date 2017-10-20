#include "ordering.h"


int main()
{
    int Tamanho[] = {10000, 100000, 250000, 500000, 750000, 1000000}, i, j;
    char *Arquivos[] = {"vectorsTime/decrescente/quick.txt", "vectorsTime/decrescente/insertion.txt", "vectorsTime/decrescente/selection.txt", "vectorsTime/decrescente/merge.txt", "vectorsTime/decrescente/bubble.txt"};
    struct timeval stop, start;
    clock_t inicio;
    double tempo;

    int vetor[1000000], qtdTrocas = 0;

    
    
    for (j = 0; j < 5; j++)
    {
        FILE *f = fopen(Arquivos[j],"w");
        qtdTrocas = 0;
        for(i = 0 ; i < 6 ; i++)
        {
            vectorDecrescente(vetor, Tamanho[i]);
            inicio = clock();
            gettimeofday(&start, NULL);
            qtdTrocas = menuSort(j, vetor, Tamanho[i]);
            gettimeofday(&stop, NULL);
            tempo = (double)(clock()-inicio); 
            fprintf(f,"%d %li %d %f\n", Tamanho[i], abs((stop.tv_usec - start.tv_usec)), qtdTrocas, tempo ); 
            qtdTrocas = 0;           
        }
        fclose(f);
    }
    
    return 0;
}