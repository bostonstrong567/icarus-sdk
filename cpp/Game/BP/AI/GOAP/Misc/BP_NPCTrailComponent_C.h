// /Game/BP/AI/GOAP/Misc/BP_NPCTrailComponent.BP_NPCTrailComponent_C
// Derives from: UActorComponent > UObject
// size 0x208, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_NPCTrailComponent_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USplineComponent* SplineComponent;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NewPointIndex;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TerrainZOffset;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastPointPosition;  // 0x00C8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDistanceBetweenSplinePoints;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* TrailMaterial;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PointLifetime;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USplineMeshComponent* LastMeshComponent;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USplineMeshComponent*> SplineMeshComponentArray;  // 0x00F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> SplineMeshLifetimeArray;  // 0x0100, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D SplineScale;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EnablePlayerOverlaps;  // 0x0118, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AActor*, int32> ActiveOverlapCount;  // 0x0120, size 0x50
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FActorBeginSplineOverlap ActorBeginSplineOverlap;  // 0x0170, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FActorEndSplineOverlap ActorEndSplineOverlap;  // 0x0180, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DisableOverlapsAtLifetimeThreshold;  // 0x0190, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName OptionalOriginSocket;  // 0x0194, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ReportTouchEventOnContact;  // 0x019C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMesh*> TrailSplineMeshes;  // 0x01A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* EndCapMesh;  // 0x01B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseNiagraSystem;  // 0x01B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* NiagaraSystem;  // 0x01C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* FadeOutCurve;  // 0x01C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseFadeOutCurve;  // 0x01D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UNiagaraComponent*> NiagaraSystemArray;  // 0x01D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CastMeshShadows;  // 0x01E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FNiagaraSystemAdded NiagaraSystemAdded;  // 0x01F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NewSplineTickTime;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpdateSplineTickTime;  // 0x0204, size 0x4

    UFUNCTION(BlueprintCallable) void ActorBeginSplineOverlap__DelegateSignature(AActor* Actor, USplineMeshComponent* FirstSegmentOverlap);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ActorEndSplineOverlap__DelegateSignature(AActor* Actor, USplineMeshComponent* LastSegmentOverlap);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void DisableOverlapsOnSegment(USplineMeshComponent* Component);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_NPCTrailComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateNewPoint();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNewPointExpiryTime(float& TimeInSeconds) const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetNewPointLocation(bool& Success, FVector& Location, FVector& UpDirection);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) UStaticMesh* GetNextSplineMesh() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetRemainingTimeForPointIndex(int32 Index, float& PercentageTimeRemaining) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTrailOrigin(FVector& WorldLocation) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void InitialiseSplineMeshTransform(USplineMeshComponent* Target, int32 SplinePointIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void NiagaraSystemAdded__DelegateSignature(UNiagaraComponent* NewSystem);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnActorBeginSegmentOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void OnActorBeginSplineOverlap(AActor* Actor, USplineMeshComponent* FirstSegmentOverlap);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnActorEndSegmentOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void OnActorEndSplineOverlap(AActor* Actor, USplineMeshComponent* LastSegmentOverlap);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RemovePointAtIndex(int32 IndexToRemove, bool UpdateEndCap);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void RemoveSplineMeshComponent(USplineMeshComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TickPoints();
    UFUNCTION(BlueprintCallable) void UpdatePointMaterial(int32 PointIndex);  // parameters 0x4
};
