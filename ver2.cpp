#include <iostream>
#include <array>
#include <string>

const int MAX_SIZE = 10;

using namespace std;

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
      stack_size = -1;
    }

    bool isEmpty()
    {
        return (stack_size == -1);
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
      if (stack_size >= 10)
      {
        cout << "Stack is full. " << endl;
      }

      else
      {
        stack[stack_size] = store;
        stack_size++;
        cout << "Pushed onto the stack." << endl;
      }
    }

    Dish pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty." << endl;
        }

        else
        {
            Dish poppedElement;

            poppedElement = stack[stack_size -1 ];
            stack_size--;
            cout << "Popped from the stack." << endl;
            return poppedElement;
        }
    }

    Dish peek()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty." << endl;
        }

        else
        {
            Dish peekedElement;

            peekedElement = stack[stack_size];
            return peekedElement;
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

    stack.push(one_dish);
    stack.push(two_dish);
    stack.push(red_dish);
    stack.push(blue_dish);

    // The variable size_after_pushes should equal four.
    int size_after_pushes = stack.size();

    // The variable peeked_dish should have a description of "A dish with a blue fish pattern on it"
    Dish peeked_dish = stack.peek();

    // The variable popped_dish should have a description of "A dish with a blue fish pattern on it"
    Dish popped_dish = stack.pop();

    // The variable another_popped_dish should have a description of "A dish with a red fish pattern on it"
    Dish another_popped_dish = stack.pop();

    // The variable final_size should equal two.
    int final_size = stack.size();
}
