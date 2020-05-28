#include <iostream>
using namespace std;


class Node
	{
	

        public:
		BodySnake data;
		Node* next;
		Node* prev;


		Node(const BodySnake &data) 
		{
			this->next=NULL;
			this->prev=NULL;
			this->data=data;

		}

		Node()
		{
			this->next=NULL;
			this->prev=NULL;
		}



        	BodySnake getData()
		{
			return data;
		}

		void setData(const BodySnake &data) 
		{
			this->data=data;
		}
    };


class LinkedList {


	public:
	
	Node* head;
	Node* tail;
	int len=0;

	LinkedList()
	{
        this->head=NULL;
        this->tail=NULL;
	}



    /**********************************************************/


   

    void pushEnd(const BodySnake &value) {

      Node* element = new Node();
      len++;

	cout<<value.getX();
        element->setData(value);
        element->next = NULL;

        if (this->tail == NULL){
            this->head = element;
            this->tail = element;
	    this->head->next = NULL;
	    this->tail->prev = NULL;
        }
	else{
        element->prev=this->tail;
	this->tail->next = element;
	this->tail = element;
	this->tail->next = NULL;
	}

    }





 /**********************************************************/  

    void freeAll() {

      while(head!=NULL)
      {
	popEnd();
      }

    }
/**********************************************************/

   BodySnake* getTab() const
   {
	   Node* element = this->head;
	   BodySnake *bodySnake = new BodySnake[len]; 
	   for(int i = 0; i<len;i++)
	   {
		bodySnake[i]=element->getData();
		element = element->next;
	   }
	   free(element);
	   return bodySnake;


   }

/**********************************************************/

   void pushFirst(const BodySnake &value) {

      Node* element = new Node();
      len++;


        element->setData(value);
        element->next = NULL;

        if (this->head == NULL){
            this->head = element;
            this->tail = element;
	    this->head->next = NULL;
	    this->tail->prev = NULL;
            
        }
	else{
        element->next = this->head;
	this->head->prev = element;
	this->head = element;
	this->head->prev = NULL;
	}

    }

	

/**********************************************************/

   void popFirst() 
	{

      	len--;
        if(this->head == NULL)
        {

        }
        else if(this->tail==this->head)
        {

            this->head=NULL;
            this->tail=NULL;

        }
	else
	{
        Node* curr = this->head->next;
	free(this->head);
        this->head = curr;
	this->head->prev = NULL;
	}

	}

/**********************************************************/

   void popEnd() 
	{
	len--;
        if(this->head == NULL)
        {

        }
        else if(this->tail==this->head)
        {

            this->head=NULL;
            this->tail=NULL;

        }
	else
	{
       
        Node* curr = this->tail->prev;
	free(this->tail);
        this->tail = curr;
	this->tail->next = NULL;
	}

	}
	
 

	};
