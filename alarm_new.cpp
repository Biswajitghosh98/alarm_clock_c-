# include <iostream>
#include"opencv2/highgui/highgui.hpp"
#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/core/core.hpp"
# include <ncurses.h>
# include <curses.h>
# include <time.h>
# include <unistd.h>
# include <cstdlib>
# include <math.h>
using namespace std;
using namespace cv;
void MyLine( Mat img, Point start, Point end )                                  
{
  int thickness = 5;
  int lineType = 8;
  line( img,start,end,Scalar( 255, 0, 0 ),thickness,lineType );
}
void MyLine1( Mat img, Point start, Point end )                                  
{
  int thickness = 5;
  int lineType = 8;
  line( img,start,end,Scalar( 0, 255, 0 ),thickness,lineType );
}
class clok
  {
    //private:
  public:
    int hh,mm,ss,dd,mmm,y;
    Mat a;

   // public:
    void get();
    void display();
    void pass(tm *a);
    void alarm(clok &c);
  };

void clok::get()
  { 
    cout<<"\nEnter hour(0-23): ";
    cin>>hh;
    cout<<"\nEnter minute: ";
    cin>>mm;
    cout<<"\nEnter second: ";
    cin>>ss;
    //cout<<"\nEnter date(1-31/30/29/28): ";
    //cin>>dd;
    //cout<<"\nEnter month(1-12): ";
    //cin>>mmm;
    //cout<<"\nEnter year: ";
    //cin>>y;
  }

void clok::display()
  {
    cout<<hh<<":"<<mm<<":"<<ss;
  }

void clok::pass(tm *a)
  {
     hh = a->tm_hour;
     mm = a->tm_min;
     ss = a->tm_sec;
     //dd = a->tm_mday;
     //mmm = a->tm_mon;
     //y = a->tm_year;
  }


void clok::alarm(clok &c)
  {
    clok d;
    long int e;
    long int i;
    long int d1,d2,d3;
    if((c.hh>hh) ||((c.hh==hh) && (c.mm>mm))||((c.hh==hh) && (c.mm == mm) && (c.ss >ss)))
    {
      d1 = c.hh+23-hh;
      d2 = c.mm+60-mm;
      d3 = c.ss+60-ss;
      e = (d1*3600)+(d2*60)+(d3);
     // std::cout<<"a";

for(i=e;i>=1;i--)
      {
        
        sleep(1);
      }
      char ch;
    //for(int i=0; i<20; i++)
       //{
          cout<<"\n Time up!";
          //std::system("tput bel");
          //sleep(1);       
          //getchar();
       //}


    
    }
    else
    {
    d.hh = hh-c.hh;
    d.mm = mm-c.mm;
    d.ss = ss-c.ss;
    e = (d.hh*3600)+(d.mm*60)+(d.ss);

for(i=e;i>=1;i--)
      {
        
        sleep(1);
      }
      char ch;
    //for(int i=0; i<20; i++)
       //{
          cout<<"\n Time up!";
          //std::system("tput bel");
          //sleep(1);       
          //getchar();
       //}

    
    //for(i=e;i>=1;i--)
      //{
        
        //sleep(1);
      //}
      //char ch;
    //for(int i=0; i<20; i++)
       //{
          //cout<<"\n Time up!";
          //std::system("tput bel");
          //sleep(1);       
          //getchar();
       //}

  }
}


int main()
{ 
  //add: 
  int a;
   clok c1,c2;
   time_t t;
   tm *area;

   time(&t);
   area = localtime(&t);
         cout<<"current time is: "<<asctime(area);
         cout<<"\n set the time of alarm ";
         c1.get();
         c1.display();
         c2.pass(area);
         c1.alarm(c2);
         getchar();
         cout<<"\n";
          Mat a1=imread("circle.png",1);  
 int q,r;
Point p;
p.x=250;
p.y=250;    
Point h,m;
h.y=p.y- (80.0*cos((((float)c1.hh*30+(float)c1.mm*(0.5))/180)*3.14159265));
h.x=p.x+ (80.0*sin((((float)c1.hh*30+(float)c1.mm*(0.5))/180)*3.14159265));
m.y=p.y- (200.0*cos((((float)c1.mm*(6))/180)*3.14159265));
m.x=p.x+ (200.0*sin(((float)(c1.mm*(6))/180)*3.14159265));

MyLine1(a1,p,h);
MyLine(a1,p,m);
imshow("Image",a1);
waitKey(0);
//getchar();
         //goto add;

 } 
