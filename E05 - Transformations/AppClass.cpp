#include "AppClass.h"
void Application::InitVariables(void)
{
	////Change this to your name and email
	m_sProgrammer = "Alberto Bobadilla - labigm@rit.edu";
	vector3 v3Position(0.0f, 0.0f, 10.0f);
	vector3 v3Target = ZERO_V3;
	vector3 v3Upward = AXIS_Y;
	m_pCameraMngr->SetPositionTargetAndUpward(v3Position, v3Target, v3Upward);

	m_uMeshCount = 46;
	//Allocate the memory for the Meshes
	m_uMeshCount = 46;
	for (uint i = 0; i < m_uMeshCount; ++i)
	{
		MyMesh* pMesh = new MyMesh();
		m_pMeshList.push_back(pMesh);
		m_pMeshList[i]->GenerateCube(1.0f, C_BLACK);
	}
}
void Application::Update(void)
{
	//Update the system so it knows how much time has passed since the last call
	m_pSystem->Update();

	//Is the arcball active?
	ArcBall();

	//Is the first person camera active?
	CameraRotation();

	//Update Entity Manager
	m_pEntityMngr->Update();

	//Add objects to render list
	m_pEntityMngr->AddEntityToRenderList(-1, true);
}
void Application::Display(void)
{
	// Clear the screen
	ClearScreen();

	//Calculate the model, view and projection matrix
	matrix4 m4Projection = m_pCameraMngr->GetProjectionMatrix();
	matrix4 m4View = m_pCameraMngr->GetViewMatrix();

	
	//m_pMesh->Render(m4Projection, m4View, ToMatrix4(m_qArcBall));
	int i = 0;
	//bottom row
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-2.5f + fOffset, -3.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-1.5f + fOffset, -3.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(0.5f + fOffset, -3.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(1.5f + fOffset, -3.0f, 0.0f)));
	i++;
	//second
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-5.5f + fOffset, -2.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-3.5f + fOffset, -2.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(2.5f + fOffset, -2.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(4.5f + fOffset, -2.0f, 0.0f)));
	i++;
	//third
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-5.5f + fOffset, -1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-3.5f + fOffset, -1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-2.5f + fOffset, -1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-1.5f + fOffset, -1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-0.5f + fOffset, -1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(0.5f + fOffset, -1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(1.5f + fOffset, -1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(2.5f + fOffset, -1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(4.5f + fOffset, -1.0f, 0.0f)));
	i++;
	//fourth
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-5.5f + fOffset, 0.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-4.5f + fOffset, 0.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-3.5f + fOffset, 0.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-2.5f + fOffset, 0.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-1.5f + fOffset, 0.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-0.5f + fOffset, 0.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(0.5f + fOffset, 0.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(1.5f + fOffset, 0.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(2.5f + fOffset, 0.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(3.5f + fOffset, 0.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(4.5f + fOffset, 0.0f, 0.0f)));
	i++;
	//fifth
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-4.5f + fOffset, 1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-3.5f + fOffset, 1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-1.5f + fOffset, 1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-0.5f + fOffset, 1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(0.5f + fOffset, 1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(2.5f + fOffset, 1.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(3.5f + fOffset, 1.0f, 0.0f)));
	i++;
	//sixth
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-3.5f + fOffset, 2.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-2.5f + fOffset, 2.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-1.5f + fOffset, 2.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-0.5f + fOffset, 2.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(0.5f + fOffset, 2.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(1.5f + fOffset, 2.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(2.5f + fOffset, 2.0f, 0.0f)));
	i++;
	//seventh
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-2.5f + fOffset, 3.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(0.5f + fOffset, 3.0f, 0.0f)));
	i++;
	//top
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(-3.5f + fOffset, 4.0f, 0.0f)));
	i++;
	m_pMeshList[i]->Render(m4Projection, m4View, glm::translate(vector3(1.5f + fOffset, 4.0f, 0.0f)));
	i++;

	if (moveLeft) {
		fOffset += -2.0f;
	}
	else {
		fOffset += 2.0f;
	}
	if (fOffset > 50) {
		moveLeft = true;
	}
	if (fOffset < -50) {
		moveLeft = false;
	}

	// draw a skybox
	m_pModelMngr->AddSkyboxToRenderList();

	//render list call
	m_uRenderCallCount = m_pModelMngr->Render();

	//clear the render list
	m_pModelMngr->ClearRenderList();

	//draw gui
	DrawGUI();
	
	//end the current frame (internally swaps the front and back buffers)
	m_pWindow->display();
}
void Application::Release(void)
{
	std::vector<MyMesh*> m_pMeshList;
	uint uSize = m_pMeshList.size();
	for (uint i = 0; i < uSize; ++i)
	{
		if (m_pMeshList[i] != nullptr)
		{
			delete m_pMeshList[i];
			m_pMeshList[i] = nullptr;
		}
	}
	//Release meshes
	//SafeDelete(m_pMesh);

	//release GUI
	ShutdownGUI();
}