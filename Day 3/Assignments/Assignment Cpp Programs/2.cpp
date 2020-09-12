#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<sched.h>

using namespace std;

int main()
{
        int a;
        a=sched_getscheduler(getpid());
        switch(a)
        {
                case SCHED_OTHER:cout<<"another scheduling poly"<<endl;
                break;
                case SCHED_RR:cout<<"round robin scheduler"<<endl;
                break;
                case SCHED_FIFO:cout<<"first in first out"<<endl;
                break;

        }
return 0;
}
