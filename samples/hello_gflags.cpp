#include <gflags/gflags.h>
#include <iostream>

DEFINE_string(string_param, "", "string param to test gflags");
DEFINE_double(double_param, 0, "double param to test gflags");
DEFINE_int32(int_param, 0, "int param to test gflags");

int main(int argc, char **argv)
{
    google::ParseCommandLineFlags(&argc, &argv, true);

    std::cout << FLAGS_string_param << std::endl;
    std::cout << FLAGS_double_param << std::endl;
    std::cout << FLAGS_int_param << std::endl;

    return 0;
}