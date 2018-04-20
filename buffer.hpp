

class Buffer {
public:
  size_t n;
  double *T;
  double *V;
  size_t minPos;
  size_t status;
  double defaultV;

  Buffer();
  Buffer(size_t n, double defaultV);
  Buffer(const double *T, const double *V, size_t n);
  Buffer(const Buffer &op);
  ~Buffer();

  Buffer & operator=(const Buffer &op);

  void resetTime();

  size_t getPos(double t);

  double operator()(double t);
  void push_back(double t, double v);

};