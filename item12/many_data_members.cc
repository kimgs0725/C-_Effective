class ManyDataMbrs {
  public:
    ManyDataMbrs();
    ManyDataMbrs(const ManyDataMbrs& x);
  private:
    int a,b,c,d,e,f,g,h;
    double i,j,k,l,m;
    
    void init();
};

// Method 1: using member initialization lists.
// ManyDataMbrs::ManyDataMbrs()
//   : a(1), b(1), c(1), d(1), e(1), f(1), g(1), h(1), i(0),
//     j(0), k(0), l(0), m(0) {}
// 
// ManyDataMbrs::ManyDataMbrs(const ManyDataMbrs& x)
//   : a(x.a), b(x.b), c(x.c), d(x.d), e(x.e), f(x.f), g(x.g),
//     h(x.h), i(x.i), j(x.j), k(x.k), l(x.l), m(x.m) {}

// Method 2: using init() method.
void ManyDataMbrs::init(ManyDataMbrs* x) {
  a = b = c = d = e = f = g = h = 1;
  i = j = k = l = m = 0;
}

ManyDataMbrs::ManyDataMbrs() {
  init();
}

ManyDataMbrs::ManyDataMbrs(const ManyDataMbrs& x) {
  init();
}
