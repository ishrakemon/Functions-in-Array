#include<iostream>

// Function Prototypes
void TakingArrayElement(double Array[], int Size);
void DisplayArrayElements(double Array[], int Size);
void ReverseArrayElements(double Array[], int Size);

int main(){
    int size;
    std::cout<< "Enter the size of the Array: ";
    std::cin>> size;

    double* array = new double[size]; // Dynamic memory allocation
    std::cout<< "\nEnter the Elements of the Array: "<<std::endl;
    std::cout<< "-----------------------------------"<<std::endl;

    TakingArrayElement(array, size); // Function call for taking array elements input

    std::cout<< "\nArray: ";
    DisplayArrayElements(array, size); // Function call for displaying array elements
    std::cout<< "\n-----------------------------------"<<std::endl;

    ReverseArrayElements(array, size); // Function call to reverse the array
    std::cout<<"After reversing: ";
    DisplayArrayElements(array, size);
    std::cout<<std::endl;
    
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
void DisplayArrayElements(double Array[], int Size){
    for(int i=0; i<Size; i++){
        std::cout<< Array[i]<<" ";
    }
}

// Function to reverse the array elements
void ReverseArrayElements(double Array[], int Size){
    int start=0;
    int end=Size-1;
    while(start<end){
        double temp=Array[start];
        Array[start]=Array[end];
        Array[end]=temp;
        start++;
        end--;
    }
}