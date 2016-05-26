#include <stdio.h>
#define N 10

int main(void)
{
	int i,j,k=0;
	int p_num[N]={0};
	char num[N][60]={0}, op[N-1], tmp=0;

	for(i=0; i<N; i++)
	{
		for(j=0; j<60; j++)
		{
			scanf("%c", &tmp);

			if(48<=tmp && tmp<=57 || tmp=='.')
				num[i][j]=tmp;
			else if(tmp==' ')
			{
				scanf("%c", &op[i]);
				getchar();
				break;

			}
			else if(tmp=='\n')
			{
				k=1;
				break;
			}
		}
		p_num[i]=j;

	




	switch(op[i])
	{
		case'+' : PLUS;	
				  break;
		case'-' : MINUS;
				  break;
		case'*' : MULTIPLY;
				  break;
		case'/' : DIVIDE;
				  break;
		case'%' : 
				  break;



















		if(k)
			break;
	}

}	
