
class Node
{
private:
		int data;
		int key;  
		Node* next;
public:
		Node()
		{
			data=0;
			key=0;
			next=NULL;
		}
		Node(int data, int key)
		{
			this->data=data;
			this->key=key;
			this->next=NULL;

		}
		void setData(int data)
		{
			this->data=data;
		}
		void setKey(int key)
		{
			this->key = key;
		}
		void setNext(Node* next)
		{
			this->next=next;
		}
		int getData()
		{
			return data;
		}
		int getKey()
		{
			return key;
		}
		Node* getNext()
		{
			return next;
		}

};