#include <stdio.h>
#include<time.h>
#include<unistd.h>
int main() {
    int data[5];
    int i=0;
    printf("Enter elements: ");
    for(i=0;i<5;++i)
    	{
	
        scanf("%d", data + i);
    	}

    printf("You entered: \n");
    for (i=0; i < 5; ++i)
        printf("%d\n", *(data + i));
    
    return 0;
     double time_spent = 0.0;
 
    clock_t begin = clock();
 
    // do some stuff here
    
    clock_t end = clock();
 
    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
    printf("The elapsed time is %f seconds", time_spent);
    
}

