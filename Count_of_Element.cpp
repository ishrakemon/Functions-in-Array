#include<iostream>

// Function Prototypes
void TakingArrayElement(double Array[], int Size);
void displayArrayElements(double Array[], int Size);
int CountElementLessThenLastAndNum(double Array[], int Size, double Number);

int main(){
    int size;
    std::cout<< "Enter the size of the Array: ";
    std::cin>> size;

    double* array = new double[size]; // Dynamic memory allocation
    std::cout<< "\nEnter the Elements of the Array: "<<std::endl;
    std::cout<< "-----------------------------------"<<std::endl;

    TakingArrayElement(array, size); // Function call for taking array elements input

    std::cout<< "\nArray: ";
    displayArrayElements(array, size); // Function call for displaying array elements
    std::cout<< "\n-----------------------------------"<<std::endl;

    double number;
    std::cout<< "\nEnter the number: ";
    std::cin>> number;

    int count = CountElementLessThenLastAndNum(array, size, number); // Function call for count of number less than the last element and given number
    if(count!=0){
        std::cout<<"Count of Element that are less than the last element and given number: "<<count<<std::endl;
    } else{
        std::cout<<"There is No element that are less than the last element and given number!"<<std::endl;
    }
    
    delete[] array; // Deallocate memory
    return 0;
}

// Function to take user input for the array
void TakingArrayElement(double Array[], int Size){
    for(int i=0; i<Size; i++){
        std::cout<< "Element "<< i+1 <<": ";
        std::cin>> Array[i];
    }
}

// Function to display array elements
void displayArrayElements(double Array[], int Size){
    for(int i=0; i<Size; i++){
        std::cout<< Array[i]<<" ";
    }
}

// Function to count number less than the last element and a given number
int CountElementLessThenLastAndNum(double Array[], int Size, double Number){
    int Count=0;
    for(int i=0; i<Size; i++){
        if(Array[i]<Array[Size-1] && Array[i]<Number){
            Count++;
        }
    }
    return Count;
}