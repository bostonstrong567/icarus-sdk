// /Game/UI/Windows/UMG_Hints.UMG_Hints_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Hints_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeOut;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeIn;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HeaderText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HintText;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentHintIndex;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> HintsArray;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> IndexArray;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle HintTimer;  // 0x02B0, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Hints(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_C9EECC4D4C4E76AEA080BFBD7FBCF2AA();
    UFUNCTION(BlueprintCallable) void NextHint();
    UFUNCTION(BlueprintCallable) void PlayTextAnim(UWidgetAnimation* InAnimation);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TimerFinished();
    UFUNCTION(BlueprintCallable) void UpdateHintText();
    UFUNCTION(BlueprintCallable) void VisibilityChanged(ESlateVisibility InVisibility);  // parameters 0x1
};
