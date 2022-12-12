## 1- Selection Sort
```
void SelectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
      int min = i;
      for (int j = i + 1; j < n; j++)
      {
          if (arr[j] < arr[min])
          {
              min = j
          }
      }
      int temp = arr[i]
      arr[i] = arr[min]
      arr[min] = temp
  }
}
```
## 2- Bubble Sort
```
void BubbleSort(int arr[], int n)
{
    for (int k = 1; k < n - 1; k++)
    {
        for (int i = 0; i < n - k - 1; i++)
        {
            if (arr[i] < arr[i + 1])
                swap(arr[i], arr[i + 1])
        }
    }
}
```
