// /Script/Icarus.GeneratorComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0x300, declared in Icarus/Source/Icarus/Traits/GeneratorComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UGeneratorComponent : public UTraitComponent, public IResourceInteractionInterface, public IDynamicResourceFlowSource
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bGeneratorActive;  // 0x00E0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 CurrentGenerationRate;  // 0x00E4, size 0x4
    UPROPERTY(BlueprintAssignable) FGeneratorActiveStateUpdated OnGeneratorActiveStateUpdated;  // 0x00E8, size 0x1
    UPROPERTY(BlueprintAssignable) FGeneratorOutOfFuel OnGeneratorOutOfFuel;  // 0x00E9, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* TransmutationInventory;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UInventory*> AdditionalInventories;  // 0x00F8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FItemData CurrentTransmutationItem;  // 0x0108, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PartialTransmuationResource;  // 0x02F8, size 0x4

    UFUNCTION(BlueprintCallable) bool ActivateGenerator();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DeactivateGenerator();
    UFUNCTION() bool GenerateResource(float Delta);  // parameters 0x5
    UFUNCTION(NetMulticast, BlueprintNativeEvent) void GeneratorOutOfFuel();
    UFUNCTION() float GetAdjustedRequiredTransmutationUnits(float CurrentUnits) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetGeneratorData(FGeneratorData& OutData) const;  // parameters 0x61
    UFUNCTION(BlueprintCallable) void InitialiseComponent(UInventory* NewTransmutationInventory, TArray<UInventory*> NewAdditionalInventories);  // parameters 0x18
    UFUNCTION() void OnRep_GeneratorActive();
    UFUNCTION(BlueprintCallable) void ProcessGenerator(float Delta);  // parameters 0x4
    UFUNCTION() void ProduceByproduct(FItemData Item);  // parameters 0x1F0
    UFUNCTION() bool TransmuteItems(float Delta);  // parameters 0x5

    // Virtual functions that start here:
    //   GeneratorOutOfFuel_Implementation
};
