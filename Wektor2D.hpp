class Wektor2D
{
private:
    double x;
    double y;

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

    
	// Tutaj napisz implementacje klasy Wektor2D
};
