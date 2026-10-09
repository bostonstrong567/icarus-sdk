// /Script/InteractiveToolsFramework.MultiSelectionTool
// Derives from: UInteractiveTool > UObject
// size 0x90, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/MultiSelectionTool.h

UCLASS(Transient)
class UMultiSelectionTool : public UInteractiveTool
{
protected:
    TArray<TUniquePtr<FPrimitiveComponentTarget,TDefaultDelete<FPrimitiveComponentTarget> >,TSizedDefaultAllocator<32> > ComponentTargets;  // 0x0080, not reflected

    // Virtual functions that start here:
    //   AreAllTargetsValid
};
