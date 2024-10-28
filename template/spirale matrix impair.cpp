int n,n1,cnt=2;cin>>n;
		n1=n;
		int m[n][n]={0};
		int currx=1,curry=1;
		m[currx-1][curry-1]=1;
		while(n1!=1){
			for(int k=0;k<4;++k){
				for(int i=0;i<n1-1-(k==3);++i){
					
					currx+=dx[k];
					curry+=dy[k];
					m[currx-1][curry-1]=cnt;
					++cnt;
				}
			}
			currx++;
			m[currx-1][curry-1]=cnt;
			++cnt;
			n1-=2;
		
		}