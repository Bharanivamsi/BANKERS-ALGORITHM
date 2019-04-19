int main()
{   int i,j,count=-1;
	int all[5][4]={{0,0,1,2},{1,0,0,0},{1,3,5,4},{0,6,3,2},{0,0,1,4}};    
	int max[5][4]={{0,0,1,2},{1,7,5,0},{2,3,5,6},{0,6,5,2},{0,6,5,6}};    
	int avail[4]={1,5,2,0};                                              
	int pro[5]={1,1,1,1,1};                                            
	int need[5][4]={0};                                               
	printf("Allocation\n");
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
