// /Game/UI/Settings/UMG_SettingTooltipText.UMG_SettingTooltipText_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingTooltipText_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_132;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* TextBox;  // 0x0270, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_SettingTooltipText(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Set_Requirements(const TArray<FText>& InText, const TArray<bool>& States);  // parameters 0x20, named "Set Requirements"
};
