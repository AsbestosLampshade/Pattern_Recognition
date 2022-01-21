#include<stdio.h>
#include<stdlib.h>
//program to create a linear machine to adapt and spot patterns{size fixed}
/*So you have a number, you "teach the program a part of the number,
 you assign good and bad, if good, it stores the number, if bad it does not,
compares numbers and uses it to improve test, uses 1's and 0's ",
only able to compare patterns though :'(*/
//Basic code, no rotation check included

//ML Linear Draft1

char checker[10];
char x[10];

int run_count=0;

//inputs number
    void input(){
    printf("Enter your input\n");
    int i=0;
    while(i<10){
        scanf(" %c", &x[i]);
        //" %c"-> does not take EOL, "%c" takes EOL
        i+=1;
    }
}

//Creating key
void calculate(){
        int i=0;
        while (i<10){
            if(run_count==0){
                checker[i]=x[i];
            }
            else{
                if(checker[i]!=x[i])
                    checker[i]='X';
            }
         i=i+1;   
        }
        run_count+=1; 
}

//testing
int test(){
    int i;
    for(i=0;i<10;i++){
        if((checker[i]!='X')&&(checker[i]!=x[i])){
            printf("Fails\n");
            return 0;
        }
    printf("Yep, it passes\n");
    return 1;
    }
}

void main(){
    int inp, flag=1;
    while(flag){
        printf("\nEnter 1 to input, 0 for test\n");
        scanf("%d",&inp);
        if(inp==0){
            input();
            test();
        }
        else{
            input();
            calculate();
        }
        printf("\nDo you wish to continue(1/0)\n");
        scanf("%d",&flag);
    }
}
