// /Game/UI/Windows/BioLab/UMG_ChallengeExperienceNotification.UMG_ChallengeExperienceNotification_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ChallengeExperienceNotification_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FChallengesRowHandle Challenge;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Progress;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AddedProgress;  // 0x028C, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ChallengeExperienceNotification(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Remove();
};
