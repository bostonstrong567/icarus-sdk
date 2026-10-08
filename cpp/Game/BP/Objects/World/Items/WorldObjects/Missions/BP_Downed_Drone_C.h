// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Downed_Drone.BP_Downed_Drone_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x372, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Downed_Drone_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ExplosionAudio;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* Explode_Particle;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* AlarmAudio;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* Sparks_Particle;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* Smoke_Particle;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ObjectMesh1;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool PlayAlarm;  // 0x0370, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Explode;  // 0x0371, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Downed_Drone(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_Explode();
    UFUNCTION(BlueprintCallable) void OnRep_PlayAlarm();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
