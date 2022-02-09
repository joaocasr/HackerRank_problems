#include <stdio.h>
#include <stdlib.h>

void swapp(int a[], int x , int y){
    int temp;
    temp=a[x];
    a[x]=a[y];
    a[y]=temp;   
}


int main()
{
    int num, *arr, i;
    scanf("%d", &num); 
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
   int p = i/2;
   int r=0;
    while(p>0){
        swapp(arr,r,i-1);
        r++;
        i--;
        p--;
    }
   
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
