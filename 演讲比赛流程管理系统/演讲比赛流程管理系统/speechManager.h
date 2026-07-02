#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include"speaker.h"
using namespace std;
//设计演讲管理类
class SpeechManager
{
public:
	//构造函数
	SpeechManager();
	//菜单功能
	void show_Menu();
	//退出系统
	void exit_System();
	//析构函数
	~SpeechManager();
	//初始化容器和属性
	void initSpeech();
	//成员属性
	//保存第一轮选手编号容器
	vector<int>v1;
	//保存第二轮选手编号容器
	vector<int>v2;
	//胜出前三名选手编号容器
	vector<int>vVictory;
	//存放编号以及具体对应选手容器
	map<int, Speaker>m_Speaker;
	//存放比赛轮数
	int m_Index;
};