// /Game/BP/Tools/CheatFunctions/UMG_ExperienceNotifier.UMG_ExperienceNotifier_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x279, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ExperienceNotifier_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Events;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* Scroll;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EventFound;  // 0x0278, size 0x1

    UFUNCTION(BlueprintCallable) void AddNotify(UWidget* Content);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_UMG_ExperienceNotifier(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MoveToEnd(UWidget* Content);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnBestiaryProgress(FBestiaryDataRowHandle Group, int32 NowPoints, int32 MaxPoints);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnChallengeProgressed(const FItemData& ItemData, int32 ProgressAmount);  // parameters 0x1F4
    UFUNCTION(BlueprintCallable) void OnExperienceEvent(FExperienceEventsRowHandle ExperienceEvent, int32 ExperienceGained);  // parameters 0x1C
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnInitialized();
};
