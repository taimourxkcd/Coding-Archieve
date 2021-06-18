#include<iostream>
#include<string>

struct Vector2 {
	float x, y;

	Vector2(float x, float y)
	: x(2), y(2) {}

	Vector2 Add(const Vector2& other) const {
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 operator+(const Vector2& other) const {
		return Add(other);
	
	}
	
	
	Vector2 Multiply(const Vector2& other) const {
		return Vector2(x * other.x, y * other.y);
	}

	Vector2 operator*(const Vector2& other) const {
		return Multiply(other);

	}

	bool operator == (const Vector2& other) const {
		return	x == other.x && y == other.y;
 	}
	
	bool operator != (const Vector2& other) const {
		return	!(*this == other);
 	}

};


std::ostream& operator<<(std::ostream& stream, const Vector2& other) {
	stream << other.x << "," << other.y; 
	return stream;
}


int main() {

	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.4f, 1.5f);
	Vector2 powerup(1.1f, 1.1f);

	Vector2 result1 = position.Add(speed.Multiply(powerup));
	Vector2 result2 = position + speed * powerup;

	std::cout << result2 << std::endl;

	if (result1 == result2) {

	}

	std::cin.get();
}