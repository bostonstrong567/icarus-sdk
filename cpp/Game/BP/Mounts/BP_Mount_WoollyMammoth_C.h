// /Game/BP/Mounts/BP_Mount_WoollyMammoth.BP_Mount_WoollyMammoth_C
// Derives from: ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xFB9, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mount_WoollyMammoth_C : public ABP_Mount_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0F38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0F40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh9;  // 0x0F48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh8;  // 0x0F50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh7;  // 0x0F58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh6;  // 0x0F60, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh5;  // 0x0F68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh4;  // 0x0F70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh3;  // 0x0F78, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh2;  // 0x0F80, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Platform_L;  // 0x0F88, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Platform_R;  // 0x0F90, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Meshes;  // 0x0F98, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFurShort;  // 0x0FA0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PetTarget;  // 0x0FA8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* HandsTarget;  // 0x0FB0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DidStatsUpdate;  // 0x0FB8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Mount_WoollyMammoth(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetHandsTargetLocation(FVector SeatLocation);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UAnimMontage* GetMontageForGameplayTag(const FGameplayTag& Tag, FName& Section) const;  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InitialiseSaddle(TSubclassOf<AActor> SaddleActorClass, FItemData SaddleItem);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void PerformAlternateAttack();
    UFUNCTION(BlueprintCallable) void RefreshStats();
    UFUNCTION(BlueprintCallable) void StatsUpdated();
    UFUNCTION(BlueprintCallable) void UpdateShelterRadius();
};
