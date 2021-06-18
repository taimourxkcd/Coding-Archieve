#include<iostream>
#include<string>
#include<vector>

struct Vertex {
	float x, y, z;
};

std::ostream& operator<<(std::ostream stream, const Vertex& vertex) {
	stream << vertex.x << "," << vertex.y << "," << vertex.z;
	return stream; 
}


int main() {

	std::vector<Vertex> vertices;
	vertices.push_back({1,2,3});
	vertices.push_back({4,5,6});
	
	for (int i = 0;i < vertices.size(); i++) {
		std::ostream << vertices[i] << std::endl;
	}

	for (Vertex& v: vertices) {
		std::ostream& v;
	}

	vertices.erase(vertices.begin() + 1); 


	

	std::cin.get();
}