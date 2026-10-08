// /Script/Icarus.ArcadeMachineFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ArcadeMachineRecorderComponent.h

UCLASS(MinimalAPI)
class UArcadeMachineFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static bool AddOrUpdateArcadeMachineScore(TArray<FArcadeMachineScore>& Scores, const FArcadeMachineScore& Score, EArcadeMachineRankingType RankingType);  // parameters 0x42
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText GetArcadeMachineTimeScoreText(float TimeScore);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static TArray<FArcadeMachineScore> SortArcadeMachineScores(TArray<FArcadeMachineScore>& Scores, EArcadeMachineRankingType RankingType);  // parameters 0x28
};
