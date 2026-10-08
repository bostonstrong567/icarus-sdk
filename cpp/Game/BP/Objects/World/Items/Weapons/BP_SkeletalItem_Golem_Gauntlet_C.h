// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Golem_Gauntlet.BP_SkeletalItem_Golem_Gauntlet_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5F9, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Golem_Gauntlet_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* BlockingAudio;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Gauntlet_Shield;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Gauntlet_VoxelCharge;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x05A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UMaterialInterface*, EVoxelResourceCategory> VoxelMaterials;  // 0x05A8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsParticleUpdate;  // 0x05F8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Golem_Gauntlet(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetVoxelMaterials(EVoxelResourceCategory ItemToFind, int32 Dimension_1, UMaterialInterface*& Output);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateAttachment();
    UFUNCTION(BlueprintCallable) void UpdateShieldParticleState();
};
