#include <Eigen/Dense>
#include <chrono>
#include <iostream>

#include "qpp.h"

using namespace std;
using namespace Eigen;

int main() {
  auto start = chrono::system_clock::now();

  Matrix3f A;
  Vector3f b;
  A << 1, 20, 3, 4, 5, 6, 7, 8, 10;
  b << 3, 3, 4;
  cout << "Here is the matrix A:\n" << A << endl;
  cout << "Here is the vector b:\n" << b << endl;

  Vector3f x1 = A.partialPivLu().solve(b);
  Vector3f x2 = A.fullPivLu().solve(b);
  Vector3f x3 = A.householderQr().solve(b);

  Vector3f x4 = A.colPivHouseholderQr().solve(b);
  cout << "The solution (colPivHouseholderQr) is:\n" << x4 << endl;
  Vector3f x5 = A.fullPivHouseholderQr().solve(b);
  Vector3f x6 = A.llt().solve(b);
  Vector3f x7 = A.ldlt().solve(b);
  cout << "The solution (partialPivLu) is:\n" << x1 << endl;
  cout << "The solution (fullPivLu) is:\n" << x2 << endl;
  cout << "The solution (householderQr) is:\n" << x3 << endl;
  cout << "The solution (fullPivHouseholderQr) is:\n" << x5 << endl;
  cout << "The solution (llt) is:\n" << x6 << endl;
  cout << "The solution (ldlt) is:\n" << x7 << endl;

  auto end = chrono::system_clock::now();
  auto dur = end - start;
  auto msec = chrono::duration_cast<std::chrono::milliseconds>(dur).count();
  // 要した時間をミリ秒（1/1000秒）に変換して表示
  std::cout << "要した時間 : " << msec << " milli sec \n";
  getchar();
  return 0;
}