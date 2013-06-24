/**
 * Mae.c
 * Copyright (C) 2013 Lingubender
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ExitCodes.h"

#define DEFAULT_PORT 6659

int main(int argc, char* argv[]) {
	int port = DEFAULT_PORT;
	bool client_mode = false;
	for (int i = 1; i < argc; i++) {
		if (!strcmp(argv[i], "--connect") && argc > i + 1) {
			client_mode = true;
			char* host_ip = argv[++i];
		} else if (!strcmp(argv[i], "--port") && argc > i + 1) {
			if ((port = atoi(argv[++i])) == 0) {
				fprintf(stderr, "Invalid args: Port number could not be parsed\n");
				return INVALIDARGS;
			}
		} else {
			fprintf(stderr, "Invalid args\n");
			return INVALIDARGS;
		}
	}
	
	return SUCCESS;
}