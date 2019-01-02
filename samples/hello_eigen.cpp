#include <Eigen/Dense>
#include <iostream>

int main(int argc, char **argv)
{
    Eigen::Vector3d vec;
    vec << 0, 1, 2;
    std::cout << vec[0] << '\n' << vec[1] << '\n' << vec[2] << '\n';

    return 0;
}