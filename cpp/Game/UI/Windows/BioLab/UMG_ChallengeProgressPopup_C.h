// /Game/UI/Windows/BioLab/UMG_ChallengeProgressPopup.UMG_ChallengeProgressPopup_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ChallengeProgressPopup_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ChallengeDescription;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ChallengeName;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ChallengeProgressBar;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemIcon;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemName;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProgressValues;  // 0x0290, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_ChallengeProgressPopup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Update(FItemData Item, int32 ProgressedAmount);  // parameters 0x1F4
};
