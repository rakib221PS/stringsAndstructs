// Create a struct IntArray, with two fields, a size and a pointer to an int. Write a method create that takes an unsigned integer n (or a size_t) as an argument, and dynamically allocates a new array of size n stores the array in the data structure and sets the size to n. Write a method duplicate, which returns a copy of the data structure: it creates an IntArray, allocates a new array of size n, and copies the elements from from the data structure to the copy (assume that the instance of IntArray was correctly created previously, and the memory is properly allocated).
#include <iostream>

struct intArray
{
    size_t size;
    int *array;

    void create(size_t Arraysize)
    {
		size = Arraysize;
        array = new int[Arraysize];
    }
    void input()
    {
        for (size_t i = 0; i < size; i++)
        {
            std::cout << "Enter element in position: " << i << " ";
            std::cin >> array[i];
        }
    }
    void output()
    {
        for (size_t i = 0; i < size; i++)
        {
            std::cout << array[i] << " ";
        }
    }
    void duplicate(intArray &copyStruct)
    {
		if (copyStruct.array != nullptr) {
			delete [] copyStruct.array;
		}
		copyStruct.create(size);
        for (size_t i = 0; i < size; i++)
        {
			copyStruct.array[i] = array[i];
        }
    }
	// the above works, and looks fine, and is probably better than what I had imagined
	// what I actually had in mind for duplicate was this:
	//
	// intArray duplicate()
	// {
	// 	intArray copy;
	// 	copy.create(size);
	// 	for (size_t i = 0; i < size; i++)
	// 	{
	// 		copy.array[i] = array[i];
	// 	}
	// 	return copy;
	// }
    void outputDuplicate(){
        std::cout<<std::endl;
        for (size_t i = 0; i < size; i++)
        {
            std::cout<<array[i]<<" ";
        }
        
    }
};


int main()
{
    intArray arr, copyStruct;
    // size_t size;
    std::cin >> arr.size;
    // arr.size = 3;
    // arr.array = new int[arr.size];
    arr.create(arr.size);
    // arr.array[0] = 1;
    // arr.array[1] = 2;
    // arr.array[2] = 3;
    arr.input();
    arr.output();
    arr.duplicate(copyStruct);
    copyStruct.outputDuplicate();
    // arr.duplicate(size)
    // takeInput(arr);
    // output(arr);
    // duplicate(arr, copyStruct);
    // outputDuplicate(copyStruct);
    // arr.output();
}
