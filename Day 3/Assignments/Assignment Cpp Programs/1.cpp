#include<unistd.h>
#include<stdlib.h>
#include<iostream>
#include<sys/types.h>
#include<sched.h>
using namespace std;

int main()
{
     
       pid_t pid;
        pid=fork();

        if(pid==0)
        {
                //child process
          
                cout<<"pid of child process----"<<getpid();
                cout<<endl;
                cout<<"ppid of child process----"<<getppid();
                cout<<endl;
        }
        else if(pid>0)
        {
                //parent process        
   
                cout<<"pid of parent process----"<<getpid();
                cout<<endl;
                cout<<"ppid of parent process----"<<getppid();
                cout<<endl;
        }
        else
        {
                cout<<"fork failed";
        }
        return 0;
}

