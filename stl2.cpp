#include<bits/stdc++.h>
using namespace std;

int main(){

// 	// arr[]={2,5,2,1,5}; find unique element 
// 	// op : {1,2,5}

// 	// set

// 	// set<int>st; // declaration
// 	// int n;
// 	// cin>>n;

// 	// for(int i=0;i<n;++i){
// 	// 	int x;
// 	// 	cin>>x;
// 	// 	st.insert(x); // like push_back O(logn)
// 	// }

// 	// Print set 
// 	// for(auto i=st.begin();i!=st.end();++i){
// 	// 	cout<<*i<<" ";

// 	// }

// 	// erase function
// 	// st-->{1,2,5}
// 	// st.erase(st.begin()) // set-->{2,5}

// 	// st.erase(st.begin(),st.begin()+2) // st-->{1,2}




// map only stores unique keys
// 	map<string,int> mpp;
// 	mpp["a"]=1;
// 	mpp["b"]=2;
// 	mpp["c"]=3;
// 	mpp["d"]=4;
// 	mpp["e"]=5;
// 	mpp["f"]=1;

	// mpp.emplace("g",8); // insert in set
	// mpp.erase("e")// will erase e from map
	// mpp.erase(mpp.begin()); // 
	// mpp.clear() // entire map is clear
	// auto it=mpp.find("a"); // points where a lies

	//check if the map is empty or not
	// if(mpp.empty())

	// mpp.count("a");

	// print map

	// for(auto it:mpp){
	// 	cout<<it.first<<" "<<it.second<<endl;
	// }
	// for(auto it=mpp.begin();it!=mpp.end();it++){
	// 	cout<<it->first<<" " <<it->second<<endl;
	// }

	// unordered_map<int,int> mpp;
	// o(1) in almost all cases
	// o(n) in the worst cases, where n is the container size

	// Pair class

	// pair<int,int>pr={1,2}; 
	// pair<pair<int,int>,int> pr={{1,2},2}; //nested pair

	// let's say I want to print 2 in 1st pair

	// cout<<pr.first.second<<endl;

	// pair<pair<int,int>,pair<int,int>> pr={{1,2},{3,4}};

	// cout<<pr.first.first;
	// cout<<pr.second.second;

	// vector<pair<int,int>>vec -->vector of pairs
	// set<pair<int,int>> st;
	// map< pair<int ,int>, int > mpp; 

	// we can't define a unordered map pair
	// like unordered_map<pair<int,int>,int> mpp 

	 //multimap

	// multimap<string,int>mpp;
	// mpp.emplace("a",3);
	// mpp.emplace("a",4);

	// will contains 2 values for a 
	// same functions as map



	// Stack and Queue

	//stack<int> st; // LIFO
	//pop
	//top
	//size
	//empty
	//push and emplace
	// st.push(2);
	// st.push(3);
	// st.push(1);
	// st.push(4);

	// cout<<st.top(); // prints 4
	// st.pop(); // deletes the last entered element 


	// delete the entire stack

	// while(!st.empty()){
	// 	st.pop();
	// }

	// cout<<st.size()<<endl; no of elements in the stack


	// Queue -> FIFO

	// all operations are O(1)
	//push
	//front
	//pop
	//size
	//empty

	// queue<int> q;
	// q.push(1); 
	// q.push(2); 
	// q.push(3);
	// q.push(4);
	// cout<<q.front(); // prints 1
	// q.pop();
	// cout<<q.front(); // prints 2

	//deletes entire queue
	// while(!q.empty()){
	// 	q.pop();
	// }

	// priority_queue (IMP) -> stores all elements in sorted order in O(logn)

	/* push 
	size
	top pop empty
	*/

	/*
	priority_queue<int> pq;
	pq.push(1);
	pq.push(5);
	pq.push(2);
	pq.push(6);
	pq.push(3);

	// keep max element at top means order will be 
	// 6 5 3 2 1

	cout<<pq.top(); // prints 6
	pq.pop();
	cout<<pq.top(); // prints 5

	*/ /*
	priority_queue<pair<int,int>> pq;
	pq.push(1,5); // third posi
	pq.push(1,6);// second postion
	pq.push(1,7); // first position
	
	*/
	// What if i want to store in descending form 
	// so from max priority queue we will make a min priority queue

	/*
	priority_queue<int> pq;
	pq.push(-1);
	pq.push(-3);
	pq.push(-5);

	cout<<-1*pq.top(); //prints 1

	*/

	/* minimum priority queue

	priority_queue<int , vector<int>,greater<int>> pq;
	pq.push(1);
	pq.push(5);
	pq.push(2);
	pq.push(6);
	pq.push(3);

	cout<<pq.top(); // prints 1
	*/

	// dequeue

	/*
	dequeue<int>dq;
	
	push_front()
	push_back()
	pop_front()
	pop_back()
	begin,end,rbegin,rend
	size
	clear
	empty
	at
	*/

	// List

	/*
	list<int> ls;

	push_front()
	push_back()
	pop_front()
	pop_back()
	begin,end,rbegin,rend
	size
	clear
	empty
	at
	remove->O(1)	
	*/


	// given n elements , print the elements occurs max
	// no of times 
	// input
	// 5
	// 1 3 3 3 2 
	
	// op
	// 3

	// always use unordered_map over map
	// if you get TLE use map or viceversa

	/*
	SOLN

	int n;
	cin>>n;

	int maxi=0;
	unordered_map<int,int> mpp;

	while(n--){ 
		int x;
		cin>>x;
		mpp[x]++;

		if(mpp[x]>mpp[maxi])
			maxi=x;
	}
	cout<<maxi<<endl;

	*/

	// given N elements , print all elements in sorted order

	int tc; cin>>tc;
	multiset<int>ms;

	while(tc--){
		int n;cin>>n;
		ms.insert(n);
	}
	for(auto i : ms)
		cout<<i<<" ";


	


}