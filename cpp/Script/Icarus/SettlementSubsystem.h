// /Script/Icarus.SettlementSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Icarus/Source/Icarus/Settlement/SettlementSubsystem.h

UCLASS()
class USettlementSubsystem : public UWorldSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<TWeakObjectPtr<ASettlement>> Settlements;  // 0x0030, size 0x10
public:
    UFUNCTION(BlueprintCallable) void AddSettlement(ASettlement* Settlement);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<ASettlement*> GetAllSettlements() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GetBufferZone();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) ASettlement* GetClosestSettlement(const FVector& Location) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void RemoveSettlement(ASettlement* Settlement);  // parameters 0x8
};
