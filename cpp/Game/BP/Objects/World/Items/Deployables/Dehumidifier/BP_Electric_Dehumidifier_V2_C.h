// /Game/BP/Objects/World/Items/Deployables/Dehumidifier/BP_Electric_Dehumidifier_V2.BP_Electric_Dehumidifier_V2_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x79C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Electric_Dehumidifier_V2_C : public ABP_Deployable_PowerToggleableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Electric_Dehumidifier_Fan_02;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Electric_Dehumidifier_Fan_01;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Electric_Dehumidifier_Proxy_V2;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara2;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara1;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Niagara;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Active_Audio;  // 0x0778, size 0x8
    UPROPERTY() float FanAnim_SpinRate_E87368C54EC6D3F0213C90880A7FFD3F;  // 0x0780, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FanAnim__Direction_E87368C54EC6D3F0213C90880A7FFD3F;  // 0x0784, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FanAnim;  // 0x0788, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* GeneralInventory;  // 0x0790, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastRangeValue;  // 0x0798, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_Electric_Dehumidifier_V2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void FanAnim__FinishedFunc();
    UFUNCTION() void FanAnim__UpdateFunc();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnBrownOutStrengthChanged(FIcarusResourcesEnum ResourceType, int32 NewBrownOutStrength);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintCallable) void PlayFanAnim();
    UFUNCTION(BlueprintCallable) void StopFanAnim();
    UFUNCTION(BlueprintCallable) void UpdateModifier(bool Powered);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateRunningEffects(bool ReceivingPower);  // parameters 0x1
};
