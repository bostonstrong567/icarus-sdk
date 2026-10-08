// /Game/BP/AI/Basic/GasFlyer/BP_CRE_GasFlyer_Swamp.BP_CRE_GasFlyer_Swamp_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCCC, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_CRE_GasFlyer_Swamp_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsScared;  // 0x0CC0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsScaredKeyName;  // 0x0CC4, size 0x8

    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_CRE_GasFlyer_Swamp(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetSightPerceptionOrigin(FVector& OutLocation, FRotator& OutRotation) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void HideCorpse();
    UFUNCTION(BlueprintCallable, NetMulticast) void MultiDeathExplode();
    UFUNCTION(BlueprintImplementableEvent) void OnActorDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnMeshLanded(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xAC
    UFUNCTION(BlueprintCallable) void OnRep_On_Rep_Explode();  // named "OnRep_On Rep Explode"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateVocalisationState();
};
