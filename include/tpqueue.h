// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_
template<typename T, int size>
class TPQueue {
 private:
    T qq[size] = {0};
    int ff = 0, ll = 0;
 public:
  void push(T value) {
      int i = ll;
      while ((--i >= ff) && (value.prior > qq[i % size].prior)) {
          qq[(i + 1) % size] = qq[i % size];
      }
      qq[(i+1) % size] = value;
      ll++;
  }
  T pop() {
      return qq[(ff++) % size];
  }
};
struct SYM {
  char ch;
  int prior;
};
#endif  // INCLUDE_TPQUEUE_H_
