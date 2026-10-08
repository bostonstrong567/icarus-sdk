// /Game/UI/Components/UMG_Warning.UMG_Warning_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Warning_C : public UUserWidget
{
public:
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Blink;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Border;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ReasonWarningText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* WarningBorder;  // 0x0280, size 0x8

    UFUNCTION(BlueprintCallable) void Initialise(FText Reason);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetState(bool Visible);  // parameters 0x1
};
