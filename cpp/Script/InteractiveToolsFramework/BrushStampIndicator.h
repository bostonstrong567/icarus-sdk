// /Script/InteractiveToolsFramework.BrushStampIndicator
// Derives from: UInteractiveGizmo > UObject
// size 0xB0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/BrushStampIndicator.h

UCLASS(Transient)
class UBrushStampIndicator : public UInteractiveGizmo
{
public:
    UPROPERTY() float BrushRadius;  // 0x0038, size 0x4
    UPROPERTY() float BrushFalloff;  // 0x003C, size 0x4
    UPROPERTY() FVector BrushPosition;  // 0x0040, size 0xC
    UPROPERTY() FVector BrushNormal;  // 0x004C, size 0xC
    UPROPERTY() bool bDrawIndicatorLines;  // 0x0058, size 0x1
    UPROPERTY() bool bDrawRadiusCircle;  // 0x0059, size 0x1
    UPROPERTY() int32 SampleStepCount;  // 0x005C, size 0x4
    UPROPERTY() FLinearColor LineColor;  // 0x0060, size 0x10
    UPROPERTY() float LineThickness;  // 0x0070, size 0x4
    UPROPERTY() bool bDepthTested;  // 0x0074, size 0x1
    UPROPERTY() bool bDrawSecondaryLines;  // 0x0075, size 0x1
    UPROPERTY() float SecondaryLineThickness;  // 0x0078, size 0x4
    UPROPERTY() FLinearColor SecondaryLineColor;  // 0x007C, size 0x10
    UPROPERTY(Instanced) UPrimitiveComponent* AttachedComponent;  // 0x0090, size 0x8
protected:
    UPrimitiveComponent * ScaleInitializedComponent;  // 0x0098, not reflected
    FVector InitialComponentScale;  // 0x00A0, not reflected

    // Virtual functions that start here:
    //   Update
};
