#ifndef MOVIE_H
#define MOVIE_H

#include <string>
using namespace std;

class Movie {
 private:
  string name;
  double rating;
  int earning_crores;
  int times_watched;

 public:
  string get_name() {
    return name;
  }
  double get_rating() {
    return rating;
  }
  int get_earnings() {
    return earning_crores;
  }
  int get_times_wathced() {
    return times_watched;
  }

  void set_earnings(int n) {
    earning_crores = n;
  }
  void set_watchtime(int n) {
    times_watched = n;
  }

  Movie(string s = "No name", double rate = 5, int earn = 10, int time = 0);
  ~Movie();
};

#endif

