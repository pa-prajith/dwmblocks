//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb_pacupdate",	300, 1},
	{"",	"sb_uptime",	60,	1},
	{"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
  	{"",	"sb_volume",	5,	0},
	{"",	"sb_battery",	5,	3},
	{"",	"sb_clock ",	60,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
