#include <igl/readOBJ.h>
#include <igl/opengl/glfw/Viewer.h>

Eigen::MatrixXd V;
Eigen::MatrixXi F;

int main(int argc, char *argv[]) {

    // Load a mesh in OFF format
    igl::readOBJ("/Users/lequan/_works/_workspace/_Research/_libigl/libigl-example/2-LoadOBJ/camel_b.obj", V, F);

    if (!igl::readOBJ("/Users/lequan/_works/_workspace/_Research/_libigl/libigl-example/2-LoadOBJ/camel_b.obj", V, F))
    {
        std::cerr << "Error loading " << argv[1] << std::endl;
        return -1;
    }

    // Plot the mesh
    igl::opengl::glfw::Viewer viewer;
    viewer.data().set_mesh(V, F);
    viewer.launch();

    return 0;
}
