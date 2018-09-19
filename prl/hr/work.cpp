#include "work.hpp"
#include "rk.hpp"

#include <iostream>

void work(Task &task, double *x) {
  task.result.sn=0;
  task.result.period = 0.0;
  task.result.dutyCycle = 0.0;


  int nvar = 3;
  // double x[] = {-5.0, 0.0, 0.0};
  double pars[] = {task.b, task.I};
  rk(nvar, x, 0, 2000.0, 2000.0, pars, 1.0e-8, 0, task);
  // rk(nvar, x, 0, 200.0, 200.0, pars, 1.0e-8, 1, task);
  rk(nvar, x, 0, 50000.0, 50000.0, pars, 1.0e-8, 2, task);


}