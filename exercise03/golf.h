// golf.h -- for pe9-1.cpp    // very confusing moment
#ifndef GOLF_H
#define GOLF_H

constexpr int Len = 40;
struct golf
{
	char	fullname[Len];
	int		handicap;
};

// non-interactive version;
// function sets golf structure to provide name, handicap
// using values passed as arguments to the function
void setGolf(golf & g, const char * name, int hc);

// interactive version;
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
int setGolf(golf & g);

// function resets handicap to new value
void handicap(golf & g, int hc);

// function displays contents of golf structure
void showGolf(const golf & g);

#endif // GOLF_H