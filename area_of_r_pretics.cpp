#include<iostream>
using namespace std;
class base{
	public:
		int l,w;
		void put()
		{
		cout<<"Enter length :"<<endl;
		cin>>l;
		cout<<"Enter wighth :"<<endl;
		cin>>w;
	}
};
class derived:public base{
	public:
		int a;
		void set()
		{
		     a=l*w;
			 cout<<"total area of rectengle : "<<a<<endl;
		}
};
main()
{
	derived d;
	d.put();
	d.set();
}
