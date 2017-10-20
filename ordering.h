#ifndef ORDERING_H
#define ORDERING_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <stdint.h>
#include "ordering.c"
#include <string.h>
#include <math.h>



//FUNCOES AUXILIARES
int menuSort                (int opcao, int *vetor, int tamanho);
void printVector            (int *vector,int size);
void swap                   (int * a, int * b);
void * vectorDecrescente    (int *vector, int size);
void * vectorCrescente      (int *vector, int size);

//METODOS DE ORDENACAO
int quickSort               ( int *vector, int left, int right );
int mergeSort               ( int *vector, int left, int right );
int insertionSort           ( int *vector, int size );
int bubbleSort              ( int *vector, int size );
int selectionSort           ( int *vector, int size );
int merge                   ( int * vector, int left, int m, int right);
int mergeSort               ( int * vector, int left, int right);


#endif