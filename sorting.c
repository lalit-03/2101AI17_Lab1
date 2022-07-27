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

//MERGE SORT
void merge(int a[], int start, int mid, int end){
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++){
        L[i] = a[start + i];
    }
    for (int j = 0; j < n2; j++){
        R[j] = a[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = start;

    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            a[k++] = L[i++];
        }
        else{
            a[k++] = R[j++];
        }
    }
    while (i < n1){
        a[k++] = L[i++];
    }

    while (j < n2){
            a[k++] = R[j++];
        }
}

void merge_sort(int a[], int start, int end){
    if (start < end){
        int mid = (start + end) / 2;
        merge_sort(a, start, mid);
        merge_sort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

// QUICK SORT
int partition(int a[], int start, int end){
    int pivot = a[end];
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++){
        if (a[j] < pivot){
            i++;
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    int t = a[i + 1];
    a[i + 1] = a[end];
    a[end] = t;
    return (i + 1);
}

void quick_sort(int a[], int start, int end){
    if (start < end){
        int p = partition(a, start, end);
        quick_sort(a, start, p - 1);
        quick_sort(a, p + 1, end);
    }
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
        merge_sort(arr, 0, n-1);

        printf("Sorted Array: ");
        for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
        }
    }
    else if(choice==5){
        quick_sort(arr, 0, n-1);

        printf("Sorted Array: ");
        for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
        }
    }
    else{
        printf("Please enter a valid choice.");
    }

    return 0;
}