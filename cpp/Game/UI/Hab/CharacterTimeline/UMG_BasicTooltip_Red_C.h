// /Game/UI/Hab/CharacterTimeline/UMG_BasicTooltip_Red.UMG_BasicTooltip_Red_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BasicTooltip_Red_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_52;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TooltipTextField;  // 0x0290, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BasicTooltip_Red(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetText(FText ToolTipText);  // parameters 0x18
};
