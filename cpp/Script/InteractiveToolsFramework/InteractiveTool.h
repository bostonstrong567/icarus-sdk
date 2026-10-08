// /Script/InteractiveToolsFramework.InteractiveTool
// Derives from: UObject
// size 0x80, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractiveTool.h

UCLASS(Transient)
class UInteractiveTool : public UObject, public IInputBehaviorSource
{
public:
    UPROPERTY() UInputBehaviorSet* InputBehaviors;  // 0x0048, size 0x8
    UPROPERTY() TArray<UObject*> ToolPropertyObjects;  // 0x0050, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnPropertySetsModified;  // 0x0030
    FInteractiveToolActionSet * ToolActionSet;  // 0x0060, private
    FInteractiveToolInfo DefaultToolInfo;  // 0x0068, private

    // Virtual functions that start here:
    //   AddInputBehavior, AddToolPropertySource, CanAccept, DrawHUD, ExecuteAction, GetActionSet
    //   GetToolInfo, GetToolManager, GetToolProperties, HasAccept, HasCancel, OnPropertyModified, OnTick
    //   RegisterActions, RemoveToolPropertySource, Render, ReplaceToolPropertySource, SetToolDisplayName
    //   SetToolInfo, SetToolPropertySourceEnabled, Setup, Shutdown, Tick
};
