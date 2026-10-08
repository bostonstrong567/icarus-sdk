// /Game/BP/Objects/World/Items/Weapons/BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x74D, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fishing_Rod_Lure_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* CaughtFish;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* LureSkeletalMesh;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Mesh;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USmoothSync* SmoothSync;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_Fishing_C* BP_UIProjectionComponent_Fishing;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_BuoyancyComponent_C* BP_BuoyancyComponent;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Casted;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LaunchVelocity;  // 0x02FC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OverlapRange;  // 0x0308, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* DefaultLure;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_SkeletalItem_Fishing_Rod_C* Rod;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSmoothSyncActive;  // 0x0320, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FItemData CurrentLure;  // 0x0328, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData CurrentFish;  // 0x0518, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Fly;  // 0x0708, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Fish_Interested;  // 0x0710, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Land;  // 0x0718, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ForceDisableSmoothSync;  // 0x0720, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Fish;  // 0x0728, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* FlyAudio;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* FishAudio;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* DefaultLureSkeletalMesh;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WaterPlaneZ;  // 0x0748, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsBlinky;  // 0x074C, size 0x1

    UFUNCTION(BlueprintCallable) void BindToMeshUpdates();
    UFUNCTION() void BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xAC
    UFUNCTION(BlueprintCallable) void CustomAnim();
    UFUNCTION() void ExecuteUbergraph_BP_Fishing_Rod_Lure(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFishingRod(ABP_SkeletalItem_Fishing_Rod_C*& FishingRod);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOwningPlayer(AIcarusPlayerCharacter*& AsIcarus_Player_Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetProjectionComponent(UBP_UIProjectionComponent_Fishing_C*& BP_UIProjectionComponent_Fishing);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable, BlueprintPure) void Is_Floating(bool& IsFloating);  // parameters 0x1, named "Is Floating"
    UFUNCTION(BlueprintCallable) void On_Lure_Updated(UInventory* Inventory, int32 Location);  // parameters 0xC, named "On Lure Updated"
    UFUNCTION(BlueprintCallable) void OnFloatingChanged(bool Floating);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnLoaded_80A951DB46CB0CDFB8757C8FB6BF2ED9(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_DE554079490083A2D4196685C51B4028(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_Casted();
    UFUNCTION(BlueprintCallable) void OnRep_CurrentLure();
    UFUNCTION(BlueprintCallable) void PlayFishInterestedAudio();
    UFUNCTION(BlueprintCallable) void PlayFlyAudio();
    UFUNCTION(BlueprintCallable) void PlayLandAudio();
    UFUNCTION(BlueprintCallable) void PlayLandSplashVFX();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResetLandEffects();
    UFUNCTION(BlueprintCallable) void SetFish(FItemData Fish);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void SetSmoothSync(bool enable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShouldFishAudioPlay(bool& ShouldPlay);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StopFlyAudio();
    UFUNCTION(BlueprintCallable) void TryPlayLandEffects();
    UFUNCTION(BlueprintCallable) void UpdateFish();
    UFUNCTION(BlueprintCallable) void UpdateFishAudioParams();
    UFUNCTION(BlueprintCallable) void UpdateFishAudioState();
    UFUNCTION(BlueprintCallable) void UpdateLure();
};
