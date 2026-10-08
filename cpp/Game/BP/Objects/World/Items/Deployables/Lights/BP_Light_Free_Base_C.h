// /Game/BP/Objects/World/Items/Deployables/Lights/BP_Light_Free_Base.BP_Light_Free_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x775, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Light_Free_Base_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ActiveAudio;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Niagara;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool WantsOn;  // 0x0748, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool LightsEnabled;  // 0x0749, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_SwitchOn;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_SwitchOff;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* MaterialOn;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* MaterialOff;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaterialIndex;  // 0x0770, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisableSelfShadow;  // 0x0774, size 0x1

    UFUNCTION(BlueprintCallable) void ASync_Reinit();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Light_Free_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlaySwitchSound(bool IsSwitchOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_LightsEnabled();
    UFUNCTION(BlueprintCallable) void OnRep_WantsOn();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
