#include<iostream>
#include<tuple>
#include<utility>
#include"qpp.h"

using namespace std;
using namespace qpp;

int main() { 

  ket psi = 00_ket;
  cmat U = gt.CNOT * kron(gt.H, gt.Id2);
  ket result = U * psi;

  cout << disp(result)<<endl;

  result = apply(result, gt.X, {1});
  cout << disp(result)<<endl;

  auto measured = measure(result, gt.H, {0});
  cout << ">> Measurement result: " << get<RES>(measured) << '\n';
  cout << "Probabilities: ";
  cout << disp(get<PROB>(measured), ",") << '\n';
  cout << ">> Resulting states:\n";
  for (auto&& it : get<ST>(measured)) cout << disp(it) << "\n\n";
}