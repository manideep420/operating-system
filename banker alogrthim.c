#include<stdio.h>
int main()
{
	int n,m,i,j,max[4][3],allocation[4][3],need[4][3],complete=0,avaliable[3],safe[4],iter=0;
	int status[4];
	printf("\n enter the nuber of process");
	scanf("%d",&n);
	printf("\n enter the number of resources");
	scanf("%d",&m);
	//set the status of the process
	for(i=0;i<n;i++)
	{
	status[i]=0;
	safe[i]=0;
}
//get the matrix
for(i=0;i<n;i++)
{
	printf("\n enter the resources for the %d process",i);
	for(j=0;j<m;j++)
	{
		printf("\n enter the %d th resources for the %d process",j,i);
		scanf("%d%d,&max[i][j]);
	}
}
	//get the allocation matrix
	for(i=0;i<n;i++)
	{
		printf("\n enter the resources for the %d process",i);
		for(j=0;j<m;j++)
		{
			printf("\n enter the %d the resources for the %d process,"j,i);
			scanf("%d%d",allocation[i][j]);
		}
	}
			//get the available matrix
			for(i=0;i<n;i++)
			{
				printf("\n enter the aavailale resources for the %d",i);
				scanf("%d",&available[i][j]);
			}
			//compute the need matrix
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					need[i][j]=max[i][j]-allocation[i][j];
				}
			}
			//display the matrix
			for(i=0;i<n;i++)
			{
				printf("\n");
				for(j=0;j<m;j++)
				{
					printf("\n %d",max[i][j]);
				}
			}
			//get the available matrix
			for(i=0;i<n;i++)
			{
				printf("\n");
				for(j=0;j<m;j++)
				{
					printf("\t %d",allocation[i][j]);
				}
			}
			printf("\n the need matrix");
			for(i=0;i<n;i++)
			{
				printf("\n");
				for(j=0;j<m;j++)
				{
					printf("\t %d",need[i][j]);
				}
			}
			i=0;
			complete=0;
			iter=0;
			
				}
			}
				}
			}
				}
			}
				}
			}
			}
}
		}
	}
