#include <stdio.h>
#include <stdlib.h>
#define MAX_HW 20

void read_data(FILE *fp, int d[], int size){
    size = 0;
    while (fscanf(fp,"%d",&d[size])==1){
        size++;
    }
}
void print_data(int *d, int size)
{
    for (int i = 0; i < size; i++){
        printf("%d ",d[i]);
        if ((i+1)%10==0) printf("\n");
    }
}
double average(int d[], int size)
{
    int i;
    double avg = 0.0;
    for (i = 0; i < size; i++){
        avg += d[i];
    }return (avg/size);
}

int main()
{
    int i, n;char filename[101];
    FILE *fp;
    printf("Enter the size of the data :");
    scanf("%d",&n);
    int data[n];
    for (i = 0; i < n; i++)
    scanf("%d",&data[i]);
    printf("\nEnter the filename :");
    scanf("%s",filename);
    fp = fopen(filename,"r");
    if (fp==NULL)
    printf("\nPlease Enter the valid file name");
    read_data(fp,data,n);
    print_data(data,n);
    printf("\nThe Average Value of the Number are: %.2f",average(data,n));
    printf("\nProgram Terminated Successfully!..");
    return 0;
}