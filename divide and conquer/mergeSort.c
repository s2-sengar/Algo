void mergeSort(int arr[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);
        merge(arr,l,h);
    }
}
void merge(int arr[],int l,int h){
    int i,j,k,m,temp_arr[10];
    m=(l+h)/2;
    i=l;j=m+1;k=l;
    while(i<=m && j<=h){
        if(arr[i]<arr[j]){
            temp_arr[k]=arr[i];
            i++;
        }else{
            temp_arr[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=m){
        temp_arr[k]=arr[i];
        i++;
        k++;
    }
    while(j<=h){
        temp_arr[k]=arr[j];
        j++;
        k++;
    }
    for(i=l;i<k;i++){
        arr[i]=temp_arr[i];
    }
}
