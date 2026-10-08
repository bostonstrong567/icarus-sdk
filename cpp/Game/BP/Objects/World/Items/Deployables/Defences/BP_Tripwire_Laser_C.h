// /Game/BP/Objects/World/Items/Deployables/Defences/BP_Tripwire_Laser.BP_Tripwire_Laser_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x809, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Tripwire_Laser_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* LaserAudioLoop;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Effects;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PayloadLocator;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* TriggerShape;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DamageOnOverlap;  // 0x0760, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DurabilityDamageOnHit;  // 0x0764, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<ABP_Payload_C> PayloadToSpawn;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult SweepResult;  // 0x0770, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PayloadDamage;  // 0x07F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DestroyOnOverlap;  // 0x07FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Event;  // 0x0800, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Triggered;  // 0x0808, size 0x1

    UFUNCTION() void BndEvt__BoxCombined_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void CheckCheat(bool& DoesCheatBlock);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Tripwire_Laser(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LaunchCharacter(ACharacter* IcarusCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_Triggered();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void OnTriggered();
    UFUNCTION(BlueprintCallable, NetMulticast) void TriggerExplosion(FVector Location);  // parameters 0xC
};
