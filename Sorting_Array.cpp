#include<iostream>

// Function Prototypes
void TakingArrayElement(double Array[], int Size);
void DisplayArrayElements(double Array[], int Size);
void BubbleSortArray(double Array[], int Size);

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

    BubbleSortArray(array, size); // Function call to sort the array
    std::cout<<"After sorting: ";
    DisplayArrayElements(array, size); // Function call to display the sorted array
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

// Bubble Sort function to Sort the Array
void BubbleSortArray(double Array[], int Size){
    for(int i=0; i<Size-1; i++){
        for(int j=0; j<Size-1-i; j++){
            // Swap if the element found is greater than the next element
            if(Array[j]>Array[j+1]){
                double temp=Array[j];
                Array[j]=Array[j+1];
                Array[j+1]=temp;
            }
        }
    }
}