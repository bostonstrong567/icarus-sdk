// /Script/InteractiveToolsFramework.SingleSelectionTool
// Derives from: UInteractiveTool > UObject
// size 0x88, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/SingleSelectionTool.h

UCLASS(Transient)
class USingleSelectionTool : public UInteractiveTool
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TUniquePtr<FPrimitiveComponentTarget,TDefaultDelete<FPrimitiveComponentTarget> > ComponentTarget;  // 0x0080, protected

    // Virtual functions that start here:
    //   AreAllTargetsValid
};
