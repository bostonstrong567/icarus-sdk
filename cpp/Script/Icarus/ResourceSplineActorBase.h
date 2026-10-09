// /Script/Icarus.ResourceSplineActorBase
// Derives from: ASplineActorBase > AActor > UObject
// size 0x258, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceSplineActorBase.h

UCLASS(Config=Engine)
class AResourceSplineActorBase : public ASplineActorBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UResourceNetworkComponent*> StartAtComponents;  // 0x0230, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UResourceNetworkComponent*> EndAtComponents;  // 0x0240, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AResourceNetwork* Network;  // 0x0250, size 0x8
public:
    UFUNCTION(BlueprintCallable) void AddLinkedComponentAtEnd(UResourceNetworkComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddLinkedComponentAtStart(UResourceNetworkComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UResourceNetworkComponent*> GetAllLinkedComponents() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void HandleReloadedResourceComponents(TArray<AIcarusActor*> IcarusActors, TArray<int32> AddAtStartUIDs, TArray<int32> AddAtEndUIDs);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void RemoveLinkedComponent(UResourceNetworkComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveLinkedComponentAtEnd(UResourceNetworkComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveLinkedComponentAtStart(UResourceNetworkComponent* Component);  // parameters 0x8
};
