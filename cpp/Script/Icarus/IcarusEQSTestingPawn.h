// /Script/Icarus.IcarusEQSTestingPawn
// Derives from: AEQSTestingPawn > ACharacter > APawn > AActor > UObject
// size 0x560, declared in Icarus/Source/Icarus/AI/EQS/IcarusEQSTestingPawn.h

UCLASS(Config=Game)
class AIcarusEQSTestingPawn : public AEQSTestingPawn
{
public:
    UPROPERTY(BlueprintAssignable) FQueryFinishedDelegate OnEQSQueryComplete;  // 0x0550, size 0x10

    UFUNCTION(BlueprintCallable) bool GetEQSResultsAsLocations(TArray<FVector>& OutLocations);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void RunEQSQueryTest();
    UFUNCTION(BlueprintCallable) void SetEQS(UEnvQuery* Template);  // parameters 0x8
};
