// /Script/Engine.PhysicsConstraintComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x410, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintComponent.h

UCLASS(Config=Engine)
class UPhysicsConstraintComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere) AActor* ConstraintActor1;  // 0x01F8, size 0x8
    UPROPERTY(EditAnywhere) FConstrainComponentPropName ComponentName1;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere) AActor* ConstraintActor2;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere) FConstrainComponentPropName ComponentName2;  // 0x0210, size 0x8
    TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> OverrideComponent1;  // 0x0218, not reflected
    TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> OverrideComponent2;  // 0x0220, not reflected
    UPROPERTY(Instanced, Deprecated) UPhysicsConstraintTemplate* ConstraintSetup;  // 0x0228, size 0x8
    UPROPERTY(BlueprintAssignable) FConstraintBrokenSignature OnConstraintBroken;  // 0x0230, size 0x10
    UPROPERTY(EditAnywhere) FConstraintInstance ConstraintInstance;  // 0x0240, size 0x1C8

    UFUNCTION(BlueprintCallable) void BreakConstraint();
    UFUNCTION(BlueprintCallable) void GetConstraintForce(FVector& OutLinearForce, FVector& OutAngularForce);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentSwing1() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentSwing2() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentTwist() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool IsBroken();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetAngularDriveMode(TEnumAsByte<EAngularDriveMode> DriveMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetAngularOrientationTarget(const FRotator& InPosTarget);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetAngularPlasticity(bool bAngularPlasticity, float AngularPlasticityThreshold);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetAngularSwing1Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing1LimitAngle);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetAngularSwing2Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing2LimitAngle);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetAngularTwistLimit(TEnumAsByte<EAngularConstraintMotion> ConstraintType, float TwistLimitAngle);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetAngularVelocityDriveSLERP(bool bEnableSLERP);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetAngularVelocityTarget(const FVector& InVelTarget);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetConstrainedComponents(UPrimitiveComponent* Component1, FName BoneName1, UPrimitiveComponent* Component2, FName BoneName2);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetConstraintReferenceFrame(TEnumAsByte<EConstraintFrame> Frame, const FTransform& RefFrame);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void SetConstraintReferenceOrientation(TEnumAsByte<EConstraintFrame> Frame, const FVector& PriAxis, const FVector& SecAxis);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetConstraintReferencePosition(TEnumAsByte<EConstraintFrame> Frame, const FVector& RefPosition);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetDisableCollision(bool bDisableCollision);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetLinearPlasticity(bool bLinearPlasticity, float LinearPlasticityThreshold);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void SetLinearPositionTarget(const FVector& InPosTarget);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void SetLinearVelocityTarget(const FVector& InVelTarget);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetLinearXLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetLinearYLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetLinearZLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetOrientationDriveSLERP(bool bEnableSLERP);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);  // parameters 0x2
};
