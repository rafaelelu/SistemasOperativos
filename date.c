#include "types.h"
#include "stat.h"
#include "user.h"
#include "date.h"

int main(int argc, char **aa){
	struct rtcdate rtc ;
	date(&rtc);
	printf(1, "%d:%d:%d %d-%d-%d\n", rtc.year, rtc.month, rtc.day, rtc.hour, rtc.minute, rtc.second);
	exit();
}