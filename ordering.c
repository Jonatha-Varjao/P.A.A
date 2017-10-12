#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ordering.h"
#include <time.h>
//FUNCOES AUXILIARES
int printVector(int *vector,int size)
{
    int i;
    for( i=0 ; i<size ; i++)
        printf("%d ",vector[i]);
    puts("");
}

int *vectorDecrescente(int *vector, int size)
{
    int i;
    for( i=0 ; i<size ; i++ )
    {
        vector[i] = size-i;
    }
    return vector;
}



// METODOS DE ORDENACAO
int quickSort( int *vector, int left, int right )
{
    int i, j, x, y;
    i = left;
    j = right;
    x = vector[(left + right) / 2];

    while(i <= j){
        while(vector[i] < x && i < right){
            i++;
        }
        while(vector[j] > x && j > left){
            j--;
        }
        if(i <= j){
            y = vector[i];
            vector[i] = vector[j];
            vector[j] = y;
            i++;
            j--;
        }
    }

    if(j > left){
        quickSort(vector, left, j);
    }
    if(i < right){
        quickSort(vector, i, right);
    }
}

int mergesort(int *vector, int size)
{

}

int insertionSort(int *vector, int size)
{

}