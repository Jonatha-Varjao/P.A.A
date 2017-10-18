#include "ordering.h"



int main()
{
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    int vetor[100], qtdTrocas=0;
    vectorDecrescente(vetor,10);
    printVector(vetor,10);
  
    gettimeofday(&start, NULL);
    sort_insertion(vetor, type_cmp);
    gettimeofday(&stop, NULL);
    
    printVector(vetor,10);

    printf("Clocks:%lu\n", (stop.tv_usec - start.tv_usec) );
    printf("trocas:%d\n", qtdTrocas);
    
    return 0;
}