#ifndef NONCOPYABLE_H_
#define NONCOPYABLE_H_
namespace Tau
{
class NonCopyable
{
protected:
	NonCopyable()
	{}
	~NonCopyable()
	{}

private:
	void operator=(const NonCopyable& rhs) = delete;
	NonCopyable(const NonCopyable& rhs)		 = delete;
};
}	 // namespace Tau
#endif	// NONCOPYABLE_H_
