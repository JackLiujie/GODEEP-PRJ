//#pragma once //use ifndef for sure
/***************************************

描述：AUV类定义头文件

****************************************/
#ifndef _AUV_H_
#define _AUV_H_

/****************************************
 * \class CAuvModel
 * \brief 
 * \author liuji
 * \date 2015/09/10
 ****************************************/
class CAuvModel
{
public:
	~CAuvModel() { instance = nullptr; }

	static CAuvModel* Get() 
	{
		if (instance == nullptr)
			instance = new CAuvModel;
		return instance;
	}
private:
	static CAuvModel* instance;
	double	wx;
	double	wy;
	double	wz;
	double	roll;		//横滚角
	double	pitch;		//俯仰角
	double	yaw;		//偏航角
	double	vx;			//前向速度
	double	vy;
	double	vz;

};

#endif	//_AUV_H_