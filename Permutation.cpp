#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
 
using namespace std;

int m,l,forl=1;
int check=1; 
string answer;

void string_permutation(string orig, string perm, int count)
{
	if( count== m+1 )
	{
		if( forl == l)
		{
			answer=perm;
			forl++;
			return;
		}
		else
		{
			forl++;
		}
	}
	
	if( orig.empty())
	{
		return;
	}
 	
 	if( count < m)
 	{
 		for(int i=0;i<orig.size();++i)
		{
				string orig2 = orig;
	 
				orig2.erase(i,1);
		 
				string perm2 = perm;
		 
				perm2 += orig.at(i);
				
				string_permutation(orig2,perm2,count+1);
		}
	 }
	 else if(count == m)
	 {
	 	string orig2 = orig;
	 
		orig2.erase(0,1);
		 
		string perm2 = perm;
		 
		perm2 += orig.at(0);
				
		string_permutation(orig2,perm2,count+1);
	 }
	 else if(count == m+1)
	 {
	 	string orig2 = orig;
 
		orig2.erase(0,1);
		
		string perm2 = perm;
		
		perm2[m-1] = orig.at(0);
				
		string_permutation(orig2,perm2,count);
	 }
}
 
int main()
{
	int n;
	char yeah='1';
	string orig;
	string perm;
	cin>>n;  
 	cin>>m;
 	cin>>l;
 	
 	for(int i=1;i<=n;i++)
 	{
 		orig+=yeah;
 		yeah++;
	 }
	 
	string_permutation(orig,perm,1);
	
	for(int i=0;i<m;i++)
	{
		if(answer[i] == ':')
		{
			cout<<10<<" ";
		}
		else if(answer[i] == ';')
		{
			cout<<11<<" ";
		}
		else
		{
			cout<<answer[i]<<" ";
		}
	}
}
