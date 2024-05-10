#include<iostream>
#include<string>
using namespace std;
#define MAX_SIZE 10
struct Product{
    string productId;
    string productName;
    string productPrice;
};

void displayProducts(Product productList[], int n) 
{
    cout << "\nProduct List\n";
    cout << "ID\tName\tPrice\n";
    for (int i = 0; i < n; ++i) 
	{
        cout << productList[i].productId << "\t" << productList[i].productName << "\t" << productList[i].productPrice << endl;
    }
    cout << endl;
}

void insertProduct(Product productList[], int &n, int pos, Product newProduct) 
{
    for (int i = n; i > pos; --i) 
	{
        productList[i] = productList[i - 1];
    }
    productList[pos] = newProduct;
    n++;
    cout << "Product inserted at position " << pos << "\n";
}

void deleteProduct(Product productList[], int &n, int pos) 
{
    Product deletedProduct = productList[pos];
    for (int i = pos; i < n - 1; ++i) 
	{
        productList[i] = productList[i + 1];
    }
    n--;
    cout << "Product deleted from position " << pos << "\n";
}

int main() 
{
    Product productList[MAX_SIZE];
    int n = 0;

    int choice, pos;
    Product newProduct;

    while (true) 
	{
        cout << "\nProduct Management System\n";
        cout << "1. Display Products\n";
        cout << "2. Insert Product\n";
        cout << "3. Delete Product\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
		{
            case 1:
                displayProducts(productList, n);
                break;
            case 2:
                cout << "Enter the position to insert: ";
                cin >> pos;
                cout << "Enter Product ID: ";
                cin >> newProduct.productId;
                cout << "Enter Product Name: ";
                cin >> newProduct.productName;
                cout << "Enter Product Price: ";
                cin >> newProduct.productPrice;
                insertProduct(productList, n, pos, newProduct);
                break;
            case 3:
                cout << "Enter the position to delete: ";
                cin >> pos;
                deleteProduct(productList, n, pos);
                break;
            case 4:
                cout << "Exiting\n";
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }

    return 0;
}
