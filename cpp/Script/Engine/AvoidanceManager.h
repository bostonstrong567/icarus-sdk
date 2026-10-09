// /Script/Engine.AvoidanceManager
// Derives from: UObject
// size 0xE0, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h

UCLASS(Config=Engine)
class UAvoidanceManager : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) float DefaultTimeToLive;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, Config) float LockTimeAfterAvoid;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, Config) float LockTimeAfterClean;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, Config) float DeltaTimeToPredict;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, Config) float ArtificialRadiusExpansion;  // 0x0040, size 0x4
    UPROPERTY(Deprecated) float TestHeightDifference;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, Config) float HeightCheckMargin;  // 0x0048, size 0x4
protected:
    FTimerHandle TimerHandle_RemoveOutdatedObjects;  // 0x0050, not reflected
    TMap<int,FNavAvoidanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNavAvoidanceData,0> > AvoidanceObjects;  // 0x0058, not reflected
    TArray<int,TSizedDefaultAllocator<32> > NewKeyPool;  // 0x00A8, not reflected
    TArray<FVelocityAvoidanceCone,TSizedDefaultAllocator<32> > AllCones;  // 0x00B8, not reflected
    TWeakObjectPtr<UObject,FWeakObjectPtr> EdgeProviderOb;  // 0x00C8, not reflected
    INavEdgeProviderInterface * EdgeProviderInterface;  // 0x00D0, not reflected
    uint32 : 1 bAutoPurceOutdatedObjects;  // 0x00D8, not reflected
    uint32 : 1 bRequestedUpdateTimer;  // 0x00D8, not reflected
public:
    UFUNCTION(BlueprintCallable) FVector GetAvoidanceVelocityForComponent(UMovementComponent* MovementComp);  // parameters 0x14
    UFUNCTION(BlueprintCallable) int32 GetNewAvoidanceUID();  // parameters 0x4
    UFUNCTION(BlueprintCallable) int32 GetObjectCount();  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool RegisterMovementComponent(UMovementComponent* MovementComp, float AvoidanceWeight);  // parameters 0xD
};
