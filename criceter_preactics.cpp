#include<iostream>
using namespace std;
class cricketer{
	public:
	int	runs[3],i;
		void set()
		{
			cout<<"Enter 3 Batsman Runs:"<<endl;
			for(i=1;i<=3;i++)
			{
				cin>>runs[i];
				
			}	
		}
		
};
class batsman:public cricketer{
          public:
		
		void get()
		{
		int total,avg,num,run;
		for(i=1;i<=3;i++)
			{
				total=runs[i];
				if(runs[i]>run)
				{
					run=runs[i];
					num=i;
				}	
			}
		avg=total/5;	
		cout<<"Total Runs :"<<total<<endl;
		cout<<"number "<<num<<" is Best Performer He Scored "<<run<<" Runs."<<endl;
		cout<<"average runs is :"<<avg<<endl;
	}
};
main()
{
	batsman b;
	b.set();
	b.get();
}
