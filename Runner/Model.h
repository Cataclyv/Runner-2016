#ifndef MODEL_H
#define MODEL_H

const int MODEL_WIDTH = 800;
const int MODEL_HEIGHT = 600;

class Model
{
private :
    int _w, _h;
public:
    Model();
    void nextStep();
};

#endif // MODEL_H
