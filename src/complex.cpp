#include "complex_t.hpp"

complex_t::complex_t (void) : real_(0), imag_(0), polar_(false) {}
complex_t::complex_t (const double real, const double imag, const bool polar) : real_(real), imag_(imag), polar_(polar) {}
complex_t::complex_t (const complex_t& complex) : real_(complex.real()), imag_(complex.imag()), polar_(complex.is_polar()) {}

complex_t::~complex_t (void) {}

double complex_t::mod (void) {
  return sqrt(pow(real_, 2) + pow(imag_, 2));
}

double complex_t::arg (void) {
  return atan2(imag_,real_);
}

complex_t complex_t::polar (void) {
  return complex_t(mod(),arg());
}

bool complex_t::is_polar (void) {
  return polar_;
}

ostream& write (ostream& os) {
  if (!polar_) {
    os << real_ << " + " << imag_ << "i";
  } else {
    os << real_ << " └" << imag_;
  }
  return os;
}

istream& read (istream& is) {
  is >> real_;
  is >> imag_;
  is >> polar_;
  return is;
}
