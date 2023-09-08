#include <igl/readOFF.h>
#include <igl/opengl/glfw/Viewer.h>

Eigen::MatrixXd V;
Eigen::MatrixXi F;

int main(int argc, char *argv[]) {
    std::string mesh_path = "/Users/lequan/_works/_workspace/_Research/_libigl/libigl-example/3-Convert/bunny.off";

    // Load a mesh in OFF format
    igl::readOFF(mesh_path, V, F);

    // Save the mesh in OBJ format
    igl::writeOBJ("/Users/lequan/_works/_workspace/_Research/_libigl/libigl-example/3-Convert/bunny.obj",V,F);

    return 0;
}
