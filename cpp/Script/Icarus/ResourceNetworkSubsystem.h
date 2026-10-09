// /Script/Icarus.ResourceNetworkSubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0x88, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceNetworkSubsystem.h

UCLASS()
class UResourceNetworkSubsystem : public UTickableWorldSubsystem
{
public:
    UPROPERTY() FOnResourceNetworkSubsystemTickComplete OnTickComplete;  // 0x0040, size 0x10
private:
    bool bHasIcarusBeginPlayed;  // 0x0050, not reflected
    TArray<TWeakObjectPtr<UResourceComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32> > ResourceComponents;  // 0x0058, not reflected
    TArray<TWeakObjectPtr<AResourceNetwork,FWeakObjectPtr>,TSizedDefaultAllocator<32> > ResourceNetworks;  // 0x0068, not reflected
    double TickAccum;  // 0x0078, not reflected
    double TickRate;  // 0x0080, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetResourceNetworkTickRate() const;  // parameters 0x4
    UFUNCTION() void IcarusBeginPlay();
};
