class Shape
{
public:
	virtual void draw() const = 0;									// 순수 가상 함수
	virtual void error(const std::string& msg);						// 단순 가상 함수(비순수?)
	int objectID() const;											// 비가상 함수
	...
};

class Rectangle: public Shape{...};
class Ellipse: public Shape{...};

// 순수 가상 함수
// 순수 가상 함수를 선언하는 목적은 파생 클래스에게 함수의 인터페이스만을 물려주려는 것이다.
// -> 구체 클래스마다 직접 구현해야함

// 단순 가상 함수
// 단순 가상 함수를 선언하는 목적은 파생 클래스에게 함수의 인터페이스뿐만 아니라 함수의 기본 구현도 물려주려는 것이다.
// -> default 함수를 정의 해주는 느낌

// 비가상 함수
// 비가상 함수를 선언하는 목적은 파생 클래스에게 함수의 인터페이스와 그 함수의 필수적인 구현을 물려주려는 것이다.
// 모든 구체 클래스가 공통적으로 동작해야하는 부분을 정의해주는 것.

// 파생 클래스가 물려받았으면 하는 것들을 판단에 따라 정밀하게 "지정" 할 수 있다.