// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_BlackWolfRevolver.BP_SkeletalItem_BlackWolfRevolver_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x598, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_BlackWolfRevolver_C : public ASkeletalItem, public IIFireTransformProvider_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AActor* SpawnedWolf;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* HitActor;  // 0x0590, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_BlackWolfRevolver(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetFireTransform(bool& Success, FTransform& FireTransform);  // parameters 0x40
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnProjectileFired(AIcarusItem* Projectile);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnProjectileHit(FHitResult Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnRep_SpawnedWolf();
    UFUNCTION(BlueprintCallable) void ResetSpawner();
};
