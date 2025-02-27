#include<iostream>

// Function Prototypes
void TakingArrayElement(double Array[], int Size);

int main(){
    int size;
    std::cout<< "Enter the size of the Array: ";
    std::cin>> size;

    double* array = new double[size]; // Dynamic memory allocation
    std::cout<< "\nEnter the Elements of the Array: "<<std::endl;
    std::cout<< "-----------------------------------"<<std::endl;

    TakingArrayElement(array, size); // Function call for taking array elements input
    
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