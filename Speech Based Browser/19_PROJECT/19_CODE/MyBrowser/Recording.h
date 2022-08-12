#include <iostream>
#include <stdlib.h>
//#include <bits/stdc++.h>
#include<stdio.h>
#include<Windows.h>
using namespace std;


void RecordTrain()
{
	char str[300];
	for(int i=1; i<=20; i++)
	{
	sprintf(str,"\"Recording_Module.exe\" 3 Train\\\\%d.wav Train\\\\%d.txt",i,i);

	string cmd = str;  
    system((const char *)cmd.c_str());
	system("taskkill /im Recording_Module.exe");
	}
	return ;
}
