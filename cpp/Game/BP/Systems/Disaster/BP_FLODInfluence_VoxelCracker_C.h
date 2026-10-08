// /Game/BP/Systems/Disaster/BP_FLODInfluence_VoxelCracker.BP_FLODInfluence_VoxelCracker_C
// Derives from: UFLODInfluenceComponent > UActorComponent > UObject
// size 0x264, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_FLODInfluence_VoxelCracker_C : public UFLODInfluenceComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FFLODInstanceID, VoxelCrackInfo> PendingCrackInfo;  // 0x00D0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ProjectedNormal;  // 0x0120, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult ProjectedHit;  // 0x012C, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x01B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x01B8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Impact;  // 0x01C4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle TimerHandle;  // 0x01D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_VoxelResource_Base_C* CachedVoxel;  // 0x01D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CachedAttacker;  // 0x01E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CachedWantHits;  // 0x01E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DoneHits;  // 0x01EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CachedWeapon;  // 0x01F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsPristine;  // 0x01F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> DrillSFX;  // 0x0200, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* IcarusWeapon;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> TinkSFX;  // 0x0230, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector InitialImpact;  // 0x0258, size 0xC

    UFUNCTION(BlueprintCallable) void AddPendingCrack(FFLODInstanceID InstanceID, VoxelCrackInfo Info);  // parameters 0xB0
    UFUNCTION(BlueprintCallable) void DealCrackDamage();
    UFUNCTION() void ExecuteUbergraph_BP_FLODInfluence_VoxelCracker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MultiCrackVoxel(ABP_VoxelResource_Base_C* Voxel, AActor* Attacker, AActor* Weapon, FHitResult HitInfo, int32 NumHits);  // parameters 0xA4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_PlayCrumbleFX(FVector Loc, FVector Normal);  // parameters 0x18
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_PlayTinkFX(FVector Loc, FVector Normal);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnLoaded_44AD4E9A4964E259B0A51B82AC558602(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnVoxelMined(int32 MinedSpheres);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayVoxel_SFX(TSoftObjectPtr<UFMODEvent> Event, FVector Loc);  // parameters 0x34
    UFUNCTION(BlueprintImplementableEvent) void UpdateActiveInfluences();
    UFUNCTION(BlueprintCallable) void UpdatePendingCracks();
};
