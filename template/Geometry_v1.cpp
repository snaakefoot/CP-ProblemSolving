

const double eps=numeric_limits<double>::epsilon();


struct Point {
    double x, y;
};

struct Line{
	double a,b,c; // ax+by+c=0
};

bool equals(double x, double y){
	if( fabs(x-y) < eps ) return true;
	return false;
}	

Point middle(Point A, Point B) {
    Point M;
    M.x = (A.x + B.x) / 2.0;
    M.y = (A.y + B.y) / 2.0;
    return M;
}

double dist(Point A, Point B){
    return  (A.x-B.x) * (A.x-B.x) + (A.y-B.y) * (A.y-B.y);
}

//mediatrice
Line bisector( Point A, Point B ){
	Line line ;
	if( equals(A.x,B.x) ){
		line.a=0.0;
		line.b=1.0;
		line.c=-(A.y + B.y ) / 2.0;
	}else if( equals(A.y,B.y) ){
		line.a=1.0;
		line.b=0.0;
		line.c=-(A.x+B.x) / 2.0 ;
	}else{
		Point M=middle(A,B);
		double alpha=-( B.x-A.x)/(B.y - A.y);
		line.a=alpha;
		line.b=-1.0;
		line.c=M.y-alpha*M.x;
	}
	return line;
}

Point pts[207];
int n=0,mx=1;

int countPts ( Point C ){
	int i,ret=0;
	for( i=0;i<n;++i ){
		if( dist( pts[i],C )  > 6.25 ) continue;
		++ret;
	}
	return ret;
}