void LIS() // longest increasing subsequence in O(n log n)
{
   int n,total;
   vector< int > table;
   int nprob = 0;
   while(scanf("%d", &total)==1){
		if( total == 0 ) break;
		table.clear();
		REP(kkk, total) {
			scanf("%d",&n);
			vector< int >::iterator i = lower_bound( table.begin(), table.end(), n );            
			if( i== table.end() ) table.push_back( n );
			else *i <?= n;
		}
		printf("Set %d: %d\n",++nprob,table.size());
	}
}
