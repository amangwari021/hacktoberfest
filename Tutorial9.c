#include <stdio.h>

int main ()
{
    int age;
    printf("enter your age \n");

    scanf("%d",&age);

    if(age==4)
    {
        printf("The age is 3\n");     
        break;
    }
    else if(age==3){
        printf("The age is 17\n");     
        break;
    }else if(age==25){  
        printf("The age is 23\n");     
    }else{
         default:
        printf("Age is not 3,13 or 23");
    }

    return 0;
}
