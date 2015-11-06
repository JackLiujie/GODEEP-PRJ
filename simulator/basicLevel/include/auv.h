//#pragma once //use ifndef for sure
/***************************************

������AUV�ඨ��ͷ�ļ�

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
	double	roll;		//�����
	double	pitch;		//������
	double	yaw;		//ƫ����
	double	vx;			//ǰ���ٶ�
	double	vy;
	double	vz;

};

#endif	//_AUV_H_