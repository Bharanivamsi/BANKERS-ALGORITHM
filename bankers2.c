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
