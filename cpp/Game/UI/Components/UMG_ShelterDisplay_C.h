// /Game/UI/Components/UMG_ShelterDisplay.UMG_ShelterDisplay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x439, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ShelterDisplay_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* LowPulse;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Level;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ShelterIcon;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ShelterText;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentProgress;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LowImage;  // 0x0294, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle NormalStyle;  // 0x0298, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UsePlayerShelter;  // 0x0438, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_ShelterDisplay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetProgress(float Percent);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
