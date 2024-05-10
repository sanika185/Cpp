#include<iostream>
using namespace std;
class Stack{
private:
    static const int MAX_SIZE = 100;
    int data[MAX_SIZE];
    int topIndex;

public:
    Stack() 
	{
        topIndex = -1;
    }
    void push(int val) 
	{ 
        data[++topIndex] = val;
    }
    void pop() 
	{
        --topIndex;
    }
    
    void print() 
	{
        cout << "Stack elements: ";
        for (int i = topIndex; i >= 0; --i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};
class Queue {
private:
    static const int MAX_SIZE = 100;
    int data[MAX_SIZE];
    int frontIndex;
    int rearIndex;

public:
    Queue() 
	{
        frontIndex = -1;
        rearIndex = -1;
    }

    void enqueue(int val) 
	{
        if (frontIndex == -1) 
		{
            frontIndex = 0;
            rearIndex = 0;
        } else 
		{
            rearIndex = (rearIndex + 1) % MAX_SIZE;
        }
        data[rearIndex] = val;
    }
    void dequeue() 
	{
        if (frontIndex == rearIndex) 
		{
            frontIndex = -1;
            rearIndex = -1;
        } else 
		{
            frontIndex = (frontIndex + 1) % MAX_SIZE;
        }
    }
   
    void print() 
	{
        cout << "Queue elements: ";
        int i = frontIndex;
        while (i != rearIndex) 
		{
            cout << data[i] << " ";
            i = (i + 1) % MAX_SIZE;
        }
        cout << data[rearIndex] << endl;
    }
};

int main() {
    Stack myStack;
    Queue myQueue;

    int choice;
    int element;

    do {
        cout << "\nMain Menu:" << endl;
        cout << "1. Stack Operations" << endl;
        cout << "2. Queue Operations" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
		{
            case 1:
                int stackChoice;
                do {
                    cout << "\nStack Operations:" << endl;
                    cout << "1. Push" << endl;
                    cout << "2. Pop" << endl;
                    cout << "3. Print Stack" << endl;
                    cout << "4. Back to Main Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> stackChoice;

                    switch (stackChoice) 
					{
                        case 1:
                            cout << "Enter element to push: ";
                            cin >> element;
                            myStack.push(element);
                            break;
                        case 2:
                            myStack.pop();
                            break;
                        case 3:
                            myStack.print();
                            break;
                        case 4:
                            cout << "back to the main menu" << endl;
                            break;
                        default:
                            cout << "Invalid choice" << endl;
                            break;
                    }
                } while (stackChoice != 5);
                break;
            case 2:
                int queueChoice;
                do {
                    cout << "\nQueue Operations:" << endl;
                    cout << "1. Enqueue" << endl;
                    cout << "2. Dequeue" << endl;
                    cout << "3. Print Queue" << endl;
                    cout << "4. Back to Main Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> queueChoice;

                    switch (queueChoice) 
					{
                        case 1:
                            cout << "Enter element to enqueue: ";
                            cin >> element;
                            myQueue.enqueue(element);
                            break;
                        case 2:
                            myQueue.dequeue();
                            break;
                        case 3:
                            myQueue.print();
                            break;
                        case 4:
                            cout << "back to main menu" << endl;
                            break;
                        default:
                            cout << "Invalid choice" << endl;
                            break;
                    }
                } while (queueChoice != 5);
                break;
            case 3:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}
