#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
using namespace std;

int main() {
    glfwInit(); //initialize GLFW

    // Set the required OpenGL version to 3.3
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    GLFWwindow* window = glfwCreateWindow(800, 600, "Suck it", NULL, NULL);
    glfwMakeContextCurrent(window);

    if (!window) {
        cout << "Failed to create GLFW window";
        glfwTerminate();
        return -1;
    }

    gladLoadGL(); // load the configurations for OpenGL

    while(!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer


        glfwSwapBuffers(window); // Swap the front and back buffers
        glfwPollEvents(); // I/O
    }

    glfwDestroyWindow(window); // Destroy the window and its context
    glfwTerminate();

    return 0;
}
