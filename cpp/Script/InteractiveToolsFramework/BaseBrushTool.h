// /Script/InteractiveToolsFramework.BaseBrushTool
// Derives from: UMeshSurfacePointTool > USingleSelectionTool > UInteractiveTool > UObject
// size 0x1B8, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseTools/BaseBrushTool.h

UCLASS(Transient)
class UBaseBrushTool : public UMeshSurfacePointTool
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() UBrushBaseProperties* BrushProperties;  // 0x00C0, size 0x8
    UPROPERTY() bool bInBrushStroke;  // 0x00C8, size 0x1
    UPROPERTY() float WorldToLocalScale;  // 0x00CC, size 0x4
    UPROPERTY() FBrushStampData LastBrushStamp;  // 0x00D0, size 0xA8
protected:
    TInterval<float> BrushRelativeSizeRange;  // 0x0178, not reflected
    double CurrentBrushRadius;  // 0x0180, not reflected
    UPROPERTY() TSoftClassPtr<UBrushBaseProperties> PropertyClass;  // 0x0188, size 0x28
    UPROPERTY() UBrushStampIndicator* BrushStampIndicator;  // 0x01B0, size 0x8

    // Virtual functions that start here:
    //   DecreaseBrushFalloffAction, DecreaseBrushSizeAction, DecreaseBrushStrengthAction
    //   EstimateMaximumTargetDimension, GetCurrentBrushRadius, GetCurrentBrushRadiusLocal
    //   IncreaseBrushFalloffAction, IncreaseBrushSizeAction, IncreaseBrushStrengthAction, IsInBrushStroke
    //   SetupBrushStampIndicator, ShutdownBrushStampIndicator, UpdateBrushStampIndicator
};
