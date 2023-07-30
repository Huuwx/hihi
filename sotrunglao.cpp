#include <iostream>
#include<math.h>

using namespace std;

int countPairs(int arr[], int size,int m) {
    int count = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] <= m) {
                count++;
            }
        }
    }

    return count;
}
void ArrayInput(int arr[],int size){
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}

int main() {
	int n,m;
	cin>>n>>m;
	if(n>pow(10,6)&&n<1){
		return 0;	
	}
	if(abs(m)>pow(10,9)){
		return 0;
	}
    int arr[n];
    ArrayInput(arr,n);

    int pairCount = countPairs(arr, n,m);

    cout << pairCount;

    return 0;
}
