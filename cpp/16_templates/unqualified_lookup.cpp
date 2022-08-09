int Multiply(int x, int y) {
  return x * y;
}

template <typename T> T Squared(T x) {
  return Multiply(x, x);
}

int main() {
  Squared(5);
  return 0;
}
