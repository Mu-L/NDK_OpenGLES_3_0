/**
 *
 * Created by 公众号：字节流动 on 2022/4/18.
 * https://github.com/githubhaohao/NDK_OpenGLES_3_0
 * 最新文章首发于公众号：字节流动，有疑问或者技术交流可以添加微信 Byte-Flow ,领取视频教程, 拉你进技术交流群
 *
 * */

#ifndef NDK_OPENGLES_3_0_MODEL3DSample_H
#define NDK_OPENGLES_3_0_MODEL3DSample_H


#include <detail/type_mat.hpp>
#include <detail/type_mat4x4.hpp>
#include <shader.h>
#include <model.h>
#include "GLSampleBase.h"

class Model3DSample : public GLSampleBase
{
public:
	Model3DSample();

	virtual ~Model3DSample();

	virtual void LoadImage(NativeImage *pImage);

	virtual void Init();
	virtual void Draw(int screenW, int screenH);

	virtual void Destroy();

	virtual void UpdateTransformMatrix(float rotateX, float rotateY, float scaleX, float scaleY);

	void UpdateMVPMatrix(glm::mat4 &mvpMatrix, int angleX, int angleY, float ratio);

private:
	glm::mat4 m_MVPMatrix;
	glm::mat4 m_ModelMatrix;
	Shader *m_pShader;
	Model *m_pModel;

	int m_AngleX;
	int m_AngleY;
	float m_ScaleX;
	float m_ScaleY;

};


#endif //NDK_OPENGLES_3_0_MODEL3DSample_H
