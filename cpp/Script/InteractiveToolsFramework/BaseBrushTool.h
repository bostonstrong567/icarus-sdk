// /Script/InteractiveToolsFramework.BaseBrushTool
// Derives from: UMeshSurfacePointTool > USingleSelectionTool > UInteractiveTool > UObject
// size 0x1B8, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseTools/BaseBrushTool.h

UCLASS(Transient)
class UBaseBrushTool : public UMeshSurfacePointTool
{
public:
    UPROPERTY() UBrushBaseProperties* BrushProperties;  // 0x00C0, size 0x8
    UPROPERTY() bool bInBrushStroke;  // 0x00C8, size 0x1
    UPROPERTY() float WorldToLocalScale;  // 0x00CC, size 0x4
    UPROPERTY() FBrushStampData LastBrushStamp;  // 0x00D0, size 0xA8
    UPROPERTY() TSoftClassPtr<UBrushBaseProperties> PropertyClass;  // 0x0188, size 0x28
    UPROPERTY() UBrushStampIndicator* BrushStampIndicator;  // 0x01B0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TInterval<float> BrushRelativeSizeRange;  // 0x0178, protected
    double CurrentBrushRadius;  // 0x0180, protected

    // Virtual functions that start here:
    //   DecreaseBrushFalloffAction, DecreaseBrushSizeAction, DecreaseBrushStrengthAction
    //   EstimateMaximumTargetDimension, GetCurrentBrushRadius, GetCurrentBrushRadiusLocal
    //   IncreaseBrushFalloffAction, IncreaseBrushSizeAction, IncreaseBrushStrengthAction, IsInBrushStroke
    //   SetupBrushStampIndicator, ShutdownBrushStampIndicator, UpdateBrushStampIndicator
};
