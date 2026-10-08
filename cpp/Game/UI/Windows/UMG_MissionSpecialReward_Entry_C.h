// /Game/UI/Windows/UMG_MissionSpecialReward_Entry.UMG_MissionSpecialReward_Entry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x301, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionSpecialReward_Entry_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* B1;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* B2;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* B3;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* B4;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Title;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* UnlockOverlay;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TitleText;  // 0x02A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText RewardText;  // 0x02C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> RewardIcon;  // 0x02D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETalentProspectButtonState> Colour;  // 0x0300, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MissionSpecialReward_Entry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Setup();
};
