#include<iostream>
#include<cstring>
using namespace std;

class process{

        public:
                string name;
                int arrTime;
                int burstTime;
                int respTime;
                int compTime;
                int waitTime;
                int turnTime;
};

int main()
{
        int i,noproc,avgwaitTime,avgturnTime,sum1 = 0,sum2 = 0;
        cout<<"no of process=\n";
        cin>>noproc;
        process p[ noproc ];

        for(i=0;i<noproc;i++)
        {
                cout<<"\n enter the process "<<i<<" name = ";
                cin>>p[i].name;

                cout<<"\n enter the process "<<i<<" arrival time = ";
                cin>>p[i].arrTime;

                cout<<"\n enter the process "<<i<<" burst time = ";
                cin>>p[i].burstTime;

        }

        for(i=0; i<noproc; i++)
        {
if( i== 0){
                        p[i].respTime = p[i].arrTime;
                        p[i].compTime = p[i].respTime + p[i].burstTime;
                        p[i].waitTime = p[i].respTime - p[i].arrTime;
                        p[i].turnTime = p[i].compTime - p[i].arrTime;
                }
                else{

                        p[i].respTime = p[i-1].respTime + p[i-1].burstTime;
                        p[i].compTime = p[i].respTime + p[i].burstTime;
                        p[i].waitTime = p[i].respTime - p[i].arrTime;
                        p[i].turnTime = p[i].compTime - p[i].arrTime;
                }
        }


        for(i=0;i<noproc;i++)
        {
                sum1= sum1 + p[i].waitTime;
                sum2= sum2 + p[i].turnTime;
        }

        avgwaitTime = sum1/noproc;
        avgturnTime = sum2/noproc;

        for(i=0;i<noproc;i++)
        {
 cout<<"\n process no "<<i+1;
                cout<<"\n name "<<p[i].name;
                cout<<"\n arrival time "<<p[i].arrTime;
                cout<<"\n burst time "<<p[i].burstTime;
                cout<<"\n response time "<<p[i].respTime;
                cout<<"\n complete time "<<p[i].compTime;
                cout<<"\n waiting time "<<p[i].waitTime;
                cout<<"\n turnaround time "<<p[i].turnTime;
                cout<<endl;
        }
 cout<<"\n average waiting time = "<<avgwaitTime;
        cout<<"\n average turnaround time ="<<avgturnTime;
return 0;
}
