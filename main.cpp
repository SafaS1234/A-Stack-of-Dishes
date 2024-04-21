#include <iostream>
#include <array>
#include <string>

using namespace std;

const int MAX_SIZE = 10;

class Dish {
  private:
    string description;

  public:
    Dish(){}

    Dish(string description) 
    {
      this->description = description;
    }

    string get_description() 
    {
      return this->description;
    }

};

class DishStack
{
  private:
    Dish stack [MAX_SIZE];
    int stack_size;
  
  public:
    DishStack()
    {
      stack_size = 0;
    }

    bool isEmpty()
    {
        return (stack_size == 0);
    }

    bool isFull()
    {
        return (stack_size == MAX_SIZE);
    }

    int size()
    {
      return stack_size;
    }
    
    void push(Dish store)
    {
        if(!isFull())
        {
            stack_size++;
            stack[stack_size] = store;
            cout << "Pushed the following onto the stack: " << endl;
            cout << store.get_description() <<"\n"<< endl;
        }

        else
        {
            cout << "Stack is full. " << endl; 
        }
    }

    Dish pop()
    {
        if(!isEmpty())
        {
            Dish poppedElement = stack[stack_size];
            stack_size--;
            cout << "Popped the following from the stack: " << endl;
            cout << poppedElement.get_description() <<"\n"<< endl;
            return poppedElement;
        }

        else
        {
            cout << "Stack is empty. " << endl; 
            return Dish("");
        }
    }

    Dish peek()
    {
        if(!isEmpty())
        {
            Dish peekedElement;
            peekedElement = stack[stack_size];
            cout << "Peeked the following from the stack: " << endl;
            cout << peekedElement.get_description() <<"\n"<< endl;
            return peekedElement;
        }

        else
        {
            cout << "Stack is empty. " << endl; 
            return Dish("");
        }
    }
};


int main()
{
    DishStack stack;
    Dish one_dish = Dish("A dish with one fish pattern on it");
    Dish two_dish = Dish("A dish with two fish patterns on it");
    Dish red_dish = Dish("A dish with a red fish pattern on it");
    Dish blue_dish = Dish("A dish with a blue fish pattern on it");

    // The variable stack_size should equal zero.
    int stack_size = stack.size();
    cout << "Stack size: " << stack_size << "\n" << endl;

    stack.push(one_dish);
    stack.push(two_dish);
    stack.push(red_dish);
    stack.push(blue_dish);

    // The variable size_after_pushes should equal four.
    int size_after_pushes = stack.size();
    cout << "Stack size: " << size_after_pushes << "\n" << endl;

    // The variable peeked_dish should have a description of "A dish with a blue fish pattern on it"
    Dish peeked_dish = stack.peek();

    // The variable popped_dish should have a description of "A dish with a blue fish pattern on it"
    Dish popped_dish = stack.pop();

    // The variable another_popped_dish should have a description of "A dish with a red fish pattern on it"
    Dish another_popped_dish = stack.pop();

    // The variable final_size should equal two.
    int final_size = stack.size();
    cout << "Stack size: " << final_size << "\n" << endl;
}
