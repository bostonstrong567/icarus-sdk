// /Game/BP/Objects/World/Resources/Rocks/BP_VoxelResource_Base.BP_VoxelResource_Base_C
// Derives from: AVoxelResource > AIcarusActor > AActor > UObject
// size 0x604, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_VoxelResource_Base_C : public AVoxelResource
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UShelteredModifierComponent* ShelteredModifier;  // 0x05B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HitableBehaviour_VoxelResource_C* BP_HitableBehaviour_VoxelResource;  // 0x05C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UExperienceComponent* Experience;  // 0x05C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InstantVoxelMineResourceMulti;  // 0x05D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceRowHandle StoneVoxelExperienceRow;  // 0x05D4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle StoneResourceType;  // 0x05EC, size 0x18

    UFUNCTION() void BndEvt__FLODActorComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature(UFLODActorComponent* Component, AActor* Actor, const FTransform& Transform);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void ConsumeHit(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION() void ExecuteUbergraph_BP_VoxelResource_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetResourceType(FItemTemplateRowHandle& ItemRow);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnVoxelCompleted();
    UFUNCTION(BlueprintCallable) void PlayFullyMinedFX();
    UFUNCTION(BlueprintCallable) void ReInitVoxel();
    UFUNCTION(BlueprintImplementableEvent) void ResourcesMined(float ResourceMinedCount, AIcarusPlayerController* LastHitPlayerController);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetResourceMaterial(UMaterialInterface* Material);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void UpdateExperienceComponent(const FItemTemplateRowHandle& ForResourceType);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
