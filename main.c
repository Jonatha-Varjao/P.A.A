#include "ordering.c"


int main()
{
    int vector[1000000];    
    
    vectorDecrescente(vector,1000000);
    
    quickSort(vector, 0, 999999);
    printVector(vector, 1000000);
    return 0;
}