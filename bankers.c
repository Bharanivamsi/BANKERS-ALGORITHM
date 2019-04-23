#include<stdio.h>
#include<conio.h>
int cal_need(int max[5][4], int all[5][4],int need[5][4])
{
	int i,j;
	printf("\nNeed\n");
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			need[i][j]=max[i][j]-all[i][j];
		}
	}
	return(need[5][4]);
};
void process_check(int all[5][4],int need[5][4],int avail[4],int count,int pro[5])
{
	int i,j,k,l,z,cc=0,inn_count=0;
	for(z=0;z<5;z++){
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(pro[i]==1){
				
			    if(avail[j]>=need[i][j]){
				inn_count+=1;
		        }
		    }
			    if(inn_count==4){
				printf("\nProcess P%d executed.",i);
				count+=1;
				for(k=0;k<5;k++){
					avail[k]+=all[i][k];
					pro[i]=0;
				}
			}
		}
		inn_count=0;
	}
};
for(i=0;i<5;i++)
{
	 cc=cc+pro[i];
}
if(cc==0)
{
	printf("\n\nSystem is in safe state");
}
else
{
	printf("\n\nSystem is not in safe state");
}
};

int main()
{   int i,j,count=-1;
	int all[5][4]={{0,0,1,2},{1,0,0,0},{1,3,5,4},{0,6,3,2},{0,0,1,4}};     
	int max[5][4]={{0,0,1,2},{1,7,5,0},{2,3,5,6},{0,6,5,2},{0,6,5,6}};    
	int avail[4]={1,5,2,0};                                             
	int pro[5]={1,1,1,1,1};                                            
	int need[5][4]={0};                                               
	printf("\n Allocation \n");
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("%d ",all[i][j]);
		}
		printf("\n");
	}
	printf("\nMaximum\n");
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("%d ",max[i][j]);
		}
		printf("\n");
	}     
	cal_need(max,all,need);                                     
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("%d ",need[i][j]);
		}
		printf("\n");
	}
	process_check(all,need,avail,count,pro);
	return 0;
}
