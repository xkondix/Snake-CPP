#include "BaseClass.h"
class BodySnake : public Pic {


	public:

	BodySnake(int x, int y) : Pic(x,y,"image/SnakeRight.png"){

	}

	BodySnake() : Pic(0,0,"image/SnakeRight.png"){

	}

	bool contact(const BodySnake &s) const
	{
		if((this->getX() == s.getX()) && (this->getY() == s.getY()))
		{
			return true;
		}	
		else
			return false;
	}


	//create new food
	bool check(BodySnake *list,int len)
	{

		


		for(int i =0;i<len;i++)
		{

			if(this->getX()==list[i].getX() && this->getY()==list[i].getY())
			{
				return false;
			}
		}

		return true;
	}

	//snake with snake
	bool checkWithSnake(BodySnake *list,int len)
	{

		


		for(int i =1;i<len;i++)
		{

			if(this->getX()==list[i].getX() && this->getY()==list[i].getY())
			{
				return false;
			}
		}

		return true;
	}


};

	
	


