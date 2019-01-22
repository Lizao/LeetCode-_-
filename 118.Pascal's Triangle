#include <vector>
#include <string>
#include <iostream>

std::vector<std::vector<int> > Yanghui(int n)
{
	std::vector<std::vector<int> > Matrix;
	std::vector<int> first(1, 1), second(2, 1);
	
	if (n < 1) {
		return Matrix;
	}
	else if (n == 1) {
		Matrix.push_back(first);
		return Matrix;
	}
	else if (n == 2) {
		Matrix.push_back(first);
		Matrix.push_back(second);
		return Matrix;
	}
	
	Matrix.push_back(first);
	Matrix.push_back(second);
		
	for(int ix = 2; ix < n; ++ix) {
		std::vector<int> nvec(ix + 1, 1);
		
		for (int jx = 1; jx < ix; ++jx) {
			nvec[jx] = Matrix[ix - 1][jx - 1] + Matrix[ix - 1][jx];
		}
		Matrix.push_back(nvec);
	}
	
	return Matrix;
}

int main() {

    int n;
    std::cout << "Input a number: " << std::endl;
    std::cin >> n;

    std::vector<std::vector<int> > matrix = Yanghui(n);
    
    for (int ix = 0; ix < matrix.size(); ++ix) {
        for (int jx = 0; jx < matrix[ix].size(); ++jx) {
            std::cout << matrix[ix][jx] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
} 
