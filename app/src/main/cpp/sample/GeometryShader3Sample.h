/**
 *
 * Created by 公众号：字节流动 on 2024/12/18.
 * https://github.com/githubhaohao/NDK_OpenGLES_3_0
 * 最新文章首发于公众号：字节流动，有疑问或者技术交流可以添加微信 Byte-Flow ,领取视频教程, 拉你进技术交流群
 *
 * */

#ifndef OPENGLES_3_0_GeometryShader3Sample_H
#define OPENGLES_3_0_GeometryShader3Sample_H


#include <detail/type_mat.hpp>
#include <detail/type_mat4x4.hpp>
#include <shader.h>
#include <model.h>
#include "GLSampleBase.h"

class GeometryShader3Sample : public GLSampleBase
{
public:
	GeometryShader3Sample();

	virtual ~GeometryShader3Sample();

	virtual void LoadImage(NativeImage *pImage);

	virtual void Init();
	virtual void Draw(int screenW, int screenH);

	virtual void Destroy();

	virtual void UpdateTransformMatrix(float rotateX, float rotateY, float scaleX, float scaleY);

	void UpdateMVPMatrix(glm::mat4 &mvpMatrix, int angleX, int angleY, float ratio);

private:
	glm::mat4 m_MVPMatrix;
	glm::mat4 m_ModelMatrix;
    glm::mat4 m_ViewMatrix;
    glm::mat4 m_ProjectionMatrix;
    Shader *m_pShader, *m_pShader2;
	Model *m_pModel;

	int m_AngleX;
	int m_AngleY;
	float m_ScaleX;
	float m_ScaleY;

    int m_FrameIndex;

};


#endif //OPENGLES_3_0_GeometryShader3Sample_H
