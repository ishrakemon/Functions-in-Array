#include<iostream>

// Function Prototypes
void TakingArrayElement(double Array[], int Size);
void displayArrayElements(double Array[], int Size);
int FindElementIndex(double Array[], int Size, double Number);

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
    std::cout<< "-----------------------------------"<<std::endl;

    // Finding Index of a Given Number
    double number;
    std::cout<< "\nEnter the number to search in the Array: ";
    std::cin>> number;

    int index = FindElementIndex(array, size, number)
    if(index != -1){
        std::cout<<"Number found at index: "<<index<<std::endl;
    } else{
        std::cout<<"Number not found in the Array!"<<std::endl;
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

// Function to find an index of an element
int FindElementIndex(double Array[], int Size, double Number){
    for(int i=0; i<Size; i++){
        if(Array[i]==Number){
            return i; //Returns index if found
        }
    }
    return -1; // Returns -1 if not found
}