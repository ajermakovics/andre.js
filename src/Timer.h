#include <sys/time.h>
#include <sys/timeb.h>
//#include <ctime>

#ifndef _Timer_H
#define _Timer_H

#ifdef WIN32
struct timezone 
{
 int  tz_minuteswest; /* minutes W of Greenwich */
 int  tz_dsttime;     /* type of dst correction */
};
static int gettimeofday (struct timeval *tv, struct timezone *tz);
#endif

class Timer
{
 private:
	struct timeval tstart;
	struct timeval tend;
	//struct timezone tz;

 public:
	void start();
	void end();
	double val();

};

/*
class stopwatch
{
public:
 stopwatch() : start(std::clock()){} //start counting time
 ~stopwatch() {
 	clock_t total = clock()-start; //get elapsed time
	double seconds = double(total)/CLOCKS_PER_SEC;
 }
 
private:
 std::clock_t start;
};
*/

#endif
