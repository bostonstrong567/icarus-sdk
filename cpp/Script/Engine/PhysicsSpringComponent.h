// /Script/Engine.PhysicsSpringComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x220, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsSpringComponent.h

UCLASS(Config=Engine)
class UPhysicsSpringComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpringStiffness;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpringDamping;  // 0x01FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpringLengthAtRest;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpringRadius;  // 0x0204, size 0x4
    UPROPERTY(BlueprintReadWrite) TEnumAsByte<ECollisionChannel> SpringChannel;  // 0x0208, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIgnoreSelf;  // 0x0209, size 0x1
    UPROPERTY(Transient, BlueprintReadOnly) float SpringCompression;  // 0x020C, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FVector CurrentEndPoint;  // 0x0210, private

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetNormalizedCompressionScalar() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetSpringCurrentEndPoint() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetSpringDirection() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetSpringRestingPoint() const;  // parameters 0xC
};
