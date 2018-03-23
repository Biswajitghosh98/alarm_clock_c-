# include <iostream>
# include <ncurses.h>
# include <curses.h>
# include <time.h>
# include <unistd.h>
# include <cstdlib>
using namespace std;
class clok
  {
    private:
    int hh,mm,ss,dd,mmm,y;

    public:
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
    int i;
    d.hh = hh-c.hh;
    d.mm = mm-c.mm;
    d.ss = ss-c.ss;
    e = (d.hh*3600)+(d.mm*60)+(d.ss);
    for(i=e;i>=1;i--)
      {
        
        sleep(1);
      }
      char ch;
    for(int i=0; i<20; i++)
       {
          cout<<"\n Time up!";
          //std::system("tput bel");
          sleep(1);
       }

  }


int main()
{ add: 
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
         goto add;

 } 
