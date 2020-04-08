#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "functions.h"
using namespace std;

void sort_alg(vector<double> source) {	// sorts vector values in dvd, tv, & music
	double min;
	for (int i = 0; i < source.size(); i++) {
		min = i;
		for (int j = i + 1; j < source.size(); j++) {
			if (source.at(j) < source.at(min)) {
				min = j;
			}
		}
		double temp_min = source.at(min);
		source.at(min) = source.at(i);
		source.at(i) = temp_min;
	}
}

double get_medium(vector<double> source) {
	double avg;
	int size = source.size(), next;

	if (source.size() % 2 == 0) {
		size = (size / 2) - 1; // -1 to get correct value in vector
		next = size + 1;
		return (source[size] + source[next]) / 2.0; // gets next value
	}
	else if (source.size() % 2 == 1) {
		size = (size / 2);
		return source[size];
	}
}

double get_total(vector<double> source) {	// gets total
	double total = 0;
	for (int i = 0; i < source.size(); ++i) {
		total += source[i];
	}
	return total;
}

double get_mean(vector<double> source) {	// gets mean
	double mean = 0, ttl = 0;
	for (int i = 0; i < source.size(); ++i) {
		ttl += source[i];
	}
	return (ttl / source.size());
}
