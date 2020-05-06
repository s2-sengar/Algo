int Max(int arr[],int l,int h){
    // |1|2|7|5|6|
    int max;
    if(l==h-1){ //when there is only a single element in the array
        max=arr[l];
    }else if(l==h-2){ //when there are two elements in an array
        if(arr[l]>arr[h]){
            max=arr[l];
        }else{
            max=arr[h];
        }
    }else{ //for more than two elements
        int max1,max2,mid;
        mid=l+h/2;
        max1=Max(arr,l,mid);
        max2=Max(arr,mid+1,h);
        if(max1>max2){
            max=max1;
        }
        else{
            max=max2;
        }
    }
    return max;
}
