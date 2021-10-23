#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;
using namespace std;
int main()
{
    Matrix3f A;
    A << 1, 2, 3, 2, 5, 6, 7, 8, 9;
    cout << "matrix A :\n"
         << A << endl;
    Vector3f b;
    b << 10, 11, 12;
    cout << "vector b :\n"
         << b << endl;
    cout << "A*b :\n"
         << A * b << endl;
    Vector3f x = A.colPivHouseholderQr().solve(b);
    cout << "The solution Ax=b is\n"
         << x << endl;
    cout << "Inverse of A:\n"
         << A.inverse() << endl;
}