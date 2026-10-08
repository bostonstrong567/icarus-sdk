// /Game/BP/Objects/World/Items/Deployables/Cooking/BP_Fireplace.BP_Fireplace_C
// Derives from: ABP_FireProcessorBase_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fireplace_C : public ABP_FireProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Niagara;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x09C0, size 0x8

    UFUNCTION(BlueprintImplementableEvent) void AttachedDeployableActorsUpdated();
    UFUNCTION() void ExecuteUbergraph_BP_Fireplace(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateAttachedSmokeParticles(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
