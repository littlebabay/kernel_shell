#include "task.h"
#include "sche.h"

int mem(void)
{
	printf("\nEirc: Hello, I am task1");
	return 0;
}

int net(void)
{
	printf("\nEirc: Hello, I am task2");
	return 0;
}

/* initialize the task0*/
struct task_info task1 = {
	.id=1,
	.index= mem,
	.status = RUN,
	.count = 65535,
};

/* initialize the task0*/
struct task_info task2 = {
	.id=2,
	.index= net,
	.status = RUN,
	.count = 65535,
};

/*
*	schedule init function,
*/
void sche_init(void)
{
	task_list[0] = &task1;
	task_list[1] = &task2;
	printf("\n+++Init schedule module");
}

void sche(void)
{
	int i;
	
	/*
	*	Traverse the task list, if any task's status is RUN , just run it.
	*/
	for (i = 0; i < TASK_NUM_MAX; i++ ){
		
		if( task_list[i] != 0 && task_list[i]->status == RUN ){
			task_list[i]->index();
			//printf("\nEric:%d",task_list[i]->id);
		}
	}
	
}
