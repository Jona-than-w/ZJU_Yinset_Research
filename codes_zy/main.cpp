#include "Model.h"

// int main(int argc, const char *argv[])
int main()
{
    std::string filename = "polyhedron.obj";
    Model model({0.5,3.7});
    model.loadObjFile("dataset/" + filename);
    // model.deleteVertex(0);
    const Integer n = 10;   //fixEdge里n是最大次数吗？
    model.test(n);
    model.saveObjFile("output/" + filename);

    std::cout << "output successfully" << std::endl;
    return 0;
}