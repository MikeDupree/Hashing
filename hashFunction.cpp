int hashFunction(char *insertKey, int keyLength){
	int sum = 0;

	for(int j=0; j<keyLength; j++){
		sum += static_cast<int>(insertKey[j]);
	}// end for loop
	return (sum % HTSize);
}// end hashFunction()