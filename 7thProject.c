#include<stdio.h>
int main()
{
    int A[5];
    for(int i=0;i<5;i++){
        printf("Εισάγετε τιμή για το %d στοιχείο του πίνακα:",i);// AEM:59641
        scanf("%d", &A[i]);
    }
    int g=0;
    while(g<5){
        printf("Array[%d]=%d\n",g,A[g]);
        g++;
    }
    printf("\nDepartment of Electrical and Computer Engineering - Εργαστήριο 5");
    return 0;
}
