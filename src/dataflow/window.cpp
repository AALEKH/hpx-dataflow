////////////////////////////////////////////////////////////////////////////////
//  Copyright (c) 2016 Aalekh Nigam
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <unordered_map>
#include <vector>
#include <tuple>
#include <utility>



#include <regex>
#include <map>
#include <array>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <string>

#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <limits> 
#include <set>
#include <tuple>
#include <functional>
#include <utility>
#include <algorithm>
#include <iterator>
#include <functional>
#include <unordered_map>
// #include <hpxflow_window.h>

using namespace std;

class window{

	vector<tuple<int, int, int, int>> buffer_intermediate;
	vector<tuple<int, int, int, int>> buffer_window;
	unordered_map<int, vector<tuple< int, int, int, int>> > hashmap;

	window(){
	
	}
	~window(){

	}

	template <typename F>
	void createWindow(int index, F fn){
		buffer_window = buffer_intermediate;
		// unordered_map
		// std::pair<,double> myshopping ("baking powder",0.3);
		for(int i = 0; i  < buffer_window.size(); i++) {
			// hashmap.insert(std::get<0>(buffer_window[0]), buffer_window[i]);
// hashmap.insert(std::make_pair<int, vector<tuple< int, int, int, int>>>(std::get<0>(buffer_window[0]), buffer_window[i]));
// hashmap.insert(std::make_pair<int, vector<tuple< int, int, int, int>>>(std::get<0>(buffer_window[0]), buffer_window[i]));

 /// Set it wright

		}
		// hashmap.insert(std::get<index>(buffer_window), buffer_window);
		// return *this;
	}

	unordered_map<int, vector<tuple<int, int, int, int>> > retrieveWindow(){
		return hashmap;
	}
	int windowSize(){
		return hashmap.size();
	}
};


