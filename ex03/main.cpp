#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

// copy コンストラクタが呼ばれる条件　と　書き方
// 参照変数は宣言時に初期化する必要がある。クラスのメンバでもそれは同じなので、クラスBの場合は参照は使えない→ポインタ
// かと言って、スコープが切れたら参照も切れるだろうから、その場合どうなるんだ、、？
// 参照先はおそらく初期化したときから変更することはできない。
// 変更しようとしたときに起こるのはdeep copy で、コピーコンストラクタ的なのが動いているように見える
// よって、メンバ変数の参照変数は必ずインスタンスの変数とスコープが等しくなり、スコープの切れたポインタをさすことは無い。っぽい（n == 1)

void	testSubjectPdf( void );
void	testPtrRefScope( void );
void	testRefMemberScope( void );
void	EasyTest( void );

int main()
{
	testSubjectPdf();
	EasyTest();
	testRefMemberScope();
	// testPtrRefScope();
	// std::cout << BLUE << "===========================================" << WHITE << std::endl;

	return 0;
}

void	testSubjectPdf( void ){
	std::cout << GLEEN << "=============== Test PDF ==================" << WHITE << std::endl << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << std::endl;
}

void	EasyTest( void ){
	std::cout << GLEEN << "============== Easy TEST =================" << WHITE << std::endl << std::endl;
	int a = 5;
	int& ref = a;
	std::cout << "a is " << a << "  ref is " << ref << std::endl;
	std::cout << "a ptr is " << &a << "  ref ptr is " << &ref << std::endl;
	a = 42;
	std::cout << "a is " << a << "  ref is " << ref << std::endl;

	int	b = 8;
	std::cout << "a is " << a << "  ref is " << ref << "  b is" << b << std::endl;
	std::cout << "a ptr is " << &a << "  ref ptr is " << &ref << "  b ptr is" << &b << std::endl;
	std::cout << std::endl;
}

void	testRefMemberScope( void ){
	std::cout << GLEEN << "============== RefMemberScope TEST =================" << WHITE << std::endl << std::endl;
	Weapon club = Weapon("CLUB 1");
	HumanA niceguy = HumanA("niceguy", club);
	std::cout << "my :" << niceguy.getWeaponptr() << "   club :" << &club << std::endl;
	niceguy.attack();
	std::cout << BLUE << "============scorp================" << WHITE << std::endl;
	{
		Weapon club_buf2 = Weapon("CLUB 2");
		Weapon club_buf3 = Weapon("CLUB 3");
		niceguy.setWeapon(club_buf2);
		std::cout << "my :" << niceguy.getWeaponptr() << "   club_buf2 :" << &club_buf2 << std::endl;
		niceguy.attack();
	}
	std::cout << BLUE << "============scorp================" << WHITE << std::endl;
	std::cout << "my :" << niceguy.getWeaponptr() << "   club :" << &club << std::endl;
	niceguy.attack();
	niceguy.setWeapon(club);
	std::cout << "my :" << niceguy.getWeaponptr() << "   club :" << &club << std::endl;
	niceguy.attack();

	Weapon club_buf3 = Weapon("CLUB 3");
	niceguy.setWeapon(club_buf3);
	std::cout << "my :" << niceguy.getWeaponptr() << "   club3 :" << &club_buf3 << std::endl;
	niceguy.attack();
	std::cout << std::endl;
}

void	testPtrRefScope( void ){
	std::cout << BLUE << "============== PtrRefScope TEST =================" << WHITE << std::endl;
	Weapon club = Weapon("CLUB 1");
	HumanB niceguyB = HumanB("niceguyB", club);
	std::cout << BLUE << "============scorp================" << WHITE << std::endl;
	niceguyB.attack();
	{
		Weapon club_buf1 = Weapon("CLUB 2");
		Weapon club_buf2 = Weapon("CLUB 3");
		niceguyB.setWeapon(club_buf1);
		niceguyB.attack();
	}
	std::cout << BLUE << "============scorp================" << WHITE << std::endl;
	niceguyB.attack();
	niceguyB.setWeapon(club);
	niceguyB.attack();
	std::cout << std::endl;
}


__attribute__((destructor)) static void destructor()
{
	system("leaks -q exe");
}
