// /Script/InteractiveToolsFramework.InteractionMechanic
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractionMechanic.h

UCLASS(Transient)
class UInteractionMechanic : public UObject
{
protected:
    TWeakObjectPtr<UInteractiveTool,FWeakObjectPtr> ParentTool;  // 0x0028, not reflected

    // Virtual functions that start here:
    //   AddToolPropertySource, Render, Setup, Shutdown, Tick
};
