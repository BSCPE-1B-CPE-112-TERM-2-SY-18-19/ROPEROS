#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class wasteful{  			  			//mao ni ang pangan sa akong class wasteful, para matawag ra nako dayon sa akong main
	public: 
		void display(int m[5]);
		long digit[100],n, x, t, j, factor[100], rem[100], num[10],num1[10];  	//function ni sya nga diri gipang declare ag mga variables gipang gamit sa ubos para makuha ang final nga output nga wasteful number
};
int main() 
{
	int num[10]={7,10,13,15,17,19,27,45,56,78};    //mga sud sa array nako ni. kani ang determined nan ug asay mga wasteful number nila
	wasteful jade;									// kani ang getawag na
	jade.display (num);								//pangalan sa object nako
	return 0;
}

	void wasteful::display(int num[10]) 		//mao ni akong tawgon
{
	cout<<"Displaying WASTEFUL: "<<endl;	
	
	for (int i=0; i<10; i++)					//mao nani ang sugod sa code sa pagpanita ug wasteful number
	{
		
		for (i=0;i<10; i++)
			{
			digit[i]=0;
			n=num[i];
			x=n;
			for (;n!=0;)
				{
				n=n/10;
				digit[i]++;
				}
			t=0;
			j=2;
			factor[i]=0;
			for (;x!=0;)
				{
				if (x%j==0)
					{
					x=x/j;
					rem[t]=j;
					t++;
					factor[i]++;
					if(x==1)
						{
						break;
						}
					}
			else
				{
				j++;
				}
			}
		}
		for (i=0; i<10; i++)
			{
			if (factor[i]>digit[i])
				{
				cout<<"Number: "<<num[i]<<endl;
				}
			}
		}
}
