#include "renderer.h"

Renderer::Renderer(int width, int height) {
    this->width = width;
    this->height = height;
}
int Renderer::getWidth() {
    return width;
}