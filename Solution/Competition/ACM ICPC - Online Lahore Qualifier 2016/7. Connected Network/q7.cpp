#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

int network[10][2];
double res;
int c[10];
int netlink[10];
int copy[10];

double result(int n , int *p)
{
    int y,x,i;
    double sum=0;
    for(i=0;i<n-1;i++) {
    	x = network[p[i]][0]-network[p[i+1]][0];
      	y = network[p[i]][1]-network[p[i+1]][1];
       
      	sum += sqrt(x*x +y*y)+16;
    }
    
	return sum;
}

void dfs(int n,int count) {
    int i,j;double t;

 	if(n  == count) {  

    	t = result(n,netlink);
     	if(t<res) { 
       		res=t;
       		for(j=0;j<n;j++)
       			copy[j] = netlink[j]; 
    	}
	} else {
     	for(i=0;i<n;i++) {
	       	if(c[i]==0) {
		         c[i]=1;
		         netlink[count] = i;
		         dfs(n,count+1);
		         c[i]=0;
			}
    	}
    }
}


int main ( ) {
	freopen("q7.txt", "r", stdin);
	
	int n,i,cn=0;
	while ( 1 ) {
		scanf("%d",&n);
		if(n==0)break;
		for(i=0;i<n;i++) {
  		    scanf("%d %d",&network[i][0],&network[i][1]);
		}
        
		res = 10000.0;
		memset(c,0,sizeof(c));
		dfs(n,0);
		
		int x,y;
		printf("**********************************************************\n");
		printf("Network #%d\n",++cn);
        for(i=0;i<n-1;i++) {
			x = network[copy[i]][0]-network[copy[i+1]][0];
   			y = network[copy[i]][1]-network[copy[i+1]][1];
			printf("Cable requirement to connect (%d,%d) to (%d,%d) is %.2f feet.\n",network[copy[i]][0],network[copy[i]][1],network[copy[i+1]][0],network[copy[i+1]][1],sqrt(x*x+y*y)+16);
		}
	
		printf("Number of feet of cable required is %.2f.\n",res);
	}
	
	return 0;
}
