// /Script/InteractiveToolsFramework.InteractionMechanic
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractionMechanic.h

UCLASS(Transient)
class UInteractionMechanic : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UInteractiveTool,FWeakObjectPtr> ParentTool;  // 0x0028, protected

    // Virtual functions that start here:
    //   AddToolPropertySource, Render, Setup, Shutdown, Tick
};
