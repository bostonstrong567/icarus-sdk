// /Game/UI/HUD/UMG_Stealth.UMG_Stealth_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Stealth_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HearingLevels;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* EyeGlowing;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeIn;  // 0x0278, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* EyeToHidden;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Eye;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EyeGlow;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Hearing1;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Hearing2;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Hearing3;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Hidden;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DetectionValue;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LerpedDetectionPercentage;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WantsVisible;  // 0x02C8, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Stealth(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnFadeAnimFinished();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateDetectionValue(int32 NewDetectionValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateVisibility(bool IsVisible);  // parameters 0x1
};
