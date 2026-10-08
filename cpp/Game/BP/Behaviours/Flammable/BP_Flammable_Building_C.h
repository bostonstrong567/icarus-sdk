// /Game/BP/Behaviours/Flammable/BP_Flammable_Building.BP_Flammable_Building_C
// Derives from: UBP_Flammable_Actor_C > UFlammableActor > UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x148, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_Flammable_Building_C : public UBP_Flammable_Actor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Building_Base_C* OwnerBuilding;  // 0x0138, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UModifierStateComponent* ModiferStateComponent;  // 0x0140, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool CanPropagate(EFlammablePropagationType PropagationType) const;  // parameters 0x2
    UFUNCTION() void ExecuteUbergraph_BP_Flammable_Building(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FBoxSphereBounds GetLocalBounds() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void OnFlammableInstanceState_Combusting_Enter(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFlammableInstanceState_Combusting_Tick(UFlammableInstance* Instance, UFlammableState* State, float DeltaSeconds);  // parameters 0x14
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetupBuildingCosmetics();
    UFUNCTION(BlueprintCallable) void SetupCosmetics();
    UFUNCTION(BlueprintCallable) void TeardownCosmetics();
};
