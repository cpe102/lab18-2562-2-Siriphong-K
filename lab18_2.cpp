//Modify function overlap() form lab18_1.cpp by using pointers as input arguments.
#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *,Rect *);

int main(){
	double a,b,c,d;
	double a1,b1,c1,d1;

	cout << "Please input Rect 1 (x y w h): ";
	cin>>a>>b>>c>>d;
	Rect R1={a,b,c,d};
	cout << "Please input Rect 2 (x y w h): ";
	cin>>a1 >> b1>>c1>>d1;
	Rect R2={a1,b1,c1,d1};
//	 R1={1,1,5,5};
//	 R2={2,2,5,5};
	cout << "Overlap area = ";
	cout << overlap(&R1,&R2);
	return 0;
}
double overlap(Rect *R1,Rect *R2){
	double r1_x=R1->x+R1->w;
	double r2_x=R2->x+R2->w;
	double r1_y=R1->y-R1->h;
	double r2_y=R2->y-R2->h;	
	return (min(r1_x,r2_x)-max(R1->x,R2->x))*(min(R1->y,R2->y)-max(r1_y,r2_y));
}
