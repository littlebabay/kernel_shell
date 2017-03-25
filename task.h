#ifndef __TASK__H
#define __TASK__H

enum task_status{
	RUN = 0,
	WAITE,	
	STOP,
};

/*
*	task descibe sturct
*/
struct task_info {
	
	int id;
	int (*index)(void);
	int status;
	int count;
};

#define TASK_NUM_MAX 32

/*define the globle task list */
struct task_info *task_list[TASK_NUM_MAX]={0};

#endif



