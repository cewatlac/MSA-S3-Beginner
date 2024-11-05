#include <iostream>
using namespace std;
int  main()
{
	int a,b;
	cin>>a>>b;
	int ct=0;
	while(a<=b)
	{
	a*=3;
	b*=2;
	ct++;
	}
	cout<<ct<<endl;
	return 0;
}
