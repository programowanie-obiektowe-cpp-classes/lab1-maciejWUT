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


    
    friend Wektor2D operator+(Wektor2D vec_1, Wektor2D vec_2)
    {
        return Wektor2D(vec_1.getX() + vec_2.getX(), vec_1.getY() + vec_2.getY());
    };

    friend double operator*(Wektor2D vec_1, Wektor2D vec_2)
    {
        return vec_1.getX() * vec_2.getX() + vec_1.getY() * vec_2.getY();

    
	// Tutaj napisz implementacje klasy Wektor2D
};
