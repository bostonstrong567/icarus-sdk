// /Script/InteractiveToolsFramework.BrushBaseProperties
// Derives from: UInteractiveToolPropertySet > UObject
// size 0x78, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseTools/BaseBrushTool.h

UCLASS(Transient)
class UBrushBaseProperties : public UInteractiveToolPropertySet
{
public:
    UPROPERTY(EditAnywhere) float BrushSize;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere) bool bSpecifyRadius;  // 0x0064, size 0x1
    UPROPERTY(EditAnywhere) float BrushRadius;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) float BrushStrength;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere) float BrushFalloffAmount;  // 0x0070, size 0x4
    UPROPERTY() bool bShowStrength;  // 0x0074, size 0x1
    UPROPERTY() bool bShowFalloff;  // 0x0075, size 0x1
};
