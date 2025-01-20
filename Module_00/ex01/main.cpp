#include "Graph.hpp"

int main(void)
{
    Vector2 v1(0.0,0.0);
    Vector2 v2(3.0,4.0);
    Vector2 v3(2.0,2.0);
    Vector2 v4(3.0,1.0);
    Vector2 v5(1.0,5.0);

    Graph gr(Vector2(42.0,10.0));

    gr.addPoint(v1);
    gr.addPoint(v2);
    gr.addPoint(v3);
    gr.addPoint(v4);
    gr.addPoint(v5);

    gr.print();



    return(0);
}