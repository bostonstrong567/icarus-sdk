// /Script/Icarus.TraitComponent
// Derives from: UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Traits/TraitComponent.h

UCLASS(Abstract, EditInlineNew, MinimalAPI, Config=Engine)
class UTraitComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FDynamicDataUpdated DynamicDataUpdated;  // 0x00B0, size 0x1
protected:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FRowHandle DataRowHandle;  // 0x00B4, size 0x18
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) AIcarusActor* GetOwnerIcarusActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) AIcarusItem* GetOwnerIcarusItem() const;  // parameters 0x8
    UFUNCTION() TSubclassOf<UTraitComponent> GetTraitClassFromData(FRowHandle ItemDataRow);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsDataNull() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsDataRowValid() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void OnAnimNotify(const FAnimNotifyEvent& Notify, AActor* AnimInstancePawn);  // parameters 0xC0
    UFUNCTION(BlueprintNativeEvent) void OnDataSet();
    UFUNCTION() void OnRep_DataRowHandle();

    // Virtual functions that start here:
    //   GetTraitClassFromData, HandleNotify, OnAnimNotify_Implementation, OnDataSet_Implementation, SetData
};
