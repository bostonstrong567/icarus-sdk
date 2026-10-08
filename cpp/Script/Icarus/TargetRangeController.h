// /Script/Icarus.TargetRangeController
// Derives from: AIcarusActor > AActor > UObject
// size 0x358, declared in Icarus/Source/Icarus/Systems/TargetRange/TargetRangeController.h

UCLASS(Config=Engine)
class ATargetRangeController : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float CurrentTime;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float MaxTime;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<FTargetRangeScore> Scores;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FTargetRangeScore HighScore;  // 0x02D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ATargetRangeTarget*> Targets;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ATargetRangeTrigger*> Triggers;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ETargetRangeState State;  // 0x0320, size 0x1
    UPROPERTY(BlueprintAssignable) FOnRoundComplete OnRoundComplete;  // 0x0328, size 0x10
    UPROPERTY(BlueprintAssignable) FOnScoreIncreased OnScoreIncreased;  // 0x0338, size 0x10
    UPROPERTY(BlueprintAssignable) FOnNewHighScore OnNewHighScore;  // 0x0348, size 0x10

    UFUNCTION(NetMulticast, BlueprintNativeEvent) void NotifyNewHighScore();
    UFUNCTION(NetMulticast, BlueprintNativeEvent) void NotifyRoundComplete();
    UFUNCTION(NetMulticast, BlueprintNativeEvent) void NotifyScoreIncreased();
    UFUNCTION(BlueprintCallable) void RegisterScore(APlayerController* Player, int32 Score);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void RegisterTarget(ATargetRangeTarget* Target);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RegisterTrigger(ATargetRangeTrigger* Trigger);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TriggerStart();

    // Virtual functions that start here:
    //   NotifyNewHighScore_Implementation, NotifyRoundComplete_Implementation
    //   NotifyScoreIncreased_Implementation
};
