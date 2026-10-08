// /Script/Engine.PhysicsHandleComponent
// Derives from: UActorComponent > UObject
// size 0x160, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsHandleComponent.h

UCLASS(Config=Engine)
class UPhysicsHandleComponent : public UActorComponent
{
public:
    UPROPERTY(Instanced) UPrimitiveComponent* GrabbedComponent;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bSoftAngularConstraint : 1;  // 0x00C0, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bSoftLinearConstraint : 1;  // 0x00C0, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bInterpolateTarget : 1;  // 0x00C0, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LinearDamping;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LinearStiffness;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AngularDamping;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AngularStiffness;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InterpolationSpeed;  // 0x0140, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FName GrabbedBoneName;  // 0x00B8
    uint32 : 1 bRotationConstrained;  // 0x00C0
    FTransform TargetTransform;  // 0x00E0
    FTransform CurrentTransform;  // 0x0110
    physx::PxD6Joint * HandleData;  // 0x0148, protected
    physx::PxRigidDynamic * KinActorData;  // 0x0150, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) UPrimitiveComponent* GetGrabbedComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTargetLocationAndRotation(FVector& TargetLocation, FRotator& TargetRotation) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GrabComponent(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation, bool bConstrainRotation);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) void GrabComponentAtLocation(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void GrabComponentAtLocationWithRotation(UPrimitiveComponent* Component, FName InBoneName, FVector Location, FRotator Rotation);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void ReleaseComponent();
    UFUNCTION(BlueprintCallable) void SetAngularDamping(float NewAngularDamping);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAngularStiffness(float NewAngularStiffness);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetInterpolationSpeed(float NewInterpolationSpeed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLinearDamping(float NewLinearDamping);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLinearStiffness(float NewLinearStiffness);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTargetLocation(FVector NewLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetTargetLocationAndRotation(FVector NewLocation, FRotator NewRotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetTargetRotation(FRotator NewRotation);  // parameters 0xC

    // Virtual functions that start here:
    //   GrabComponent, GrabComponentImp, ReleaseComponent, UpdateDriveSettings, UpdateHandleTransform
};
