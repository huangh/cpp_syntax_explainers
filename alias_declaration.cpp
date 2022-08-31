//C++11 added alias declarations, which are generalization of typedef, allowing templates:

// the way to call this is to pass in the template parameter N (of type size_t) to the alias Vector, which is an alias of
// the template <size_t N> Matrix<N,1>. Therefore, calling Vector<3> is equivalent to Matrix<3,1>.

template <size_t N>
using Vector = Matrix<N, 1>;
The type Vector<3> is equivalent to Matrix<3, 1>.


//In C++03, the closest approximation was:

template <size_t N>
struct Vector
{
    typedef Matrix<N, 1> type;
};
Here, the type Vector<3>::type is equivalent to Matrix<3, 1>.
