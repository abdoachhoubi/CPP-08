#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span {
	public:
		Span(unsigned int N);
		Span(const Span &other);
		Span operator=(const Span &other);
		~Span();

		class	SpanFullException : public std::exception {
			public:
                virtual const char* what() const throw();
		};
		
		class	SpanNotFoundException : public std::exception {
			public:
                virtual const char* what() const throw();
		};

		void	addNumber(int N);

		int		longestSpan();
		int		shortestSpan();

		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	private:
		unsigned long		N;
		std::vector<int>	span;
};
