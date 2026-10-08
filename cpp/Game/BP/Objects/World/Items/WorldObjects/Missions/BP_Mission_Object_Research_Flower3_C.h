// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Object_Research_Flower3.BP_Mission_Object_Research_Flower3_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x397, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Object_Research_Flower3_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NE_PlantGlowBurst;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NE_PlantGlow;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Leaves;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Branches;  // 0x0348, size 0x8
    UPROPERTY() FVector ShrinkBranches_BranchesScale_D0AD10524F6CFCB7C54A70AA60218CB1;  // 0x0350, size 0xC
    UPROPERTY() float ShrinkBranches_LightIntensity_D0AD10524F6CFCB7C54A70AA60218CB1;  // 0x035C, size 0x4
    UPROPERTY() float ShrinkBranches_Saturation_D0AD10524F6CFCB7C54A70AA60218CB1;  // 0x0360, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> ShrinkBranches__Direction_D0AD10524F6CFCB7C54A70AA60218CB1;  // 0x0364, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* ShrinkBranches;  // 0x0368, size 0x8
    UPROPERTY() FVector GrowBranches_BranchesScale_1EA150FB4A6FF622CCD5338427F260F6;  // 0x0370, size 0xC
    UPROPERTY() float GrowBranches_LightIntensity_1EA150FB4A6FF622CCD5338427F260F6;  // 0x037C, size 0x4
    UPROPERTY() float GrowBranches_Saturation_1EA150FB4A6FF622CCD5338427F260F6;  // 0x0380, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> GrowBranches__Direction_1EA150FB4A6FF622CCD5338427F260F6;  // 0x0384, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* GrowBranches;  // 0x0388, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Delta_Seconds;  // 0x0390, size 0x4, named "Delta Seconds"
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsNightTime;  // 0x0394, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Open;  // 0x0395, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Interacted;  // 0x0396, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Mission_Object_Research_Flower3(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void GrowBranches__FinishedFunc();
    UFUNCTION() void GrowBranches__UpdateFunc();
    UFUNCTION(BlueprintCallable) void NightDressingOff();
    UFUNCTION(BlueprintCallable) void NightDressingOn();
    UFUNCTION(BlueprintCallable) void OnInteract();
    UFUNCTION(BlueprintCallable) void OnRep_Interacted();
    UFUNCTION(BlueprintCallable) void OnRep_IsNightTime();
    UFUNCTION(BlueprintCallable) void OnRep_Open();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION() void ShrinkBranches__FinishedFunc();
    UFUNCTION() void ShrinkBranches__UpdateFunc();
    UFUNCTION(BlueprintCallable) void TransitionToHarvested();
    UFUNCTION(BlueprintCallable) void Update_Nighttime();  // named "Update Nighttime"
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
