// /Script/Foliage.InteractiveFoliageActor
// Derives from: AStaticMeshActor > AActor > UObject
// size 0x290, declared in Engine/Source/Runtime/Foliage/Public/InteractiveFoliageActor.h

UCLASS(MinimalAPI, Config=Engine)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
    UPROPERTY(Instanced) UCapsuleComponent* CapsuleComponent;  // 0x0230, size 0x8
    UPROPERTY(Transient) FVector TouchingActorEntryPosition;  // 0x0238, size 0xC
    UPROPERTY(Transient) FVector FoliageVelocity;  // 0x0244, size 0xC
    UPROPERTY(Transient) FVector FoliageForce;  // 0x0250, size 0xC
    UPROPERTY(Transient) FVector FoliagePosition;  // 0x025C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FoliageDamageImpulseScale;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FoliageTouchImpulseScale;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FoliageStiffness;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FoliageStiffnessQuadratic;  // 0x0274, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FoliageDamping;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDamageImpulse;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTouchImpulse;  // 0x0280, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxForce;  // 0x0284, size 0x4
    UPROPERTY() float Mass;  // 0x0288, size 0x4

    UFUNCTION() void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);  // parameters 0xA8
};
