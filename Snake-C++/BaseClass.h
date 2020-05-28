#include <string>
using namespace std;


class Pic
{	
	private:
	int x,y;
	string path;

	public:
	Pic(const int &x, const int &y,const string &path)
	{
		this->x=x;
		this->y=y;
		this->path=path;
	}

	virtual ~Pic() = default;





	 void setX(int x) 
	{
		this->x=x;
	}

	 void setY(int y) 
	{
		this->y=y;
	}

	 int getX() const
	{
		return x;
	}

	 int getY() const
	{
		return y;
	}

	
	string getPath() const
	{
		return path;
	}

	 void setPath(string path) 
	{
		this->path=path;
	}



	sf::Sprite loadSprite(std::string path2){
	    static sf::Texture t;
	    if (!t.loadFromFile(path2)){
		std::cerr << "Error: File couldn't be loaded" <<std::endl;
	    }
	    static sf::Sprite s;
	    s.setTexture(t);
	    s.setPosition(this->x,this->y);
	    return s;
	}


	sf::Sprite loadSprite(){
	    static sf::Texture t;
	    if (!t.loadFromFile(this->path)){
		std::cerr << "Error: File couldn't be loaded" <<std::endl;
	    }
	    static sf::Sprite s;
	    s.setTexture(t);
	    s.setPosition(this->x,this->y);
	    return s;
	}



	void left()
	{
		setX(x-16);
		setPath("image/SnakeLeft.png");
	}

	void right()
	{
		setX(x+16);
		setPath("image/SnakeRight.png"); 
	}

	void up()
	{
		setY(y-16);
		setPath("image/SnakeUp.png");
	}

	void down()
	{
		setY(y+16);
		setPath("image/SnakeDown.png");
	}


	int getMaxX()
	{
		return x+16;
	}

	int getMaxY()
	{
		return y+16;
	}

	int getMinX()
	{
		return x-16;
	}

	int getMinY()
	{
		return y-16;
	}



};
