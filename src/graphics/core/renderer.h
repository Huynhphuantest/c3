#ifndef RENDERER
#define RENDERER

class Renderer {
    private:
        int width;
        int height;
    public:
        Renderer(int width, int height);
        int getWidth();
};

#endif