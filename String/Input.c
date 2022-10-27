// #include <stdio.h>
// int main() {
//     char str[100];
//       scanf("%s",str);
//       printf("%s",str);
//     return 0;
// }



// __________________________________

// #include <stdio.h>

// int main()
// {
//    char str[]="Hello";
//    char str1[]="hello";
//    int i=0;
//    while(str[i]!='\0')
//     i++;
//    printf("%d ", i);
//    return 0;
// }

// ________________________


// #include <stdio.h>

// int main()
// {
//    char str[10];
//    fgets(str,10,stdin);
// //    printf("%s", str);
//    fputs(str,stdout);
 
//    return 0;
// }



// ____________________________


// #include <stdio.h>
// int main()
// {
//    char str[20];
//    scanf("%[^\n]%*c", str);
//    printf("%s", str);
 
//    return 0;
// }


// ___________________________


// #include <stdio.h>
 
// int main() {
//     char str[100];
//       scanf("%[^\n]s",str);
//       printf("%s",str);
//     return 0;
// }

#include<stdio.h>
int main(){
  float Num[]={11.2,12.6, 4.5, 5.4, 4.0, 8.2};
  int i=3;
printf("%.2f \n", Num[i]);
printf("%.2f \n", Num[i]+2);
printf("%.2f \n", Num[i+2]);
 printf("%.2f \n", Num[i++]);
printf("%.2f \n", ++Num[i]);


}