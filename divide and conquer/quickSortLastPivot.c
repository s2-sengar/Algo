void quickSort(int arr[],int l,int h){
    if(l<h){
        int p; //p=pivot index
        p=partition(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
}
int partition(int arr[],int l,int h){ // by selecting last index as pivot index
    int pi,i,j,temp;
    pi=h;i=0;j=0;
    while(j<h){
        if(arr[j]<arr[pi]){  // 1,7,3,12,3,6
           j++;             // i=-1,j=0
        }else{
            i++;
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }
    temp=arr[j];
    arr[j]=arr[pi];
    arr[pi]=temp;
    return j;
}
