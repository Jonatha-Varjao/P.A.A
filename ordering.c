

// METODOS DE ORDENACAO
int quickSort(int *vector, int left, int right)
{
    int i = left, j = right - 1, x = vector[(left + right) / 2], y;
    int trocas=0;
    while (i <= j)
    {
        while (vector[i] < x && i < right)
        {
            i++;
        }
        while (vector[j] > x && j > left)
        {
            j--;
        }
        if (i <= j)
        {
            y = vector[i];
            vector[i] = vector[j];
            vector[j] = y;
            i++;
            j--;
            trocas++;
        }
    }
    if (j > left)
    {
        quickSort(vector, left, j);
    }
    if (i < right)
    {
        quickSort(vector, i, right);
    }
    return trocas;
}

int merge(int *arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    int trocas;
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            trocas;
            i++;
        }
        else
        {
            arr[k] = R[j];
            trocas;
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        trocas;
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        trocas;
        j++;
        k++;
    }
}

int mergeSort(int *arr, int l, int r)
{
    int trocas;
    if (l < r)
    {
        int m = l + (r - l) / 2; //Same as (l+r)/2 but avoids overflow for large l & h
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        trocas = merge(arr, l, m, r);
    }
    return trocas;
}

int insertionSort(int *vector, int size)
{
    int i, key, j,trocas=0;
    for (i = 1; i < size; i++)
    {
        key = vector[i];
        j = i - 1;
        while (j >= 0 && vector[j] > key)
        {
            vector[j + 1] = vector[j];
            trocas++;
            j = j - 1;
        }
        vector[j + 1] = key;
    }
    return trocas;
}

int bubbleSort(int *vector, int size)
{
    int i, j, trocas;
    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
            if (vector[j] > vector[j + 1])
            {
                swap(&vector[j], &vector[j + 1]);
                trocas++;
            }
    return trocas;
}

int selectionSort(int *vector, int size)
{
    int i, j, min, tmp, trocas = 0;
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (vector[j] < vector[min])
            {
                min = j;
                trocas++;
            }
        }
        tmp = vector[i];
        vector[i] = vector[min];
        vector[min] = tmp;
    }
    return trocas;
}

/*FUNCOES AUXILIARES*/
int menuSort(int opcao, int *vetor, int tamanho)
{
    int trocas = 0;
    if (opcao == 0)
    {
        trocas = quickSort(vetor, 0, tamanho);
    }
    else if (opcao == 1)
    {
        trocas = insertionSort(vetor, tamanho);
    }
    else if (opcao == 2)
    {
        trocas = selectionSort(vetor, tamanho);
    }
    else if (opcao == 3)
    {
        trocas = mergeSort(vetor, 0, tamanho);
    }
    else if (opcao == 4)
    {
        trocas = bubbleSort(vetor, tamanho);
    }

    return trocas;
}

void printVector(int *vector, int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", vector[i]);
    puts("");
}
//PREENCHE UM VETOR DECRESCENTE
void * vectorDecrescente(int *vector, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        vector[i] = size - i;
    }
    return vector;
}
//PREENCHE UM VETOR CRESCENTE
void * vectorCrescente(int *vector, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        vector[i] = i + 1;
    }
    return vector;
}
//FUNÇÃO DE SWAP (TROCA OS VALORES)

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}