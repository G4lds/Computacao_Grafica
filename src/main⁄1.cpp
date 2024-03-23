#include <iostream>
#include "glad.h"
#include <GLFW/glfw3.h>
#include <iostream>

int main(int, char**) {
    GLFWwindow* window;

    if (!glfwInit())
    {
        return -1;
    }
    window = glfwCreateWindow(640, 480, "window", NULL, NULL);
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "could not load opengl library" << std::endl;
        glfwTerminate();
        return -1;
    }

    const char* vertexShaderSrc =
        "void main() {/n"
        "}\0";
    
    glClearColor(0.2f, 0.3f, 0.4f, 1.0f);

    while (!glfwWindowShouldClose(window))
        {
        glfwPollEvents();

        glClear(GL_COLOR_BUFFER_BIT);
            
        glfwSwapBuffers(window);
        }

        glfwTerminate();
        return 0;
    }