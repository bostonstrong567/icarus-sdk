// /Script/InteractiveToolsFramework.SingleSelectionTool
// Derives from: UInteractiveTool > UObject
// size 0x88, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/SingleSelectionTool.h

UCLASS(Transient)
class USingleSelectionTool : public UInteractiveTool
{
protected:
    TUniquePtr<FPrimitiveComponentTarget,TDefaultDelete<FPrimitiveComponentTarget> > ComponentTarget;  // 0x0080, not reflected

    // Virtual functions that start here:
    //   AreAllTargetsValid
};
