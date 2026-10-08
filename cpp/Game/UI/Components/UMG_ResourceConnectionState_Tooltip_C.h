// /Game/UI/Components/UMG_ResourceConnectionState_Tooltip.UMG_ResourceConnectionState_Tooltip_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceConnectionState_Tooltip_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MainText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OptionalHeading;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OptionalText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PriorityDescription;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PriorityHeading;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TooltipTextField;  // 0x0290, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ResourceConnectionState_Tooltip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetIsPriority(bool Priority);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOptionalReason(FOptionalResourceFlowsRowHandle OptionalFlowType);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetText(FText ToolTipText);  // parameters 0x18
};
