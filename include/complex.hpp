#include <iostream>
#include <iomanip>
#include <cmath>


class complex_t {
private:
  double real_;
  double imag_;
  bool polar_;
public:
  complex_t (void); //Constructor por defecto
  complex_t (const double real, const double imag, const bool polar = false);
  complex_t (const complex_t& complex); //Constructor por defecto

  ~complex_t (void);

  //Funciones de apoyo a la clase compleja
  double mod (void); //Valor absoluto o modulo del numero complejo
  double arg (void); //Argumento
  complex_t polar (void); //Devuelve el complejo en formato polar

  //Funciones para comprobar
  bool is_polar (void);

  //Funciones E/S
  ostream& write (ostream& os);
  istream& read (istream& is);
};
