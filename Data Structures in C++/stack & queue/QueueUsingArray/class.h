template <typename T>

class QueueUsingArray{
	T *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;
	
	public :
		// constructor
		QueueUsingArray(int s) {
			data = new T[s];
			nextIndex = 0;
			firstIndex = -1;
			size = 0;  // realtime size
			capacity = s; // to maintain data size
		}
		
	// return size
	int getSize() {
		return size;
	}
	
	// check queue is empty or not
	bool isEmpty() {
		return size == 0;
	}
	
	// To insert an element
	void enqueue(T element) {
		
		if(size == capacity) {
	    T *newData = new T[2 * capacity];
	    int j = 0; // index for newData
	    for(int i = firstIndex; i < capacity; i++) {
	    	newData[j] = data[i];
	    	j++;
		}
		for(int i = 0; i < firstIndex; i++) {
			newData[j] = data[i];
			j++;
		}
		delete[] data;
		data = newData;
		nextIndex = capacity;
		capacity *= 2;
	    
		//	cout << "Queue Full !" << endl;
		//	return;
		}
		data[nextIndex] = element;
		// circularly update 
		nextIndex = (nextIndex + 1) % capacity;
		// if we inserted first input then update fI with 0
		if(firstIndex == -1) {
			firstIndex = 0;
		}
		size++; // increase size when we insert element
	}
	
	// to read and return first element
	T front() {
		// check if queue is empty
		if(isEmpty()) {
			cout << "Queue is Empty !" << endl;
			return 0;
		}
		// else print the firstIndex data
		return data[firstIndex];
	}
	
	// to delete and print
	T dequeue() {
		// check if queue is empty
		if(isEmpty()) {
			cout << "Queue is Empty !" << endl;
			return 0;
		}
		T ans = data[firstIndex];
	    // circularly update 
		firstIndex = (firstIndex + 1) % capacity;
		size--;
		//  if queue is empty the update with fresh values
		if(size == 0) {
			firstIndex = -1;
			nextIndex = 0;
		}
		return ans;
	}
	
      		
};
