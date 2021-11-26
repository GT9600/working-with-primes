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
int* primes(int number, int& size);


int* primes(int number, int& size){
    int temp[500];
    for (int i = 0; i < 500; i++){
        temp[i] = 0;
    }
    int x = 0;
    for (int i = 2; i<number; i++)
    {
        bool isPrime = true;
        for (int j = 2; j*j<=i; j++){
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime == true){
            temp[x] = i;
            x++;
        }
    }
    size = x;
    int *prime = new int[size];
    for (int i = 0; i < size; i++){
        if (temp[i] != 0){
            prime[i] = temp[i];
        }
    }
    return prime;

}
//D:
// a function that returns the maximum and minimum of a list with a given size
void minMax(double *list, int size, double *min, double *max);
void minMax(double *list, int size, double *min, double *max){
    double tempMin = list[0];
    double tempMax = list[0];

    for(int i = 1; i < size; i++){
        if(tempMax< list[i])
            tempMax = list[i];
        if(tempMin > list[i])
            tempMin = list[i];
    }
    *min = tempMin;
    *max = tempMax;
    cout << "Question D: Min is: " << *min << endl;
    cout << "Question D: Max is:  " << *max << endl;

    return;
}

int main(){
    double doubleData[]{1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    int intData[6]{1, 2, 3, 4, 5, 6};
    int number = 50;
    double min = doubleData[0];
    double max = doubleData[0];
    int size = 6;
    int primeSize;
    double* x = copyArray(doubleData, size);
    int* y = reverse(intData, size);
    int* z = primes(number, primeSize);

    for (int i = 0; i < size; i++)
        cout << "Question A: " << x[i] << endl;
    for (int i = 0; i < size; i++)
        cout << "Question B: " << y[i] << endl;
    for (int i = 0; i < primeSize; i++)
        cout << "Question C: " << z[i] << endl;
    minMax(doubleData, size, &min, &max);


    return 0;
}


