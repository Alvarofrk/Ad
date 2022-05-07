InsertionSort(Array,min,max){
	j=min+1
	while j<=max{
	key=Array[j];
	i=j-1;
		while i>=min and Array[i]>key{
			Array[i+1]=Array[i];
			i=i-1;
		}
		Array[i+1]=key;
	}
}

Merge(Array[],min,max,med){
	i=min;
	j=med+1;
	cont=0;
	temp[max-min+1];
	
	while(i<=med && j<=max)
		temp[cont++]=(array[i]<array[j]) ? array[i++] : array[j++];
	while(i<=med)
		temp[cont++]=array[i++];
	while(j<=max)
		temp[cont++]=array[j++];
	for(i=min;i<=max;i++)
		array[i]=temp[i-min];
}

