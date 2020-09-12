#include<iostream>
#include<unistd.h>
#include<sched.h>
using namespace std;
int main()
{
        int a;
        a=sched_setscheduler(getpid(),SCHED_FIFO,0);

        if(a==0)
        {
                cout<<"priority set";
        }
        else
        {
                cout<<"priority not set";
        }
return 0;
}
