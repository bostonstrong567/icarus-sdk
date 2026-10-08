// /Game/UI/Settings/UMG_SettingTooltipHover.UMG_SettingTooltipHover_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingTooltipHover_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* HoverButton;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_SettingTooltipText_C* TextWidget;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<bool> States;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> Descriptions;  // 0x0288, size 0x10

    UFUNCTION() void BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SettingTooltipHover(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Set_Requirements(const TArray<FText>& Descriptions, const TArray<bool>& States);  // parameters 0x20, named "Set Requirements"
};
