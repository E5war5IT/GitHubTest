// File C++
// include libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function
int min(int *a, int size){
    int res = a[0];
    for(int i = 0; i < size; i++){
        if(a[i] < res) res = a[i];
    }
    return res;
}

// void setup
int main() {
    // integer variable
    int m, n, a, *res;
    
    do {
        printf("n=, m=");
        scanf("%i%i", &m, &n);
    }
    while(!(n > 0 && m > 0));
    
    a = (int) malloc(m);
    res = (int*) malloc(sizeof(int) *m);
   
    for(int i1 = 0; i1 < m; i1++){
   a[i1] = (int*) malloc(sizeof(int) *n);
    }
    
    for(int i2 = 0; i2 < n; i2++){
        printf("a[%i][%i]= ", i1,i2);
        scanf("%i", &a[i1][i2]);
    }
    
    res[i1] = min(a[i1], n);
    
    for(int i = 0; i < m; i++)
    printf("\n minof%irow:%i", i, res[i]);
    
    free(a);
    free(res);
    
    return 0;
}
