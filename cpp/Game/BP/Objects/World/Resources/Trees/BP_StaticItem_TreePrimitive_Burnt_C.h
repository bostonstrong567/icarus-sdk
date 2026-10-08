// /Game/BP/Objects/World/Resources/Trees/BP_StaticItem_TreePrimitive_Burnt.BP_StaticItem_TreePrimitive_Burnt_C
// Derives from: ABP_StaticItem_TreePrimitive_C > AStaticItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x869, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_StaticItem_TreePrimitive_Burnt_C : public ABP_StaticItem_TreePrimitive_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0838, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ETreePrimitiveType OriginalPrimitiveType;  // 0x0840, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasBegunRootCollision;  // 0x0841, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Falling;  // 0x0848, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* FallingSound;  // 0x0850, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Land;  // 0x0858, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FallingSoundTimeoutTime;  // 0x0860, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FallingSoundTimeoutLength;  // 0x0864, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasLanded;  // 0x0868, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanLandOnTarget(AActor* HitActor, USceneComponent* HitComponent, bool& CanLand);  // parameters 0x11
    UFUNCTION() void ExecuteUbergraph_BP_StaticItem_TreePrimitive_Burnt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize(FItemRewardsRowHandle RewardsRowHandle, bool SubdivideImmediately, bool SubdivideCopyMeshTransform, TreePrimitiveSubdivideMeshes SubdivideMeshes, UStaticMeshComponent* Instigator, bool EnableHitEvents, float AngularDampingZ, float MaxHealth, bool SubdivideRaycastPosition, UPhysicalMaterial* PhysicalMaterialOverride);  // parameters 0x70
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsReadyToLand(bool& ReadyToLand);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PlayLandSound();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TryPlayCollisionSound(FVector Impulse, FHitResult& Hit);  // parameters 0x94
    UFUNCTION(BlueprintCallable) void UpdateFallingSound(float Delta_Seconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateRootCollision(FVector HitLocation);  // parameters 0xC
};
