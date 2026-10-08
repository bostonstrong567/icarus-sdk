// /Script/CableComponent.CableComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x510, declared in Engine/Plugins/Runtime/CableComponent/Source/CableComponent/Classes/CableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UCableComponent : public UMeshComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAttachStart;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAttachEnd;  // 0x0479, size 0x1
    UPROPERTY(EditAnywhere) FComponentReference AttachEndTo;  // 0x0480, size 0x28
    UPROPERTY(EditAnywhere) FName AttachEndToSocketName;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector EndLocation;  // 0x04B0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CableLength;  // 0x04BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NumSegments;  // 0x04C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NumSubsections;  // 0x04C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SubstepTime;  // 0x04C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SolverIterations;  // 0x04CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnableStiffness;  // 0x04D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseSubstepping;  // 0x04D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSkipCableUpdateWhenNotVisible;  // 0x04D2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSkipCableUpdateWhenNotOwnerRecentlyRendered;  // 0x04D3, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnableCollision;  // 0x04D4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CollisionFriction;  // 0x04D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CableForce;  // 0x04DC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CableGravityScale;  // 0x04E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CableWidth;  // 0x04EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NumSides;  // 0x04F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TileMaterial;  // 0x04F4, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    float TimeRemainder;  // 0x04F8, private
    TArray<FCableParticle,TSizedDefaultAllocator<32> > Particles;  // 0x0500, private

    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetAttachedActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) USceneComponent* GetAttachedComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCableParticleLocations(TArray<FVector>& Locations) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetAttachEndToComponent(USceneComponent* Component, FName SocketName);  // parameters 0x10
};
