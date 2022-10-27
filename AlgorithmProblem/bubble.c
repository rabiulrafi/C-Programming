#include<stdio.h>
#include <time.h>

int main() {

  int data[] = {-2, 45, 0, 11, -9};

  int size = sizeof(data) / sizeof(data[0]);

    for(int step=0; step< size-1; step++){

        for(int i=0; i<size-1; i++){
            if(data[i]>data[i+1])
            {
                int temp = data[i];
                data[i]=data[i+1];
                data[i+1]=temp;
            }
        }
    }

    for(int i=0; i<size; i++){
        printf("%d ",data[i]);
    }

    return 0;
}