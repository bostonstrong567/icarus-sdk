// /Game/UI/HUD/UMG_DisconnectionPopup.UMG_DisconnectionPopup_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DisconnectionPopup_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* SlideIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ContentText;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* gradient;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PromptBorder;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RetryingTimer;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText In_Text;  // 0x02B0, size 0x18, named "In Text"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle TimerHandle;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowingWarning;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowEscapePrompt;  // 0x02D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowRetryTimer;  // 0x02D2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle RetryTimerHandle;  // 0x02D8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DisconnectionPopup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HideWarningMessage();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowWarningMessage();
    UFUNCTION(BlueprintCallable) void UpdateRetryTimer();
    UFUNCTION(BlueprintCallable) void UpdateWarningMessage();
};
