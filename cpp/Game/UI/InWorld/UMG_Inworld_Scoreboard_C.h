// /Game/UI/InWorld/UMG_Inworld_Scoreboard.UMG_Inworld_Scoreboard_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Inworld_Scoreboard_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ActiveState;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* InactiveState;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Scores;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ScoreState;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TimeText;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventorySeperator_C* UMG_InventorySeperator;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ATargetRangeController* RangeController;  // 0x0298, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_Inworld_Scoreboard(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindExistingScoreWidget(FString Name, UUMG_TargetRangeScore_C*& Score);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Setup(ATargetRangeController* RangeController);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateScores();
    UFUNCTION(BlueprintCallable) void UpdateTimer();
};
