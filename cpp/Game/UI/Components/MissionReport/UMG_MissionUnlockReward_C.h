// /Game/UI/Components/MissionReport/UMG_MissionUnlockReward.UMG_MissionUnlockReward_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionUnlockReward_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Frame;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* UnlockBorder;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnlockIcon;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* UnlockText;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Content_Colour;  // 0x0290, size 0x10, named "Content Colour"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Background_Colour;  // 0x02A0, size 0x10, named "Background Colour"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x02B0, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MissionUnlockReward(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Style_Box(FLinearColor ContentColour, FLinearColor BackgroundColour);  // parameters 0x20, named "Style Box"
    UFUNCTION(BlueprintCallable) void UpdateText(FText Text);  // parameters 0x18
};
