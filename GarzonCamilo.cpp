#include<bits/stdc++.h>

using namespace std;

int main()
{
    ofstream fichero("resultados.txt");
    double dt=0.1;
    double t=0.0;
    double xi,yi,xi1,yi1,vy,vy1,vx,vx1,ex,ey,ex1,ey1;
    xi1=1;
    yi1=0;
    vx1=0;
    vy1=1;
    double m=7294.29,q=2.0;
    while (t<10)
	{
        double t1=t+dt;
        if(t<3 || t>7)
	{
            ex=0,ey=0;
        }else
	{
            ex=0,ey=3.0*q;
        }
        if(t1<3 || t1>7)
	{
            ex1=0,ey1=0;
        }else
	{
            ex1=0,ey1=3.0*q;
        }
        t+=dt;

        xi=xi1+vx1*dt+(ex*q*dt*dt)/(2*m);
        yi=yi1+vy1*dt+(ey*q*dt*dt)/(2*m);
        vx=vx1+(dt*((ex*q/m)+(ex1*q/m))/2.0);
        vy=vy1+(dt*((ey*q/m)+(ey1*q/m))/2.0);
        xi1=xi;
        yi1=yi;
        vx1=vx;
        vy1=vy;

        fichero<<t<<" "<<xi<<" "<<yi<<endl;
    }
     fichero.close();
	return 0;

}
