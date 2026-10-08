// /Game/BP/Behaviours/Flammable/BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C
// Derives from: UBP_Flammable_Actor_C > UFlammableActor > UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x144, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_Flammable_SpontaneouslyCombustStuff_C : public UBP_Flammable_Actor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ActiveCombustCharged;  // 0x0138, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialCombustStuffDelay;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ActiveCombustStuffDelay;  // 0x0140, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_Flammable_SpontaneouslyCombustStuff(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnFlammableInstanceState_Combusting_Enter(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFlammableInstanceState_Combusting_Tick(UFlammableInstance* Instance, UFlammableState* State, float DeltaSeconds);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SpontaneouslyCombustStuff(bool& LitSomething);  // parameters 0x1
};
