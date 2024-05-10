#include<iostream>
#include<string>

using namespace std;

class Product {
private:
    int prod_id;
    string prod_name;
    int stock;
    float gst;
    float discount;
    float productprice;

public:
    Product(int id, string name, int stock, float gst, float discount, float price) 
	{
        this->prod_id = id;
        this->prod_name = name;
        this->stock = stock;
        this->gst = gst;
        this->discount = discount;
        this->productprice = price;
    }

    int getProdId() 
	{ 
	    return prod_id; 
	}
    string getProdName() 
	{
	    return prod_name; 
	}
    int getStock() 
	{ 
	    return stock; 
	}
    float getGst() 
	{ 
	    return gst; 
	}
    float getDiscount() 
	{ 
	    return discount; 
		}
    float getProductPrice() 
	{ 
	    return productprice; 
	}

    void ViewProduct() 
	{
        cout << "Product ID= " << prod_id << endl;
        cout << "Product Name= " << prod_name << endl;
        cout << "Stock= " << stock << endl;
        cout << "GST= " << gst << "%" << endl;
        cout << "Discount= " << discount << "%" << endl;
        cout << "Product Price= " << productprice << endl;
    }

    bool CheckStock(int quantity) 
	{
        return stock >= quantity;
    }
};

class PurchasedProduct 
{
private:
    Product* product;
    int quantity;

public:
    PurchasedProduct(Product* product, int quantity) 
	{
        this->product = product;
        this->quantity = quantity;
    }

    Product* getProduct() 
	{ 
	    return product; 
	}
    int getQuantity() 
	{ 
	    return quantity; 
	}

    float calculateGst() 
	{
        return (product->getProductPrice() * quantity) * (product->getGst() / 100);
    }

    float calculateDiscount() 
	{
        return (product->getProductPrice() * quantity) * (product->getDiscount() / 100);
    }

    float calculatePrice() 
	{
        return (product->getProductPrice() * quantity) + calculateGst() - calculateDiscount();
    }
};

class Node{
private:
    PurchasedProduct* purchasedProduct;
    Node* next;

public:
    Node(PurchasedProduct* purchasedProduct) 
	{
        this->purchasedProduct = purchasedProduct;
        this->next = NULL;
    }

    PurchasedProduct* getPurchasedProduct() 
	{ 
	    return purchasedProduct; 
	}
    Node* getNext() 
	{ 
	    return next; 
	}
    void setNext(Node* next) 
	{ 
	    this->next = next; 
	}
};

class LinkedList {
public:
	Node* head;
    LinkedList() 
	{
        head = NULL;
    }
    LinkedList(Node* node) 
	{
        head = node;
    }
    void AddNode(Node* node) 
	{
        if (head == NULL) 
		{
            head = node;
        } else 
		{
            Node* temp = head;
            while (temp->getNext()!= NULL) 
			{
                temp = temp->getNext();
            }
            temp->setNext(node);
        }
    }

    void DeleteNode(Node* node) 
	{
        if (head == node) 
		{
            head = node->getNext();
        } else 
		{
            Node* temp = head;
            while (temp->getNext()!= node) 
			{
                temp = temp->getNext();
            }
            temp->setNext(node->getNext());
        }
    }

    void Traverse() 
	{
        Node* temp = head;
        while (temp!= NULL) 
		{
            PurchasedProduct* purchasedProduct = temp->getPurchasedProduct();
            Product* product = purchasedProduct->getProduct();
            cout << "Product Name= " << product->getProdName() << endl;
            cout << "Quantity= " << purchasedProduct->getQuantity() << endl;
            cout << "Price=" << purchasedProduct->calculatePrice() << endl;
            temp = temp->getNext();
        }
    }
};

class Cart {
private:
    LinkedList* linkedList;

public:
    Cart() 
	{
        linkedList = new LinkedList();
    }

    void AddProduct(PurchasedProduct* purchasedProduct) 
	{
        Node* node = new Node(purchasedProduct);
        linkedList->AddNode(node);
    }

    void RemoveProduct(PurchasedProduct* purchasedProduct) 
	{
        Node* temp = linkedList->head;
        while (temp!= NULL) 
		{
            if (temp->getPurchasedProduct() == purchasedProduct) 
			{
                linkedList->DeleteNode(temp);
                break;
            }
            temp = temp->getNext();
        }
    }

    void viewCart() 
	{
        linkedList->Traverse();
    }

    void GenerateBill() 
	{
        float total = 0;
        Node* temp = linkedList->head;
        while (temp!= NULL) {
            PurchasedProduct* purchasedProduct = temp->getPurchasedProduct();
            Product* product = purchasedProduct->getProduct();
            cout << "Product Name= " << product->getProdName() << endl;
            cout << "Quantity= " << purchasedProduct->getQuantity() << endl;
            cout << "Price= " << purchasedProduct->calculatePrice() << endl;
            total += purchasedProduct->calculatePrice();
            temp = temp->getNext();
        }
        cout << "Total= " << total << endl;
    }

    void DisplayBill() 
	{
      
        cout << " Billing Information" << endl;
       
        GenerateBill();
    }
};                                                                                         
int main() {
    Product* product1 = new Product(1, "Laptop", 10, 18, 10, 1000);
    Product* product2 = new Product(2, "Monitor", 20, 12, 5, 500);
    Product* product3 = new Product(3, "Keyboard", 50, 5, 0, 50);

    PurchasedProduct* purchasedProduct1 = new PurchasedProduct(product1, 2);
    PurchasedProduct* purchasedProduct2 = new PurchasedProduct(product2, 1);
    PurchasedProduct* purchasedProduct3 = new PurchasedProduct(product3, 3);

    Cart* cart = new Cart();
    cart->AddProduct(purchasedProduct1);
    cart->AddProduct(purchasedProduct2);
    cart->AddProduct(purchasedProduct3);

    cart->viewCart();
    cart->DisplayBill();

    return 0;
}
