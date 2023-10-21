#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_


#include <stdio.h>
#include <stdlib.h>

typedef struct task_manager
{
	char *name;
	char *description;
	char *due_date;
	char *priority;
	char *status;
	struct task_manager *link;
};

#endif
