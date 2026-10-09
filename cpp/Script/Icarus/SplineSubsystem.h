// /Script/Icarus.SplineSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Icarus/Source/Icarus/Subsystems/World/SplineSubsystem.h

UCLASS()
class USplineSubsystem : public UWorldSubsystem
{
private:
    TArray<TWeakObjectPtr<ASplineActorBase,FWeakObjectPtr>,TSizedDefaultAllocator<32> > RecordedSplineActors;  // 0x0030, not reflected
public:
    UFUNCTION(BlueprintCallable) bool CheckCollisionWithSplineID(int32 UniqueSplineID, const TArray<AActor*>& RelevantActors, int32& AdjustedUniqueSplineID);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) ASplineActorBase* FindSplineBySplineID(int32 UniqueSplineID);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RegisterSplineActor(ASplineActorBase* SplineActor);  // parameters 0x8
};
