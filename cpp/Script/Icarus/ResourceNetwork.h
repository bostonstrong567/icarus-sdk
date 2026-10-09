// /Script/Icarus.ResourceNetwork
// Derives from: AIcarusActor > AActor > UObject
// size 0x2F8, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceNetwork.h

UCLASS(Config=Engine)
class AResourceNetwork : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    bool bIsReloading;  // 0x02C0, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 LastRateOffset;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 LastTotalSupply;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 LastTotalDemand;  // 0x02CC, size 0x4
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UResourceNetworkComponent*> LinkedDevices;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FIcarusResourcesEnum NetworkType;  // 0x02E0, size 0x10
    float PartialUnits;  // 0x02F0, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddLinkedDevice(UResourceNetworkComponent* Device);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetAccessibleStoredResource() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UResourceNetworkComponent*> GetLinkedDevices() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) FIcarusResourcesEnum GetNetworkType();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsConnectedToDevice(UResourceNetworkComponent* Device) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void RemoveLinkedDevice(UResourceNetworkComponent* Device);  // parameters 0x8
};
