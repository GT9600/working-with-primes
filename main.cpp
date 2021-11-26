// A. a function that returns a copy of an array (data) with the given size
#include <iostream>
using namespace std;

double* copyArray (double data[], int size);

double* copyArray(double data[], int size){
    double* copy = new double[size];
    for (int i = 0; i < size; i++) {
        copy[i] = data[i];
    }
    return copy;
}

// B. a function that returns the reverse of an array (data) with the given size
int* reverse (int* data, int size);

int* reverse(int* data, int size){
for(int i = 0, j = size - 1; i < j; i++, j--){
    int holdTemp = data[j];
    data[j] = data[i];
    data[i] = holdTemp;
}
return data;
}

//C. a function that returns a list of all prime numbers less than a given number
// it also returns the size of that list
// prime number is a number that is only divisible by 1 and itself.
int* primes(int number, int &size);
int* primes(int number, int &size){
    int tempArray[500];
    int count = 0;

for (int i = 2; i < number; i++){
    bool isPrime = true;
    for (int j = 2; j < number; j++ ){
        if (j % i == 0) {
            isPrime = false;
        }
    }
    if (isPrime == true){
        tempArray[count] = i;
        count++;
    }
}
int* prime = new int[count];
size = count;
for (int i = 0; i < count; i++) {
    prime[i] = tempArray[i];
}
return prime;
}

//D:
// a function that returns the maximum and minimum of a list with a given size
void minMax(double *list, int size, double *min, double *max);
void minMax(double *list, int size, double *min, double *max){
    cout << min << endl;
    cout << max << endl;
    return;
}

int main(){
    double doubleData[6]{1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    int intData[6]{1, 2, 3, 4, 5, 6};
    int number = 50;
    double min;
    double max;
    int size = 6;
    int primeSize;
    double* x = copyArray(doubleData, size);
    int* y = reverse(intData, size);
    int* z = primes(number, primeSize);
    minMax(doubleData, size, &min, &max);


    for (int i = 0; i < size; i++)
        cout << "Question A: " << x[i] << endl;
    for (int i = 0; i < size; i++)
        cout << "Question B: " << y[i] << endl;
    for (int i = 0; i < size; i++)
        cout << "Question C: " << z[i] << endl;


    return 0;
}


