//NDHU CSIE Lab of programming 1, week 8.1
//Gives a article, write a program to capitalize every sentence.

#include <stdio.h>
#define MAX 10000

int main()
{
	char str[MAX]={0};
	int i;
	//input string
	while(gets(str)){
	//capitalize first character of words
	for(i=0; str[i]!='\0'; i++)
	{

	if (str[0] == '"'){
		if(str[i] == '"')			//if condition loop for sentence started with bracket.
		{
			if((str[i+1]>= 'a' && str[i+1]<='z'))
				str[i+1]=str[i+1]-32;
		}
	}
				if(str[i] == '.')    //if condition loop for next sentence.
		{
			if((str[i+2]>= 'a' && str[i+2]<='z'))
				str[i+2]=str[i+2]-32;
		}
                if(str[i] == '?')    //if condition loop for next sentence.
		{
			if((str[i+2]>= 'a' && str[i+2]<='z'))
				str[i+2]=str[i+2]-32;
		}
                if(str[i] == '!')    //if condition loop for next sentence.
		{
			if((str[i+2]>= 'a' && str[i+2]<='z'))
				str[i+2]=str[i+2]-32;
		}
		if(i==0)   //check first character is lowercase alphabet.
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32; //subtract 32 to make it capital by ASCII
			continue; //continue to the loop
		}
	}
	printf("%s\n",str);
	}
	return 0;
}
