#include "Span.hpp"

Span::Span(unsigned int N) : N(N) {

}

Span::Span(const Span &other) {
	*this = other;
}

Span Span::operator=(const Span &other) {
	if (this != &other) {
		this->N = other.N;
		this->span = other.span;
	}
	return *this;
}

Span::~Span() {

}

const char* Span::SpanFullException::what() const throw() {
	return "Span is full";
}

const char* Span::SpanNotFoundException::what() const throw() {
	return "Span not found";
}

void	Span::addNumber(int N) {
	if (this->span.size() >= this->N)
		throw Span::SpanFullException();
	this->span.push_back(N);
}

int	Span::longestSpan() {
	if (this->span.size() <= 1)
		throw Span::SpanNotFoundException();
	std::vector<int>::iterator min = std::min_element(this->span.begin(), this->span.end());
	std::vector<int>::iterator max = std::max_element(this->span.begin(), this->span.end());
	return *max - *min;

}

int	Span::shortestSpan() {
	if (span.size() <= 1)
        throw Span::SpanNotFoundException();
    std::vector<int> v = span;
    std::sort(v.begin(), v.end());
    int min = v[1] - v[0];
    for (unsigned int i = 1; i < v.size() - 1; i++)
    {
        if (v[i + 1] - v[i] < min)
            min = v[i + 1] - v[i];
    }
    return (min);
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (this->span.size() + std::distance(begin, end) > this->N)
		throw Span::SpanFullException();
	this->span.insert(this->span.end(), begin, end);
}