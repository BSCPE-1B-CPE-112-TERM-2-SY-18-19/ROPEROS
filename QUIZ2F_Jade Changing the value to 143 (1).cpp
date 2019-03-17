
INSTRUCTION:IF THE INDEX OF THE ARRAY IS PALINDROMIC PRIME CHANGE THE VALUE TO 143.

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
	class cpe1b{  // mao ni ang class na ginagamit 
		public:
		long input();
		long palindromic_prime(long x); // PASABOT ANI KAY MAGHIMO KAG FUNCTION NGA PALINDROMIC PRIME//
		void exam(long num[1000],long size); // PASABOT ANI KAY MAGHIMO KAG FUNCTION NGA gamit ang data na long which nag void exam ka//
			long i,num,size;
			long rev,rem,bin,base,key,pdtemp,pdnum,count,j,index=0,temp,s,pdnumber,count1;; \\long na data type japon ang gamit para dako ang masud...
	};
int main() {
	long i,inp[1000],size; //nag initialize na sad ka ari //
	cpe1b jade;
		cout<<"INPUT:"; //dri ang iya e print//
	size=0;
		for(i=0;;i++){
			cin>>inp[i];
			
			if(inp[i]==0)
			{
				break;      //dri dapit nimo mahibaw an na kung mo input naka og zero na number muhunong na siya para magpakita sa result//
			}
size++;
		}
			jade.exam(inp,size); \\gitawag ang mga gipang initialize gamit ang object na jade//
			
}
	
	
	
	long cpe1b::palindromic_prime(long x)//gitawag ni 'palindromic_prime' si 'prime' para masud ang process ni prime ani nga function to ready napd inig tawag ni 'computer engineering' kang 'palindromic_prime'
}
	{              // process ni tara madetermine kung prime ba o dili.. ang range

		count=0;  //value is zero// 
		num=x;
		for(j=2;j<num;j++){     //
			if(num%j==0){
				count++;     
			}
		}
		if(count==0){
			pdtemp=num;      //Way sa pagkuha og binary//
			bin=0;
			base=1;
			
			for(;pdtemp>0;){
				rem=pdtemp%2;
				bin=bin+(rem*base);  //way sa pagreverse og para makuha ang gustong output// 
				base=base*10;
				pdtemp=pdtemp/2;
			}
			key=bin;
			temp=0;
			rev=0;
			for(;key!=0;){
				temp=key%10;
				key=key/10;
				rev=temp+(rev*10);
				
			}
	
			if(rev==bin){
		//	cout<<endl;          
		//	num[i]=143;
		//	cout<<num[i]<<" ";
			
				return 1;
			}
			else{
		//		cout<<num[i]<<" ";
				return 0;
			}
		}
		else{
			return 0;
		}
     	}

	void cpe1b::exam(long num[1000],long size){     //function 
	for(i=3;i<size;i++){
	
	if(palindromic_prime(i)==1){
		num[i]=143;
	
	}
}
for(i=0;i<size;i++){
	cout<<"index["<<i<<"] - "<<num[i]<<" "<<endl;   //output 
}

		

