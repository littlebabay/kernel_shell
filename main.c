#include <stdio.h>
//#include "task.h"
#include "sche.h"
#include <unistd.h>

void init0(void)
{
	while(1){
		
		sleep(1000);
		sche();	
	}	
}

int main(void)
{
	printf("\nStarting kernel ......\n");
	sche_init();
	
	/*finish init process,and hander the cpu to sche,then run init0*/
	init0();
	
	return 0;
}
