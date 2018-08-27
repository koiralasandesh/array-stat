#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int M,N,i;
    printf("Enter the size of array A:\n");
    scanf("%d",&M);
    int myArrayA[M];
    printf("Enter the elements of array A:\n");
    for(i=0;i<M;i++) {
        scanf("%d",&myArrayA[i]);
    }

    printf("Enter the size of array B:\n");
    scanf("%d",&N);
    int myArrayB[N];
    printf("Enter the elements of array B:\n");
    for(i=0;i<N;i++) {
        scanf("%d",&myArrayB[i]);
    }

    int mean1= mean(myArrayA,M);
    int median1=median(myArrayA,M);
    int mode1=mode(myArrayA,M);
     int mean2= mean(myArrayB,N);
    int median2=median(myArrayB,N);
    int mode2=mode(myArrayB,N);
    printf("Mean of A is: %d\n",mean1);
    printf("Median of A is: %d\n",median1);
    printf("Mode of A is: %d\n",mode1);
    printf("Mean of B is: %d\n",mean2);
    printf("Median of A is: %d\n",median2);
    printf("Mode of B is: %d\n",mode2);

    if((mean1>mean2)&&(median1>median2)&&(mode1>mode2)){
        printf("You need to focus on your study More!");
    }
    else if((mean1==mean2)&&(median1==median2)&&(mode1==mode2)){
        printf("You are well balanced!");
    }
    else{
            printf("Sorry can’t come to an outcome");
    }

}
int mean(int myArray[],int N){

    int sum=0,mean;
    int i;
    for(i=0;i<N;i++){
        sum=sum+myArray[i];
    }
    mean=sum/N;
    return mean;

}


int median(int myArray[],int N) {
    int temp;
    int i, j;

    for(i=0; i<N-1; i++) {
        for(j=i+1; j<N; j++) {
            if(myArray[j] < myArray[i]) {

                temp = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = temp;
            }
        }
    }
if(N%2==0) {

        return((myArray[N/2] + myArray[N/2 - 1]) / 2.0);
    }
    else {

        return myArray[N/2];
    }
}
int mode(int myArray[],int N){
    int i,j,count=1,countMode=1,temp;
    for(i=0;i<N;i++){
        for (j=1;j<N;j++){
            if (myArray[i]==myArray[j]){
                count++;
                if(count>countMode){
                    countMode=count;
                    myArray[i]=temp;

                }
            }
        }
    }
    return temp;
}
