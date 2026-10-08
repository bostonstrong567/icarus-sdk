// /Game/BP/Objects/World/Items/Deployables/Targets/BP_TargetRange_Bear_Target.BP_TargetRange_Bear_Target_C
// Derives from: ATargetRangeTarget > AIcarusActor > AActor > UObject
// size 0x326, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TargetRange_Bear_Target_C : public ATargetRangeTarget, public ICriticalHitReceiver
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Limb_0;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Limb_3;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Limb_2;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Limb_1;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_HighDmg;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CollapsePercent;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Collapse;  // 0x0324, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GenerateSpline;  // 0x0325, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) int32 BP_GenerateScore(FIcarusDamagePacket DamagePacket);  // parameters 0xDC
    UFUNCTION(BlueprintImplementableEvent) void BP_OnHit(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION(BlueprintImplementableEvent) void BP_ResetTarget();
    UFUNCTION() void ExecuteUbergraph_BP_TargetRange_Bear_Target(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateRailSpline();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FCriticalHitAreasEnum GetDefaultCriticalArea() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSplineComponent(USplineComponent*& SplineComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSplineEndPoint(FVector& WorldLocation) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_OnHit(FIcarusDamagePacket Damage_Packet);  // parameters 0xD8
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_ResetTarget();
    UFUNCTION(BlueprintCallable) void PerformCollapse(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PerformMovement(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TryGenerateRailSpline();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
