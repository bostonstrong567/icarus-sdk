// /Game/UI/UMG_InfoHover.UMG_InfoHover_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InfoHover_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* HoverButton;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_InfoHoverText_C* TextWidget;  // 0x0270, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_InfoHover(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetInnerTooltipText(FText InText);  // parameters 0x18
};
