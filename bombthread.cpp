#include<algorithm>
int d[17],e[17][17],u,v,cnt;
inline void Swap(int &x,int &y){
	int t=x;x=y;y=t;
}
int main(){
	srand(rand());
	for(int i=1;i<=16;i++){
		for(int j=1;j<=16;j++){
			e[i][j]=rand();
		}
	}
	while(1){
		if(cnt==rand())srand(rand());
		u=rand()%16+1;
		for(int j=1;j<=16;j++){
			d[j]=std::max(d[j],d[u]+e[u][j]);
		}
		v=rand()%16+1;
		Swap(d[u],d[v]);
		cnt++;		
	}	
	return 0;
}
