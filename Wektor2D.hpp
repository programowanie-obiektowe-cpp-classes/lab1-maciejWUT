class Wektor2D
{
public:
    float x;
    float y;

    float norm() const { return sqrt(x * x + y * y); };
    void  print() const { std::cout << "x: " << x << " y: " << y << std::endl; };
	
	// Tutaj napisz implementacje klasy Wektor2D
};
