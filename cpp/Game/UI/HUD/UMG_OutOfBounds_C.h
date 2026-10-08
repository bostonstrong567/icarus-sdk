// /Game/UI/HUD/UMG_OutOfBounds.UMG_OutOfBounds_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x284, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_OutOfBounds_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* StaticImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TimerText;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RemainingTime;  // 0x0280, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_OutOfBounds(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayFadeIn();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
