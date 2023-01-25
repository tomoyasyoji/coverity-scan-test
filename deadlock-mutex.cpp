#include <cstdio>
#include <cstdlib>
#include <mutex>
#include <thread>

class Counter {
private:
	std::mutex mtx_;
	int count_ = 0;

public:
	void add(int x);
	void print();
};

void Counter::add(int x)
{
	// std::lock_guard<std::mutex> lock(mtx_);
	mtx_.lock();
	count_ += x;
	// mtx_.unlock();
}

void Counter::print()
{
	// std::lock_guard<std::mutex> lock(mtx_);
	mtx_.lock();
	printf("count_ = %d\n", count_);
	// mtx_.unlock();
}

void add_n_times(Counter &c, const int n)
{
	for (int i = 0; i < n; i++)
		c.add(1);
}

int main()
{
	Counter c;

	std::thread t1(add_n_times, std::ref(c), 10000);
	std::thread t2(add_n_times, std::ref(c), 10000);

	t1.join();
	t2.join();

	c.print();

	return EXIT_SUCCESS;
}
