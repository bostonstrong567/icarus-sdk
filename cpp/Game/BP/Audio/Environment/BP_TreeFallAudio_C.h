// /Game/BP/Audio/Environment/BP_TreeFallAudio.BP_TreeFallAudio_C
// Derives from: AActor > UObject
// size 0x32C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TreeFallAudio_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_GroundSurfaceChecker_C* BP_GroundSurfaceChecker;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionComponent* AudioOcclusion;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FTreeAudioDataRowHandle AudioDataRow;  // 0x0248, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<ABP_TreeBase_C*> TreeBases;  // 0x0260, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_TreeBase_C* InitialTreeBase;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetVerticalOffset;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentVerticalOffset;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* FallAudioComponent;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float PositionLerpSpeed;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VelocityUpdateFrequency;  // 0x028C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AbsoluteTimeoutLength;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float NotMovingTimeoutLength;  // 0x0294, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float BranchBreakTimeWindow;  // 0x0298, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float StopFallingDelayOnTrunkHit;  // 0x029C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastDotProduct;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastVelocityFromPositionHistory;  // 0x02A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> BranchBreakTimes;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector AudioDebugLocation;  // 0x02B8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTimerHandle> TimerHandles;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory VelocityPositionHistory;  // 0x02D8, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsFalling;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool TrunkHasHitGround;  // 0x0309, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastMoveTime;  // 0x030C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float HitImpulseMin;  // 0x0310, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HitCooldownExpiry;  // 0x0314, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float HitImpulseMax;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float HitCooldownLength;  // 0x031C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float HitCooldownLengthAfterLanding;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumTrunkPrimitives;  // 0x0324, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float HitCooldownVarianceMultiplier;  // 0x0328, size 0x4

    UFUNCTION(BlueprintCallable) void BranchDetached();
    UFUNCTION() void ExecuteUbergraph_BP_TreeFallAudio(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrentRootTreePrimitive(UBP_TreePrimitive_C*& RootTreePrimitive);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetCurrentTreeBase(ABP_TreeBase_C*& TreeBase);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetTrunkPrimitivesCount(ABP_TreeBase_C* TreeBase, int32& NumTrunks);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsReadyToLand(bool& ReadyToLand);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayHitBuildingSound(FVector Location, float Damage, TEnumAsByte<EPhysicalSurface> Surface);  // parameters 0x11
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayHitSound(FVector Location, float HitIntensity, TEnumAsByte<EPhysicalSurface> Surface);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnRep_TreeBases();
    UFUNCTION(BlueprintCallable) void OnRep_TrunkHasHitGround();
    UFUNCTION(BlueprintCallable) void PlayFallingAudio();
    UFUNCTION(BlueprintCallable) void PlayHitBuildingSound(FVector InLocation, TEnumAsByte<EPhysicalSurface> Surface, float InputPin);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void PlayHitSound(FVector InLocation, TEnumAsByte<EPhysicalSurface> Surface, float InputPin);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void PlayTrunkLandedSound();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void RollNewCooldownTime(float BaseCooldownLength, float& NewTime);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Server_AddTreeBase(ABP_TreeBase_C* TreeBase);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Server_TrunkHit(UBP_TreePrimitive_C* TreePrimitive, AActor* OtherActor, UPrimitiveComponent* OtherPrimitive, TEnumAsByte<EPhysicalSurface> HitSurface, FVector HitLocation, float ImpulseValue, float Damage);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SetBranchBreakParameters();
    UFUNCTION(BlueprintCallable) void SetFallParameters(float NewDotProduct);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVelocityParameters(float AngularVelocity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void StartFalling();
    UFUNCTION(BlueprintCallable) void StopFalling();
    UFUNCTION(BlueprintCallable) void StopFallingAudio();
    UFUNCTION(BlueprintCallable) void TrunkLanded();
    UFUNCTION(BlueprintCallable) void UpdateAngularVelocity();
    UFUNCTION(BlueprintCallable) void UpdateAudioPosition(float DeltaSeconds, bool Instant);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void UpdateFallParameters();
};
