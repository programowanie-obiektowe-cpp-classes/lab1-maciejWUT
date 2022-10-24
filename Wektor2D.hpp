class Wektor2D
{


public:

    Wektor2D() 
    { 
        x = 0.0;
        y = 0.0;       
    }

    Wektor2D(double X, double Y)
    {
        x = X;
        y = Y;
    }

    void setX(double X) { x = X; }

    void setY(double Y) { y = Y; }

    double getX() {return x;} 
    double getY() {return y;}

private:
    double x;
    double y;

    
	// Tutaj napisz implementacje klasy Wektor2D
};
