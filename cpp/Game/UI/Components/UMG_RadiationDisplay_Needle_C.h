// /Game/UI/Components/UMG_RadiationDisplay_Needle.UMG_RadiationDisplay_Needle_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x44C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RadiationDisplay_Needle_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* LowPulse;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_45;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pin;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Target;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LowImage;  // 0x0294, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle NormalStyle;  // 0x0298, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UsePlayerShelter;  // 0x0438, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* ColourCurve;  // 0x0440, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Calculated;  // 0x0448, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_RadiationDisplay_Needle(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
