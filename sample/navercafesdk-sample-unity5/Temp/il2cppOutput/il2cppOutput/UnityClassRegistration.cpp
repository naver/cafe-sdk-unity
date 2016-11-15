struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

}

void RegisterAllClasses()
{
	//Total: 48 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//6. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//7. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//8. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//9. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//10. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//11. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//12. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//13. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//14. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//15. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//18. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//19. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//20. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//21. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//22. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//23. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//24. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//25. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//26. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//27. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//28. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//29. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//30. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//31. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//32. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//33. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//34. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//35. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//36. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//37. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//38. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//39. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//40. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//41. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//42. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//43. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//44. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//45. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//46. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//47. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
