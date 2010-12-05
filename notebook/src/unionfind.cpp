#define MAX 10000
struct unionfind {
	int p[MAX];
	int r[MAX]; // it contains the population
	unionfind() {
		REP(i,MAX) p[i] = i, r[i] = 1;
	}
	int find( int x ) {
		if( p[x] == x ) return x;
		else return p[x] = find( p[x] ); 
	}
	void Union(int x, int y) {
		int px = find( x );
		int py = find( y );
		if( px == py ) return; //already joined
		if( r[ px ] < r[ py ] ) p[px] = py, r[py] += r[px];
		else p[ py ] = px, r[px] += r[py];
	}
};
