#include "Timer.h"

#ifdef WIN32
static int gettimeofday (struct timeval *tv, struct timezone *tz)
{
   struct _timeb tb;

   if (!tv)
      return (-1);

  _ftime (&tb);
  tv->tv_sec  = tb.time;
  tv->tv_usec = tb.millitm * 1000 + 500;
  if (tz)
  {
    tz->tz_minuteswest = -60 * _timezone;
    tz->tz_dsttime = _daylight;
  }
  return (0);
}
#endif

//-------------------------------------------------------
void Timer::start()
{
	gettimeofday(&tstart, 0);
}
//-------------------------------------------------------
void Timer::end()
{
	gettimeofday(&tend, 0);
}
//-------------------------------------------------------
double Timer::val()
{
	double t1, t2;

	t1 =  (double)tstart.tv_sec + (double)tstart.tv_usec/(1000*1000);
	t2 =  (double)tend.tv_sec + (double)tend.tv_usec/(1000*1000);
	
	return t2-t1;
}
//-------------------------------------------------------
