#include<stdio.h>
int main(){
    FILE *fptr;
    
    // fptr = fopen("Test.txt","w");
    // if(fptr== NULL){
    //     printf("File doesnt exists\n");
    // }
    // else{
    //     char ch;
    //     fscanf(fptr, "%c",&ch);
    //     putchar(ch);
    //     fclose(fptr);
    // }

    // fptr = fopen("Test.txt","w");
    // char name[100];
    // int roll;
    // float cgpa;

    // scanf("%s", name);
    // scanf("%d",&roll);
    // scanf("%f", &cgpa);

    // fprintf(fptr,"Name: %s\n",name);
    // fprintf(fptr,"Roll : %d\n", roll);
    // fprintf(fptr,"CGPA: %.2f",cgpa);


    // fptr = fopen("Odd.txt","w");
    // int n;
    // scanf("%d", &n);
    // for(int i=1;i<=n;i++){
    //     if(i%2!=100){
    //         fprintf(fptr,"%d\t",i);
    //     }
    // }

    // fclose(fptr);



    fptr = fopen("Test.txt","r");

    char ch = fgetc(fptr);
    while (ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}