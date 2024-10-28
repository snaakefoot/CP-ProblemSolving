const long double EPS = numeric_limits<double>::epsilon();
struct point2d {
    double x, y;
    point2d() {}
    point2d(double x, double y): x(x), y(y) {}
};

struct droite{
	double a,b,c;
	droite(double a1,double b1,double c1):a(a1),b(b1),c(c1){}
	droite(const droite& d){
		a=d.a;
		b=d.b;
		c=d.c;
	}
	point2d normize(){
		return point2d(-1.*(a/b),-1.*(c/b));
	}
	void affiche(){
	cout<<a<<"x+"<<b<<"y+"<<c<<"=0"<<endl;
	}
};

droite mediane(point2d a,point2d b){
	point2d i = point2d((b.x+a.x)/2.,(b.y+a.y)/2.);
	double dx=b.x-a.x,dy=b.y-a.y;
	return droite(dx,dy,-1.*(i.y*dy+i.x*dx));
}
point2d intersect(droite& ab,droite& bc){
	if (abs(ab.a*bc.b-bc.a*ab.b)<EPS)
		return point2d(INF,INF);
	if (abs(ab.a)<EPS){
		droite d=ab;
		ab=bc;
		bc=d;
	}
	double da=bc.a-ab.a,db=bc.b-ab.b;
	double y=(ab.c*(1.+da/ab.a)-bc.c)/(db-(ab.b/ab.a)*da);
	double x=-1.*(ab.c+ab.b*y)/ab.a;
	return point2d(x,y);
}

double distance(point2d a,point2d b){
	double dx=b.x-a.x,dy=b.y-a.y;
	return sqrt(dx*dx+dy*dy);
}
