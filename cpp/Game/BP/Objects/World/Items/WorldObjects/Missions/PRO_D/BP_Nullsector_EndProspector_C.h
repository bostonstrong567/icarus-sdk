// /Game/BP/Objects/World/Items/WorldObjects/Missions/PRO_D/BP_Nullsector_EndProspector.BP_Nullsector_EndProspector_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x37A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Nullsector_EndProspector_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight1;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh4;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh3;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh2;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleSystem;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Person;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Fall;  // 0x0378, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Charging;  // 0x0379, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Nullsector_EndProspector(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_Charging();
    UFUNCTION(BlueprintCallable) void OnRep_Fall();
    UFUNCTION(BlueprintCallable) void Ragdoll();
    UFUNCTION(BlueprintCallable) void TriggerChargeUp();
    UFUNCTION(BlueprintCallable) void TriggerDeath();
};
