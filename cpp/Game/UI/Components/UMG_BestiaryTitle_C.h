// /Game/UI/Components/UMG_BestiaryTitle.UMG_BestiaryTitle_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x330, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BestiaryTitle_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BestiaryUnlocks_CornerAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_2;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_79;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_167;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Main;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Progress;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ProgressTitle;  // 0x02B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FHoverUpdated HoverUpdated;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Unlock;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Percent;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor False;  // 0x02E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor True;  // 0x0308, size 0x28

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BestiaryTitle(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HoverUpdated__DelegateSignature(bool Mouse);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPercent(int32 Percent);  // parameters 0x4
};
