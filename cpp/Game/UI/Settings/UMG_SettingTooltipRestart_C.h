// /Game/UI/Settings/UMG_SettingTooltipRestart.UMG_SettingTooltipRestart_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingTooltipRestart_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* HoverButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WarningImage;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_SettingTooltipRestartTooltip_C* Tooltip;  // 0x0278, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SettingTooltipRestart(int32 EntryPoint);  // parameters 0x4
};
