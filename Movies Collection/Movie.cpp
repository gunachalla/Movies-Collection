#include "Movie.h"

#include <string>
using namespace std;

Movie::Movie(string s, double rate, int earn, int time)
  : name{s}, rating{rate}, earning_crores{earn}, times_watched{time} {
}

Movie::~Movie() {
}

