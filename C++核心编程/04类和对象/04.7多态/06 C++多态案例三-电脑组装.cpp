#include <iostream>
#include <string>
using namespace std;
//抽象不同零件类
//抽象CPU类
class CPUAbstract
{
public:
	//抽象计算函数
	virtual void calculate() = 0;
	virtual ~CPUAbstract()
	{
		cout << "CPU抽象类析构函数调用" << endl;
	}
};
//抽象显卡类
class GPUAbstract
{
public:
	//抽象的显卡函数
	virtual void display() = 0;
	virtual ~GPUAbstract()
	{
		cout << "GPU抽象类析构函数调用" << endl;
	}
};
//抽象内存类
class MemoryAbstract
{
public:
	//抽象内存类
	virtual void storage() = 0;
	virtual ~MemoryAbstract()
	{
		cout << "Memory抽象类析构函数调用" << endl;
	}
};

//电脑类
class Computer
{
public:
	Computer(CPUAbstract *cpu ,GPUAbstract * gpu,MemoryAbstract *mem)
	{
		m_cpu = cpu;
		m_gpu = gpu;
		m_mem = mem;
	}
	//提供工作函数
	void work()
	{
		m_cpu->calculate();
		m_gpu->display();
		m_mem->storage();
	}
	//提供析构函数 释放三个电脑零件
	~Computer()
	{
		cout << "Computer析构函数调用" << endl;
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_gpu != NULL)
		{
			delete m_gpu;
			m_gpu = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPUAbstract* m_cpu;//CPU零件指针
	GPUAbstract* m_gpu;//显卡指针
	MemoryAbstract* m_mem;//内存条指针

};
//具体厂商
//Intel厂商
class IntelCPU :public CPUAbstract
{
public:
	void calculate()
	{
		cout << "Intel CPU开始计算了！" << endl;
	}
};
class IntelGPU :public GPUAbstract
{
public:
	void display()
	{
		cout << "Intel GPU开始运行了！" << endl;
	}
};
class IntelMemory :public MemoryAbstract
{
public:
	void storage()
	{
		cout << "Intel Memory开始存储了！" << endl;
	}
};
class AMDCPU :public CPUAbstract
{
public:
	void calculate()
	{
		cout << "AMD CPU开始计算了！" << endl;
	}
};
class NvidiaGPU :public GPUAbstract
{
public:
	void display()
	{
		cout << "Nvidia GPU开始运行了！" << endl;
	}
};
class SamsungMemory :public MemoryAbstract
{
public:
	void storage()
	{
		cout << "Sumsang Memory开始运行了！" << endl;
	}
};
void test01()
{
	//第一台电脑零件
	CPUAbstract* intelCpu = new IntelCPU;
	GPUAbstract* intelGpu = new IntelGPU;
	MemoryAbstract* intelMom = new IntelMemory;
	cout << "第一台电脑开始工作" << endl;
	//创建第一台电脑
	Computer* computer1 = new Computer(intelCpu, intelGpu, intelMom);
	computer1->work();
	delete computer1;
	cout << "---------------------------------------------------" << endl;
	cout << "第二台电脑开始工作" << endl;
	//第二台电脑组装
	Computer* computer2 = new Computer(new AMDCPU, new NvidiaGPU, new SamsungMemory);
	computer2->work();
	delete computer2;
	cout << "---------------------------------------------------" << endl;
	cout << "第三台电脑开始工作" << endl;
	//第三台电脑组装
	Computer* computer3 = new Computer(new IntelCPU, new NvidiaGPU, new SamsungMemory);
	computer3->work();
	delete computer3;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
