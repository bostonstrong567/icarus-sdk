// /Game/UI/Components/UMG_MissionCompleteFaction.UMG_MissionCompleteFaction_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionCompleteFaction_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MissionName;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Status;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SuccessImage;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Color;  // 0x0278, size 0x28

    UFUNCTION(BlueprintCallable) void Update(bool Success, FFactionMissionsRowHandle FactionMission, FText ProspectName);  // parameters 0x38
};
