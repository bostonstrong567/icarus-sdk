// /Game/UI/Settings/UMG_SettingTooltip_TextBlock.UMG_SettingTooltip_TextBlock_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingTooltip_TextBlock_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextWidget;  // 0x0270, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_SettingTooltip_TextBlock(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Set_Text(FText InText, bool State);  // parameters 0x19, named "Set Text"
};
