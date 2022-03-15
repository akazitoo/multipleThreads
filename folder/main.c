#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

int nums[100];
int i, qntd;
int average, minimum, maximum;

void *Average(){
        int sum = 0;
        for(i=0;i<qntd;i++){
	        sum = sum + nums[i];
	}
        average = sum/qntd;
        printf("The average value is %d\n",average);
}

void *Minimum(){
        minimum = nums[0];
        for(i=1;i<qntd;i++){
                if(minimum > nums[i]){
                        minimum = nums[i];
                }
        }
        printf("The minimum value is %d\n",minimum);
}

void *Maximum(){
        maximum = nums[0];
        for(int i=1;i<qntd;i++){
		if(maximum < nums[i]){
			maximum = nums[i];
		}
	}
        printf("The maximum value is %d\n",maximum);
}

void *CreateThreads(){
        pthread_t t1;
        pthread_t t2;
        pthread_t t3;
        scanf("%d",&qntd);
	for(i=0;i<qntd;i++){
		scanf("%d",&nums[i]);
	}
        pthread_create(&t1, NULL, &Average, NULL);
        pthread_join(t1, NULL);
        pthread_create(&t2, NULL, &Minimum, NULL);
        pthread_join(t2, NULL);
        pthread_create(&t3, NULL, &Maximum, NULL);
        pthread_join(t3, NULL);
}
int main(){
        pthread_t threadparent;
        pthread_create(&threadparent, NULL, &CreateThreads, NULL);
        pthread_join(threadparent, NULL);
        return 0;
}