// /Game/UI/UMG_InfoHoverText.UMG_InfoHoverText_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InfoHoverText_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextWidget;  // 0x0268, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_InfoHoverText(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetText(FText InText);  // parameters 0x18
};
