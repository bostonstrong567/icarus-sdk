// /Script/Engine.MovementComponent
// Derives from: UActorComponent > UObject
// size 0xF0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/MovementComponent.h

UCLASS(Abstract, Config=Engine)
class UMovementComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Transient, Instanced, BlueprintReadOnly) USceneComponent* UpdatedComponent;  // 0x00B0, size 0x8
    UPROPERTY(Transient, Instanced, BlueprintReadOnly) UPrimitiveComponent* UpdatedPrimitive;  // 0x00B8, size 0x8
    EMoveComponentFlags MoveComponentFlags;  // 0x00C0, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Velocity;  // 0x00C4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUpdateOnlyIfRendered : 1;  // 0x00E8, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAutoUpdateTickRegistration : 1;  // 0x00E8, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bTickBeforeOwner : 1;  // 0x00E8, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAutoRegisterUpdatedComponent : 1;  // 0x00E8, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bConstrainToPlane : 1;  // 0x00E8, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bSnapToPlaneAtStart : 1;  // 0x00E8, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAutoRegisterPhysicsVolumeUpdates : 1;  // 0x00E8, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bComponentShouldUpdatePhysicsVolume : 1;  // 0x00E8, mask 0x80
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector PlaneConstraintNormal;  // 0x00D0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector PlaneConstraintOrigin;  // 0x00DC, size 0xC
private:
    bool bInOnRegister;  // 0x00E9, not reflected
    bool bInInitializeComponent;  // 0x00EA, not reflected
    UPROPERTY(EditAnywhere) EPlaneConstraintAxisSetting PlaneConstraintAxisSetting;  // 0x00EB, size 0x1
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector ConstrainDirectionToPlane(FVector Direction) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector ConstrainLocationToPlane(FVector Location) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector ConstrainNormalToPlane(FVector Normal) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetGravityZ() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxSpeed() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) APhysicsVolume* GetPhysicsVolume() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) EPlaneConstraintAxisSetting GetPlaneConstraintAxisSetting() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetPlaneConstraintNormal() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetPlaneConstraintOrigin() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsExceedingMaxSpeed(float MaxSpeed) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) float K2_GetMaxSpeedModifier() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float K2_GetModifiedMaxSpeed() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool K2_MoveUpdatedComponent(FVector Delta, FRotator NewRotation, FHitResult& OutHit, bool bSweep, bool bTeleport);  // parameters 0xA3
    UFUNCTION() void PhysicsVolumeChanged(APhysicsVolume* NewVolume);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting NewAxisSetting);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPlaneConstraintEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPlaneConstraintFromVectors(FVector Forward, FVector Up);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetPlaneConstraintNormal(FVector PlaneNormal);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetPlaneConstraintOrigin(FVector PlaneOrigin);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetUpdatedComponent(USceneComponent* NewUpdatedComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SnapUpdatedComponentToPlane();
    UFUNCTION(BlueprintCallable) void StopMovementImmediately();

    // Virtual functions that start here:
    //   AddRadialForce, AddRadialImpulse, ComputeSlideVector, ConstrainDirectionToPlane
    //   ConstrainLocationToPlane, ConstrainNormalToPlane, GetGravityZ, GetMaxSpeed, GetMaxSpeedModifier
    //   GetModifiedMaxSpeed, GetPenetrationAdjustment, GetPhysicsVolume, HandleImpact, InitCollisionParams
    //   IsExceedingMaxSpeed, IsInWater, K2_GetMaxSpeedModifier, K2_GetModifiedMaxSpeed
    //   MoveUpdatedComponentImpl, OnTeleported, OverlapTest, PhysicsVolumeChanged, ResolvePenetrationImpl
    //   SetPlaneConstraintAxisSetting, SetPlaneConstraintEnabled, SetPlaneConstraintFromVectors
    //   SetPlaneConstraintNormal, SetPlaneConstraintOrigin, SetUpdatedComponent, ShouldSkipUpdate
    //   SlideAlongSurface, SnapUpdatedComponentToPlane, StopMovementImmediately, TwoWallAdjust
    //   UpdateComponentVelocity, UpdateTickRegistration
};
