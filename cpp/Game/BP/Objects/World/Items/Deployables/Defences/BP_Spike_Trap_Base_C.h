// /Game/BP/Objects/World/Items/Deployables/Defences/BP_Spike_Trap_Base.BP_Spike_Trap_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x798, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Spike_Trap_Base_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Wood_Damage;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleSystem_Blood;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Effects;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box01_Primary;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_OverlapChecks;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> OverlapClassToDamage;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InitialHitDamage;  // 0x0760, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OverlapDamage;  // 0x0764, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SelfDamage;  // 0x0768, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayerDamageMultiplier;  // 0x076C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle OverlapTimerRef;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* BaseStaticMesh;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* DestructionStaticMeshState_1;  // 0x0780, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* DestructionStaticMeshState_2;  // 0x0788, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* DestructionStaticMeshState_3;  // 0x0790, size 0x8

    UFUNCTION() void BndEvt__BoxCombined_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void DoDamage(int32 DamageAmount, AActor* Defender);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void DoEffects();
    UFUNCTION() void ExecuteUbergraph_BP_Spike_Trap_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LaunchCharacter(ACharacter* IcarusCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OverlapAndDamageCheck();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateDamageState(UActorState* ActorState, float NewHealth);  // parameters 0xC
};
