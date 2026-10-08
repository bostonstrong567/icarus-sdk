// /Script/Icarus.CargoLandingPadSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Icarus/Source/Icarus/Systems/Deployables/CargoLandingPadSubsystem.h

UCLASS()
class UCargoLandingPadSubsystem : public UWorldSubsystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<TWeakObjectPtr<AIcarusActor,FWeakObjectPtr>,TSizedDefaultAllocator<32> > CargoLandingPads;  // 0x0030, private

    UFUNCTION(BlueprintCallable) bool FindNearbyLandingPad(AIcarusActor* CargoPod, AActor* Querier, float MaxDistance, bool bIsPlayer, FVector& LocationOut);  // parameters 0x25
    UFUNCTION(BlueprintCallable) void RegisterLandingPad(AIcarusActor* LandingPad);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TransportPodDeparted(AIcarusActor* CargoPod);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UnRegisterLandingPad(AIcarusActor* LandingPad);  // parameters 0x8
};
