#include<stdio.h>
#include<pthread.h>

void *foo1(void* s);
void *foo2(void* s);
int main()
{
	pthread_t t1, t2;

	pthread_create(&t1, 0, foo1, "1");
	pthread_create(&t2, 0, foo2, "2");
	sleep(1);
	printf("done\n");
	return 0;
}

void *foo1(void* s)
{
	int i = 0;
	while(1){
		printf("%d) process%s\n", i, (char *)s);
		i++;
	}
}
void *foo2(void* s)
{
	int i = 0;
	while(1){
		printf("%d) process%s\n", i, (char *)s);
		i++;
	}
}
