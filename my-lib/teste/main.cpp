#include <iostream>

#include <my-lib/math-vector.h>

namespace MyApp
{

using Vector2 = Mylib::Math::Vector<typename Mylib::Math::VectorStorage__<float, 2>>;
using Vector = Vector2;

int main (const int argc, char **argv)
{
	auto v1 = Vector(3.0f, 4.0f);

	std::cout << v1 << std::endl;
	std::cout << "v1 length: " << v1.length() << std::endl;

	return 0;
}

} // end namespace MyApp

int main (int argc, char **argv)
{
	return MyApp::main(argc, argv);
}