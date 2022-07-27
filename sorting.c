#include <stdio.h>

int insertion_sort(int arr[], int n){
    int i, j;
    
    for(int i=1;i<n;i++){
        
        int temp = arr[i];
        j = i - 1;

        while(j>=0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j+1] = temp;
    }

    printf("Sorted Array: ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

}

int selection_sort(int arr[], int n){
    int x;
    for(int i=0;i<n-1;i++){
        x = i;

        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[x])
            x = j;
        }

        int temp = arr[x];
        arr[x] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted Array: ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

}

int bubble_sort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

}

int merge_sort(int arr[], int n){

}

int quick_sort(int arr[], int n){

}

int main(){
    int n;
    
    printf("Enter size of array to be sorted: ");
    scanf("%d", &n);

    int arr[n], choice;

    printf("Enter elements of the array separated by spaces(all elements shoulb be integers): ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter 1 for Insertion Sort, 2 for Selection Sort, 3 for Bubble Sort, 4 for Merge Sort, 5 for Quick Sort: ");
    scanf("%d", &choice);

    if(choice==1){
        insertion_sort(arr, n);
    }
    else if(choice==2){
        selection_sort(arr, n);
    }
    else if(choice==3){
        bubble_sort(arr, n);
    }
    else if(choice==4){
        merge_sort(arr, n);
    }
    else if(choice==5){
        quick_sort(arr, n);
    }
    else{
        printf("Please enter a valid choice.");
    }

    return 0;
}