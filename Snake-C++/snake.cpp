#include <iostream>
#include <./SFML/Graphics.hpp>
#include <time.h>
#include "BodySnake.h"
#include "linkedList.h"
#include <stdlib.h>
#include <cstdio>
#include <ctime>


using namespace std;
using namespace sf;

//inicjalizacja metod
void createFood();
void contactFood();
void checkSnake();

//zmienne globalne
int foodX,foodY=160;
BodySnake food(foodX,foodY);
LinkedList list;
int pkt=0;
float fast = 0.200;
bool game = true;






int main()
{

    //zmienne lokalne
    srand (time(NULL));	
    BodySnake body(48,48);
    std::clock_t start;
    double duration;
    int k,l = 3;
    food.setPath("image/Food.png");
    createFood();
    list.pushEnd(body);

    //plansza
    Texture texture;
    texture.loadFromFile("image/Plansza.png");
    sf::Sprite sprite;
    sprite.setTexture(texture);
 
    //sciezka na moim komputerze do fontu
    string f = "/var/lib/flatpak/runtime/org.freedesktop.Platform/x86_64/19.08/893ea4aa41e387e686d4f31ed3e28682d7da1f5961d5f4d3a1e818573b9c006a/files/share/fonts/google-crosextra-caladea/Caladea-Bold.ttf";
    sf::Font font;
    	if (!font.loadFromFile(f))
        	return EXIT_FAILURE;

    // teksty wypisywane na ekran
    sf::Text text("Punkty -> ", font, 15);
    sf::Text text1("Sterowanie -> WSAD", font, 15);
    sf::Text text2("Pauza -> p", font, 15);
    sf::Text text3(pkt+"", font, 15);
    sf::Text text4("Resume -> r", font, 15);
    sf::Text text6("GAME OVER press R to restart, time to exit 10 s", font, 15);
    text6.setPosition(40,240);
    text.setPosition(20,500);
    text1.setPosition(120,500);
    text2.setPosition(280,500);
    text3.setPosition(90,500);
    text4.setPosition(360,500);
   
    //tworzenie okna i start stopera
    RenderWindow window(VideoMode(480, 530), "Snake!");
    start = std::clock();
    while (window.isOpen() && game)
    {
       Event event;
        	while (window.pollEvent(event))
        	{
        	    if (event.type == Event::Closed)
        	        window.close();
		}
		//poruszanie sie
		if (Keyboard::isKeyPressed(Keyboard::A)) {
			if(l!=3) k=0;
		}
        	if (Keyboard::isKeyPressed(Keyboard::D)) {
			if(l!=0) k=3;
		} 
        	if (Keyboard::isKeyPressed(Keyboard::W)) {
			if(l!=2) k=1;
		}
        	if (Keyboard::isKeyPressed(Keyboard::S)) {
			if(l!=1) k=2;
		}
		//pauza
        	if (Keyboard::isKeyPressed(Keyboard::P))
		{
			while(true)
			{
			        if (Keyboard::isKeyPressed(Keyboard::R)) {break;}

			}
		}

	//czyszczenie okna
	window.clear();

	
        //rysowanie planszy
	for(int i = 0; i<30;i++)
	{
		for(int j = 0; j<30;j++)
		{
			sprite.setPosition(i*16,j*16);
			window.draw(sprite);
		}
	}	



	//co 200 mili sekund zmiana pozycji
	if( (( std::clock() - start ) / (double) CLOCKS_PER_SEC>fast))
	{

		list.head->data.setPath("image/SnakeBody.png");
		BodySnake b(list.head->data.getX(),list.head->data.getY());
		list.pushFirst(b);
		
		if(k==0)
		{
			if(list.head->data.getMinX() < 0)
			{
				game=false;
			}
			list.head->data.left();
			
		}
		else if(k==1)
		{
			if(list.head->data.getMinY() < 0)
			{
				game=false;
			}
			list.head->data.up();
		}
		else if(k==2)
		{
			if(list.head->data.getMaxY() >= 480)
			{
				game=false;
			}
			list.head->data.down();
		}
		else if(k==3)
		{
			if(list.head->data.getMaxX() >= 480)
			{
				game=false;
			}
			list.head->data.right();
		}
		contactFood();
		start = std::clock();

		//sprawdzanie czy snake sam sie zjadl
		if(list.len>1){
			BodySnake* bodySnake2=list.getTab();
			if(!(list.head->data.checkWithSnake(bodySnake2,list.len)))
			{
				game=false;
			}
		}
		l=k;

	
	}

	//rysowanie weza
	BodySnake* bodySnake=list.getTab();
	for(int i =0; i<list.len;i++)
	{
	    window.draw(bodySnake[i].loadSprite());

	}
      
        //rysowanie jedzenia
	window.draw(food.loadSprite());

	
    	//rysowanie textu
	window.draw(text);
	window.draw(text1);
	window.draw(text2);
	window.draw(text4);
	text3.setString(to_string(pkt));
	window.draw(text3);

	//restart
	if(game==false)
	{
	
		for(int i=0; i<10000;i++)
		{
			sleep(sf::milliseconds(1));
			if (Keyboard::isKeyPressed(Keyboard::R)) 
			{
				game=true;
				pkt=0;
				list.freeAll();
				list.pushFirst(body);
				k,l=3;
				fast = 0.200;
				break;
				
			}
			window.clear();
			window.draw(text6);
			window.display();
		}
	}
	
	//odswieza ekran
        window.display();
    }




    return 0;
}




    void createFood()
    {
	
	BodySnake* bodySnake2=list.getTab();
	while(true)
	{
	 //29, bo 480 jest juz poza ekranem lewy gory rog zawsze
	 foodX = 16 * (rand()%29+1);
	 foodY = 16 * (rand()%29+1);
	 food.setX(foodX);
	 food.setY(foodY);

	    if(food.check(bodySnake2,list.len))
	    {
	    break;
	    }
	}
    }


   
    


   
    void contactFood()
    {

	if(list.head->data.contact(food))
	{
	    createFood();
	    pkt++;
	    if(fast>0.060)
	    fast-=0.005;
	}
	else
	{
	list.popEnd();
	
	}
	
    }


