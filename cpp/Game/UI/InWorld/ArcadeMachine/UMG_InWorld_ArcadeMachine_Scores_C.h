// /Game/UI/InWorld/ArcadeMachine/UMG_InWorld_ArcadeMachine_Scores.UMG_InWorld_ArcadeMachine_Scores_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x274, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InWorld_ArcadeMachine_Scores_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_47;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* ListView_Scores;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxEntriesToDisplay;  // 0x0270, size 0x4

    UFUNCTION(BlueprintCallable) void UpdateScores(TArray<FArcadeMachineScore>& Scores);  // parameters 0x10
};
