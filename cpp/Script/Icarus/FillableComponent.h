// /Script/Icarus.FillableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xE0, declared in Icarus/Source/Icarus/Traits/FillableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UFillableComponent : public UTraitComponent
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 FillableType;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 StoredUnits;  // 0x00D4, size 0x4
    UPROPERTY(BlueprintAssignable) FResourceTypeUpdated Client_OnResourceTypeUpdated;  // 0x00D8, size 0x1
    UPROPERTY(BlueprintAssignable) FStoredUnitsUpdated Client_OnStoredUnitsUpdated;  // 0x00D9, size 0x1
    UPROPERTY(BlueprintAssignable) FStoredUnitsEmpty Client_OnStoredUnitsEmpty;  // 0x00DA, size 0x1

    UFUNCTION(BlueprintCallable) int32 AddUnits(int32 AmountToAdd, FIcarusResourcesEnum Type);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetFillableData(FFillableData& OutData) const;  // parameters 0x59
    UFUNCTION(BlueprintCallable, BlueprintPure) FIcarusResourcesEnum GetFillableType();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetStoredUnits();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsEmpty();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsFull();  // parameters 0x1
    UFUNCTION() void OnRep_ResourceType();
    UFUNCTION() void OnRep_StoredUnits();
    UFUNCTION(BlueprintCallable) int32 RemoveUnits(int32 AmountToRemove, FIcarusResourcesEnum Type);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) bool SetResourceType(FIcarusResourcesEnum NewResourceType);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetStoredUnits(int32 NewCapacity);  // parameters 0x4
};
