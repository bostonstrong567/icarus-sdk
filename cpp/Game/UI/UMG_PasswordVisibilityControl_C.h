// /Game/UI/UMG_PasswordVisibilityControl.UMG_PasswordVisibilityControl_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PasswordVisibilityControl_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PasswordVisibilityIcon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* VisibilityHidden;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MouseDown;  // 0x0278, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnClicked OnClicked;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Selected;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor HoverColour;  // 0x0294, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor NormalColour;  // 0x02A4, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor PressedColour;  // 0x02B4, size 0x10

    UFUNCTION(BlueprintCallable) void Clicked();
    UFUNCTION() void ExecuteUbergraph_UMG_PasswordVisibilityControl(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnClicked__DelegateSignature(bool Selected);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void SetIconColour(FLinearColor Specified_Color);  // parameters 0x10
};
