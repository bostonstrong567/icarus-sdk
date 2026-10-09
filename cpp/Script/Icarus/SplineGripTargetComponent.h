// /Script/Icarus.SplineGripTargetComponent
// Derives from: USplineComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x560, declared in Icarus/Source/Icarus/Objects/SplineGripTargetComponent.h

UCLASS(Config=Engine)
class USplineGripTargetComponent : public USplineComponent
{
public:
    UPROPERTY(Transient) UBodySetup* ShapeBodySetup;  // 0x0548, size 0x8
protected:
    uint8 : 1 bUseArchetypeBodySetup;  // 0x0550, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FBox CalcBoundingBox() const;  // parameters 0x1C
};
