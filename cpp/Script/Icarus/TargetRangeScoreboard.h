// /Script/Icarus.TargetRangeScoreboard
// Derives from: AIcarusActor > AActor > UObject
// size 0x2C8, declared in Icarus/Source/Icarus/Systems/TargetRange/TargetRangeScoreboard.h

UCLASS(Config=Engine)
class ATargetRangeScoreboard : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ATargetRangeController* RangeController;  // 0x02C0, size 0x8

    UFUNCTION(BlueprintCallable) void RegisterTargetRangeController(ATargetRangeController* Controller);  // parameters 0x8
};
