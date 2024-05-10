#include<iostream>
using namespace std;
class product
{
	public:
	int id,price,gst;
	string name;
	public :
		void getd()
		{
			cout<<"Enter product name : ";
			cin>>name;
			cout<<endl;
			cout<<"enter id : ";
			cin>>id;
			cout<<endl;
			cout<<"enter price : ";
			cin>>price;
			cout<<endl;
			cout<<"Enter gst : ";
			cin>>gst;
			cout<<endl;
			cout<<"_______________"<<endl;
		}
		void disp()
		{
		cout <<name << "               ";
        cout <<id << "         ";
        cout <<price << "          ";
        cout <<gst << endl;
		}
};
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    // Insert a new node at the beginning of the linked list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert a new node at the end of the linked list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }

    // Delete the first occurrence of a node with given value
    void deleteNode(int value) {
        Node* current = head;
        Node* prev = NULL;
        while (current != NULL && current->data != value) {
            prev = current;
            current = current->next;
        }
        if (current == NULL) {
            std::cout << "Node with value " << value << " not found." << std::endl;
            return;
        }
        if (prev == NULL) {
            head = current->next;
        } else {
            prev->next = current->next;
        }
        delete current;
    }

    // Display the linked list
    void display() {
        Node* current = head;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
     // Insert a new node at a specified position in the linked list
    void insertAtPosition(int value, int position) {
        if (position <= 0) {
            std::cout << "Invalid position." << std::endl;
            return;
        }
        if (position == 1) {
            insertAtBeginning(value);
            return;
        }
        Node* newNode = new Node(value);
        Node* current = head;
        int currentPosition = 1;
        while (currentPosition < position - 1 && current != NULL) {
            current = current->next;
            currentPosition++;
        }
        if (current == NULL) {
            std::cout << "Invalid position." << std::endl;
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

};
int main()
{
	int k;
	cout<<"1.Static"<<endl<<"2.Linked list"<<endl;
	cout<<"Enter choice : ";
	cin>>k;
	cout<<endl;
	if(k==1)
	{
	
	product p1[100];
	int n,i;
	cout<<"Size : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		p1[i].getd();
	}
	cout<<"Product name   "<<"product id  "<<"produnt price  "<<"Gst  "<<endl;
	for(i=0;i<n;i++)
	{
		p1[i].disp();
	}
	int ch=1;
	while(ch!=0)
	{
		cout<<"1.Insert"<<endl<<"2.Delete"<<endl<<"3.Search"<<endl<<"4.exit"<<endl;
		cout<<"Enter choice : ";
		cin>>ch;
		cout<<endl;
		if(ch==1)
		{
			int pos;
			cout<<"Enter position";
			cin>>pos;
			for(i=n;i>=pos;i--)
			{
				p1[i]=p1[i-1];
			}
			n++;
			cout<<"Enter product name : ";
			cin>>p1[pos-1].name;
			cout<<endl;
			cout<<"enter id : ";
			cin>>p1[pos-1].id;
			cout<<endl;
			cout<<"enter price : ";
			cin>>p1[pos-1].price;
			cout<<endl;
			cout<<"Enter gst : ";
			cin>>p1[pos-1].gst;
			cout<<endl;
			cout<<"Product name   "<<"product id  "<<"produnt price  "<<"Gst  "<<endl;
			for(i=0;i<n;i++)
	{
		p1[i].disp();
	}
		}
		else if(ch==2)
		{
				int pos;
			cout<<"Enter position";
			cin>>pos;
			for(i=pos-1;i<n;i++)
			{
				p1[i]=p1[i+1];
			}
			n--;
			cout<<"Product name   "<<"product id  "<<"produnt price  "<<"Gst  "<<endl;
			for(i=0;i<n;i++)
	    {
		p1[i].disp();
	    }
		}
		else if(ch==3)
		{
			int pos;
			cout<<"Enter position";
			cin>>pos;
			cout<<"Product name   "<<"product id  "<<"produnt price  "<<"Gst  "<<endl;
			p1[pos-1].disp();
		}
		else
		{
			break;
		}
		
	}
}
else if(k==2)
{
	LinkedList list;
	int pk;
	int ch=0;
	while(ch!=6)
	{
		cout<<"1.insertAtBeginning"<<endl<<"2.insertAtEnd"<<endl<<"3.insert at position"<<endl<<"4.delete"<<endl<<"5.display"<<endl<<"6.exit"<<endl;
		cout<<"enter choice : ";
		cin>>ch;
		cout<<endl;
		if(ch==1)
		{
			int da;
			cout<<"enter data";
			cin>>da;
			 list.insertAtBeginning(da);
		}
		else if(ch==2)
		{
			int da;
			cout<<"enter data :";
			cin>>da;
			 list.insertAtEnd(da);
		}
		else if(ch==3)
		{
			int da,pos;
			cout<<"enter data :";
			cin>>da;
			cout<<"\nenter position :n";
			cin>>pos;
			 list.insertAtPosition(da,pos);
		}
		else if(ch==4)
		{
				int da;
			cout<<"enter data :";
			cin>>da;
			list.deleteNode(da);
		}
		else if(ch==5)
		{
			list.display();
		}
		else
		{
			break;
		}
	}
	
}
else
{
	cout<<"invalid";
}
	
}
