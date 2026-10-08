// /Script/Icarus.ResourceNetworkSubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0x88, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceNetworkSubsystem.h

UCLASS()
class UResourceNetworkSubsystem : public UTickableWorldSubsystem
{
public:
    UPROPERTY() FOnResourceNetworkSubsystemTickComplete OnTickComplete;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    bool bHasIcarusBeginPlayed;  // 0x0050, private
    TArray<TWeakObjectPtr<UResourceComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32> > ResourceComponents;  // 0x0058, private
    TArray<TWeakObjectPtr<AResourceNetwork,FWeakObjectPtr>,TSizedDefaultAllocator<32> > ResourceNetworks;  // 0x0068, private
    double TickAccum;  // 0x0078, private
    double TickRate;  // 0x0080, private

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetResourceNetworkTickRate() const;  // parameters 0x4
    UFUNCTION() void IcarusBeginPlay();
};
