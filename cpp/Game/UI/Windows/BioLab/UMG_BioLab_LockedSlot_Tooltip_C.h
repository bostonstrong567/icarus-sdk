// /Game/UI/Windows/BioLab/UMG_BioLab_LockedSlot_Tooltip.UMG_BioLab_LockedSlot_Tooltip_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B5, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_LockedSlot_Tooltip_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ChallengeDescription;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ChallengeDetailsVBox;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ChallengeProgress;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ChallengeProgressBar;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ChallengeTitle;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* UnlockDescription;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FChallengesRowHandle Challenge;  // 0x0298, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Progress;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsActiveChallenge;  // 0x02B4, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_LockedSlot_Tooltip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
