#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
	class computer				// mao ni ang class na ginagamit 
	{
		public:
		long input();
		long palindromic_prime(long x);				// PASABOT ANI KAY MAGHIMO KAG FUNCTION NGA PALINDROMIC PRIME//
		void exam(long num[1000],long size);		// PASABOT ANI KAY MAGHIMO KAG FUNCTION NGA gamit ang data na long which nag void exam ka
			long i,num,size;
			long rev,rem,bin,base,key,pdtemp,pdnum,count,j,index=0,temp,s,pdnumber,count1;		//long na data type japon ang gamit para dako ang masud...
	};
int main() 
{
	long i,inp[1000],size;					//nag initialize na sad ka ari //
	computer jade;					
		cout<<"INPUT:";						//dri ang murag iya e print//
	size=0;
		for(i=0;;i++)						//code ni sya sa pagbutang sa input nga ge break
		{
			cin>>inp[i];
			
			if(inp[i]==0)					//dri dapit nimo mahibaw an na kung mo input naka og zero na number muhunong na siya para magpakita sa result//
			{
				break;						//dri nag break ka to stop 
			}
			size++;
		}
	jade.exam(inp,size);				//gitawag ang mga gipang initialize gamit ang object na jade//
			
}
	
//FUNCTIONS NI SIYA PARA SA PALINDROMIC PRIME
long computer::palindromic_prime(long x)		//gitawag ni 'palindromic_prime' si 'prime' para masud ang process ni prime ani nga function to ready napd inig tawag ni 'computer engineering' kang 'palindromic_prime'
{
	count=0;
	num=x;
	for(j=2;j<num;j++)
	{
		if(num%j==0)
		{
			count++;
		}
	}
	if(count==0)
	{
						/* BINARY */ //process sa pagkuhag binary sa number nga prime which is gi-identify sa prime function sa babaw 
		pdtemp=num;						
		bin=0;
		base=1;
			
		for(;pdtemp>0;)
		{
			rem=pdtemp%2;
			bin=bin+(rem*base);
			base=base*10;
			pdtemp=pdtemp/2;
		}
		
						/*REVERSE*/ // process sa pagreverse sa binary sa babaw para macompare silang duha arun maka-identify ko nga palindromic ba siya or dili
		key=bin;
		temp=0;
		rev=0;
		
		for(;key!=0;)
		{
			temp=key%10;
			key=key/10;
			rev=temp+(rev*10);		
		}
	
		if(rev==bin)
		{
		//	cout<<endl;
		//	num[i]=143;
		//	cout<<num[i]<<" ";
			
			return 1;
		}
		else
		{
		//		cout<<num[i]<<" ";
			return 0;
		}
	}
		else
		{
			return 0;
		}
}

//mao na ni ang function nga muhatag sa output ug 143
void computer::exam(long num[1000],long size)
{
	for(i=3;i<size;i++)
	{
	
	if(palindromic_prime(i)==1)
	{
		num[i]=143;
	
	}
	}
	for(i=0;i<size;i++)
	{
		cout<<"index["<<i<<"] - "<<num[i]<<" "<<endl;
	}
}

		

