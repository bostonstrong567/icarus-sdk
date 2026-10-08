// /Game/BP/Objects/World/Items/Deployables/Drill/BP_Deep_Mining_Drill_Biofuel.BP_Deep_Mining_Drill_Biofuel_C
// Derives from: ABP_Drill_Base_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Deep_Mining_Drill_Biofuel_C : public ABP_Drill_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_BiofuelBurn;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DeepDrilling;  // 0x09C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Belt;  // 0x09C8, size 0x8

    UFUNCTION(BlueprintCallable) void ActiveStateUpdated();
    UFUNCTION() void ExecuteUbergraph_BP_Deep_Mining_Drill_Biofuel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
