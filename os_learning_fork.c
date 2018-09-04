/*
The fork() System Call: http://www.csl.mtu.edu/cs4411.ck/www/NOTES/process/fork/create.html\
Get parent process id and name: https://gist.github.com/fclairamb/a16a4237c46440bdb172
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFF_SIZE 200
#define MAX_COUNT 200

extern char *program_invocation_short_name;
extern char *program_invocation_name;
static void get_process_name(const pid_t pid, char *proc_name);

int main(int argc, char** argv)
{
    char process_name[BUFF_SIZE], parent_process_name[BUFF_SIZE];
    char buf[BUFF_SIZE];
    pid_t pid, ppid, pid_fork;

    pid_fork = fork();
    pid = getpid();
    ppid = getppid();
    
  //  get_process_name(pid, process_name);
 //   get_process_name(ppid, parent_process_name);
    
   /* while(1) {
        
        sprintf(buf, "Process ID: %d (%s), Parent process ID: %d (%s)\n", pid, process_name, ppid, parent_process_name);
        write(1, buf, strlen(buf));
        sleep(1);
    }*/

    return (EXIT_SUCCESS);
}

static void get_process_name(const pid_t pid, char *proc_name) {
    char procfile[BUFF_SIZE];
    sprintf(procfile,"/proc/%d/cmdline",pid);
    FILE* fp = fopen(procfile,"r");
    
    if(fp) {
            pid_t size = fread(proc_name, sizeof(pid_t), sizeof(procfile), fp);
            
            if(size > 0) {
                if('\n' == proc_name[BUFF_SIZE-1] ) {
                    proc_name[BUFF_SIZE-1] = '\0';
                }
            }
    }           
}
