#include <GL/gl.h>
#include <GL/glut.h>

void display() {
  // Clear screen to black.
             glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
             glClear(GL_COLOR_BUFFER_BIT);
  
             glBegin(GL_TRIANGLES);

    // Set the color-1st vertex to red.
             glColor3f(1.0f, 0.0f, 0.0f);
             glVertex2f(-0.8f, -0.8f);

    // Set color of 2nd vertex to green.
             glColor3f(0.0f, 1.0f, 0.0f);
             glVertex2f(0.8f, -0.8f);

    // Set color of 3rd vertex to blue.
             glColor3f(0.0f, 0.0f, 1.0f);
             glVertex2f(0.0f, 0.8f);
  glEnd();

  // Swap the buffers so-drawing is displayed on the screen.
  glutSwapBuffers();
}

int main(int argc, char** argv) {
  // To Initialize GLUT.
             glutInit(&argc, argv);

  // Create a window with a single color buffer and no depth buffer.
             glutInitDisplayMode(GLUT_SINGLE);
             glutInitWindowSize(500, 500);
             glutInitWindowPosition(100, 100);
             glutCreateWindow("Colored triangle");

  // Set the display callback function.
             glutDisplayFunc(display);

  // Enter GLUT main loop.
  glutMainLoop();

  return 0;
}
